/* LibTomMath, multiple-precision integer library -- Tom St Denis
 *
 * LibTomMath is a library that provides multiple-precision
 * integer arithmetic as well as number theoretic functionality.
 *
 * The library was designed directly after the MPI library by
 * Michael Fromberger but has been written from scratch with
 * additional optimizations in place.
 *
 * The library is free for all purposes without any express
 * guarantee it works.
 *
 * Tom St Denis, tomstdenis@gmail.com, http://math.libtomcrypt.com
 */
#ifndef BN_H_
#define BN_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>

#include "tommath_class.h"

#ifndef MIN
   #define MIN(x,y) ((x)<(y)?(x):(y))
#endif

#ifndef MAX
   #define MAX(x,y) ((x)>(y)?(x):(y))
#endif

#ifdef __cplusplus
extern "C" {

/* C++ compilers don't like assigning void * to mp_digit * */
#define  OPT_CAST(x)  (x *)

#else

/* C on the other hand doesn't care */
#define  OPT_CAST(x)

#endif


/* detect 64-bit mode if possible */
#if defined(__x86_64__) 
   #if !(defined(MP_64BIT) && defined(MP_16BIT) && defined(MP_8BIT))
      #define MP_64BIT
   #endif
#endif

/* some default configurations.
 *
 * A "mp_digit" must be able to hold DIGIT_BIT + 1 bits
 * A "mp_word" must be able to hold 2*DIGIT_BIT + 1 bits
 *
 * At the very least a mp_digit must be able to hold 7 bits
 * [any size beyond that is ok provided it doesn't overflow the data type]
 */
#ifdef MP_8BIT
   typedef unsigned char      mp_digit;
   typedef unsigned short     mp_word;
#elif defined(MP_16BIT)
   typedef unsigned short     mp_digit;
   typedef unsigned long      mp_word;
#elif defined(MP_64BIT)
   /* for GCC only on supported platforms */
#ifndef CRYPT
   typedef unsigned long long ulong64;
   typedef signed long long   long64;
#endif

   typedef unsigned long      mp_digit;
   typedef unsigned long      mp_word __attribute__ ((mode(TI)));

   #define DIGIT_BIT          60
#else
   /* this is the default case, 28-bit digits */
   
   /* this is to make porting into LibTomCrypt easier :-) */
#ifndef CRYPT
   #if defined(_MSC_VER) || defined(__BORLANDC__) 
      typedef unsigned __int64   ulong64;
      typedef signed __int64     long64;
   #else
      typedef unsigned long long ulong64;
      typedef signed long long   long64;
   #endif
#endif

   typedef unsigned long      mp_digit;
   typedef ulong64            mp_word;

#ifdef MP_31BIT   
   /* this is an extension that uses 31-bit digits */
   #define DIGIT_BIT          31
#else
   /* default case is 28-bit digits, defines MP_28BIT as a handy macro to test */
   #define DIGIT_BIT          28
   #define MP_28BIT
#endif   
#endif

/* define heap macros */
#ifndef CRYPT
   /* default to libc stuff */
   #ifndef XMALLOC 
       #define XMALLOC  malloc
       #define XFREE    free
       #define XREALLOC realloc
       #define XCALLOC  calloc
   #else
      /* prototypes for our heap functions */
      extern void *XMALLOC(size_t n);
      extern void *XREALLOC(void *p, size_t n);
      extern void *XCALLOC(size_t n, size_t s);
      extern void XFREE(void *p);
   #endif
#endif


/* otherwise the bits per digit is calculated automatically from the size of a mp_digit */
#ifndef DIGIT_BIT
   #define DIGIT_BIT     ((int)((CHAR_BIT * sizeof(mp_digit) - 1)))  /* bits per digit */
#endif

#define MP_DIGIT_BIT     DIGIT_BIT
#define MP_MASK          ((((mp_digit)1)<<((mp_digit)DIGIT_BIT))-((mp_digit)1))
#define MP_DIGIT_MAX     MP_MASK

/* equalities */
#define MP_LT        -1   /* less than */
#define MP_EQ         0   /* equal to */
#define MP_GT         1   /* greater than */

#define MP_ZPOS       0   /* positive integer */
#define MP_NEG        1   /* negative */

#define MP_OKAY       0   /* ok result */
#define MP_MEM        -2  /* out of mem */
#define MP_VAL        -3  /* invalid input */
#define MP_RANGE      MP_VAL

#define MP_YES        1   /* yes response */
#define MP_NO         0   /* no response */

/* Primality generation flags */
#define LTM_PRIME_BBS      0x0001 /* BBS style prime */
#define LTM_PRIME_SAFE     0x0002 /* Safe prime (p-1)/2 == prime */
#define LTM_PRIME_2MSB_ON  0x0008 /* force 2nd MSB to 1 */

typedef int           mp_err;

/* you'll have to tune these... */
extern int KARATSUBA_MUL_CUTOFF_EOS,
           KARATSUBA_SQR_CUTOFF_EOS,
           TOOM_MUL_CUTOFF_EOS,
           TOOM_SQR_CUTOFF_EOS;

/* define this to use lower memory usage routines (exptmods mostly) */
/* #define MP_LOW_MEM */

/* default precision */
#ifndef MP_PREC
   #ifndef MP_LOW_MEM
      #define MP_PREC                 32     /* default digits of precision */
   #else
      #define MP_PREC                 8      /* default digits of precision */
   #endif   
#endif

/* size of comba arrays, should be at least 2 * 2**(BITS_PER_WORD - BITS_PER_DIGIT*2) */
#define MP_WARRAY               (1 << (sizeof(mp_word) * CHAR_BIT - 2 * DIGIT_BIT + 1))

/* the infamous mp_int structure */
typedef struct  {
    int used, alloc, sign;
    mp_digit *dp;
} mp_int;

/* callback for mp_prime_randomEOS, should fill dst with random bytes and return how many read [upto len] */
typedef int ltm_prime_callbackEOS(unsigned char *dst, int len, void *dat);


#define USED(m)    ((m)->used)
#define DIGIT(m,k) ((m)->dp[(k)])
#define SIGN(m)    ((m)->sign)

/* error code to char* string */
char *mp_error_to_stringEOS(int code);

/* ---> init and deinit bignum functions <--- */
/* init a bignum */
int mp_initEOS(mp_int *a);

/* free a bignum */
void mp_clearEOS(mp_int *a);

/* init a null terminated series of arguments */
int mp_init_multiEOS(mp_int *mp, ...);

/* clear a null terminated series of arguments */
void mp_clear_multiEOS(mp_int *mp, ...);

/* exchange two ints */
void mp_exchEOS(mp_int *a, mp_int *b);

/* shrink ram required for a bignum */
int mp_shrinkEOS(mp_int *a);

/* grow an int to a given size */
int mp_growEOS(mp_int *a, int size);

/* init to a given number of digits */
int mp_init_sizeEOS(mp_int *a, int size);

/* ---> Basic Manipulations <--- */
#define mp_iszero(a) (((a)->used == 0) ? MP_YES : MP_NO)
#define mp_iseven(a) (((a)->used > 0 && (((a)->dp[0] & 1) == 0)) ? MP_YES : MP_NO)
#define mp_isodd(a)  (((a)->used > 0 && (((a)->dp[0] & 1) == 1)) ? MP_YES : MP_NO)

/* set to zero */
void mp_zeroEOS(mp_int *a);

/* set to a digit */
void mp_setEOS(mp_int *a, mp_digit b);

/* set a 32-bit const */
int mp_set_intEOS(mp_int *a, unsigned long b);

/* get a 32-bit value */
unsigned long mp_get_intEOS(mp_int * a);

/* initialize and set a digit */
int mp_init_setEOS (mp_int * a, mp_digit b);

/* initialize and set 32-bit value */
int mp_init_set_intEOS (mp_int * a, unsigned long b);

/* copy, b = a */
int mp_copyEOS(mp_int *a, mp_int *b);

/* inits and copies, a = b */
int mp_init_copyEOS(mp_int *a, mp_int *b);

/* trim unused digits */
void mp_clampEOS(mp_int *a);

/* ---> digit manipulation <--- */

/* right shift by "b" digits */
void mp_rshdEOS(mp_int *a, int b);

/* left shift by "b" digits */
int mp_lshdEOS(mp_int *a, int b);

/* c = a / 2**b */
int mp_div_2dEOS(mp_int *a, int b, mp_int *c, mp_int *d);

/* b = a/2 */
int mp_div_2EOS(mp_int *a, mp_int *b);

/* c = a * 2**b */
int mp_mul_2dEOS(mp_int *a, int b, mp_int *c);

/* b = a*2 */
int mp_mul_2EOS(mp_int *a, mp_int *b);

/* c = a mod 2**d */
int mp_mod_2dEOS(mp_int *a, int b, mp_int *c);

/* computes a = 2**b */
int mp_2exptEOS(mp_int *a, int b);

/* Counts the number of lsbs which are zero before the first zero bit */
int mp_cnt_lsbEOS(mp_int *a);

/* I Love Earth! */

/* makes a pseudo-random int of a given size */
int mp_randEOS(mp_int *a, int digits);

/* ---> binary operations <--- */
/* c = a XOR b  */
int mp_xorEOS(mp_int *a, mp_int *b, mp_int *c);

/* c = a OR b */
int mp_orEOS(mp_int *a, mp_int *b, mp_int *c);

/* c = a AND b */
int mp_andEOS(mp_int *a, mp_int *b, mp_int *c);

/* ---> Basic arithmetic <--- */

/* b = -a */
int mp_negEOS(mp_int *a, mp_int *b);

/* b = |a| */
int mp_absEOS(mp_int *a, mp_int *b);

/* compare a to b */
int mp_cmpEOS(mp_int *a, mp_int *b);

/* compare |a| to |b| */
int mp_cmp_magEOS(mp_int *a, mp_int *b);

/* c = a + b */
int mp_addEOS(mp_int *a, mp_int *b, mp_int *c);

/* c = a - b */
int mp_subEOS(mp_int *a, mp_int *b, mp_int *c);

/* c = a * b */
int mp_mulEOS(mp_int *a, mp_int *b, mp_int *c);

/* b = a*a  */
int mp_sqrEOS(mp_int *a, mp_int *b);

/* a/b => cb + d == a */
int mp_divEOS(mp_int *a, mp_int *b, mp_int *c, mp_int *d);

/* c = a mod b, 0 <= c < b  */
int mp_modEOS(mp_int *a, mp_int *b, mp_int *c);

/* ---> single digit functions <--- */

/* compare against a single digit */
int mp_cmp_dEOS(mp_int *a, mp_digit b);

/* c = a + b */
int mp_add_dEOS(mp_int *a, mp_digit b, mp_int *c);

/* c = a - b */
int mp_sub_dEOS(mp_int *a, mp_digit b, mp_int *c);

/* c = a * b */
int mp_mul_dEOS(mp_int *a, mp_digit b, mp_int *c);

/* a/b => cb + d == a */
int mp_div_dEOS(mp_int *a, mp_digit b, mp_int *c, mp_digit *d);

/* a/3 => 3c + d == a */
int mp_div_3EOS(mp_int *a, mp_int *c, mp_digit *d);

/* c = a**b */
int mp_expt_dEOS(mp_int *a, mp_digit b, mp_int *c);

/* c = a mod b, 0 <= c < b  */
int mp_mod_dEOS(mp_int *a, mp_digit b, mp_digit *c);

/* ---> number theory <--- */

/* d = a + b (mod c) */
int mp_addmodEOS(mp_int *a, mp_int *b, mp_int *c, mp_int *d);

/* d = a - b (mod c) */
int mp_submodEOS(mp_int *a, mp_int *b, mp_int *c, mp_int *d);

/* d = a * b (mod c) */
int mp_mulmodEOS(mp_int *a, mp_int *b, mp_int *c, mp_int *d);

/* c = a * a (mod b) */
int mp_sqrmodEOS(mp_int *a, mp_int *b, mp_int *c);

/* c = 1/a (mod b) */
int mp_invmodEOS(mp_int *a, mp_int *b, mp_int *c);

/* c = (a, b) */
int mp_gcdEOS(mp_int *a, mp_int *b, mp_int *c);

/* produces value such that U1*a + U2*b = U3 */
int mp_exteuclidEOS(mp_int *a, mp_int *b, mp_int *U1, mp_int *U2, mp_int *U3);

/* c = [a, b] or (a*b)/(a, b) */
int mp_lcmEOS(mp_int *a, mp_int *b, mp_int *c);

/* finds one of the b'th root of a, such that |c|**b <= |a|
 *
 * returns error if a < 0 and b is even
 */
int mp_n_rootEOS(mp_int *a, mp_digit b, mp_int *c);

/* special sqrt algo */
int mp_sqrtEOS(mp_int *arg, mp_int *ret);

/* is number a square? */
int mp_is_squareEOS(mp_int *arg, int *ret);

/* computes the jacobi c = (a | n) (or Legendre if b is prime)  */
int mp_jacobiEOS(mp_int *a, mp_int *n, int *c);

/* used to setup the Barrett reduction for a given modulus b */
int mp_reduce_setupEOS(mp_int *a, mp_int *b);

/* Barrett Reduction, computes a (mod b) with a precomputed value c
 *
 * Assumes that 0 < a <= b*b, note if 0 > a > -(b*b) then you can merely
 * compute the reduction as -1 * mp_reduceEOS(mp_absEOS(a)) [pseudo code].
 */
int mp_reduceEOS(mp_int *a, mp_int *b, mp_int *c);

/* setups the montgomery reduction */
int mp_montgomery_setupEOS(mp_int *a, mp_digit *mp);

/* computes a = B**n mod b without division or multiplication useful for
 * normalizing numbers in a Montgomery system.
 */
int mp_montgomery_calc_normalizationEOS(mp_int *a, mp_int *b);

/* computes x/R == x (mod N) via Montgomery Reduction */
int mp_montgomery_reduceEOS(mp_int *a, mp_int *m, mp_digit mp);

/* returns 1 if a is a valid DR modulus */
int mp_dr_is_modulusEOS(mp_int *a);

/* sets the value of "d" required for mp_dr_reduceEOS */
void mp_dr_setupEOS(mp_int *a, mp_digit *d);

/* reduces a modulo b using the Diminished Radix method */
int mp_dr_reduceEOS(mp_int *a, mp_int *b, mp_digit mp);

/* returns true if a can be reduced with mp_reduce_2kEOS */
int mp_reduce_is_2kEOS(mp_int *a);

/* determines k value for 2k reduction */
int mp_reduce_2k_setupEOS(mp_int *a, mp_digit *d);

/* reduces a modulo b where b is of the form 2**p - k [0 <= a] */
int mp_reduce_2kEOS(mp_int *a, mp_int *n, mp_digit d);

/* returns true if a can be reduced with mp_reduce_2k_lEOS */
int mp_reduce_is_2k_lEOS(mp_int *a);

/* determines k value for 2k reduction */
int mp_reduce_2k_setup_lEOS(mp_int *a, mp_int *d);

/* reduces a modulo b where b is of the form 2**p - k [0 <= a] */
int mp_reduce_2k_lEOS(mp_int *a, mp_int *n, mp_int *d);

/* d = a**b (mod c) */
int mp_exptmodEOS(mp_int *a, mp_int *b, mp_int *c, mp_int *d);

/* ---> Primes <--- */

/* number of primes */
#ifdef MP_8BIT
   #define PRIME_SIZE      31
#else
   #define PRIME_SIZE      256
#endif

/* table of first PRIME_SIZE primes */
extern const mp_digit ltm_prime_tabEOS[];

/* result=1 if a is divisible by one of the first PRIME_SIZE primes */
int mp_prime_is_divisibleEOS(mp_int *a, int *result);

/* performs one Fermat test of "a" using base "b".
 * Sets result to 0 if composite or 1 if probable prime
 */
int mp_prime_fermatEOS(mp_int *a, mp_int *b, int *result);

/* performs one Miller-Rabin test of "a" using base "b".
 * Sets result to 0 if composite or 1 if probable prime
 */
int mp_prime_miller_rabinEOS(mp_int *a, mp_int *b, int *result);

/* This gives [for a given bit size] the number of trials required
 * such that Miller-Rabin gives a prob of failure lower than 2^-96 
 */
int mp_prime_rabin_miller_trialsEOS(int size);

/* performs t rounds of Miller-Rabin on "a" using the first
 * t prime bases.  Also performs an initial sieve of trial
 * division.  Determines if "a" is prime with probability
 * of error no more than (1/4)**t.
 *
 * Sets result to 1 if probably prime, 0 otherwise
 */
int mp_prime_is_primeEOS(mp_int *a, int t, int *result);

/* finds the next prime after the number "a" using "t" trials
 * of Miller-Rabin.
 *
 * bbs_style = 1 means the prime must be congruent to 3 mod 4
 */
int mp_prime_next_primeEOS(mp_int *a, int t, int bbs_style);

/* makes a truly random prime of a given size (bytes),
 * call with bbs = 1 if you want it to be congruent to 3 mod 4 
 *
 * You have to supply a callback which fills in a buffer with random bytes.  "dat" is a parameter you can
 * have passed to the callback (e.g. a state or something).  This function doesn't use "dat" itself
 * so it can be NULL
 *
 * The prime generated will be larger than 2^(8*size).
 */
#define mp_prime_randomEOS(a, t, size, bbs, cb, dat) mp_prime_random_exEOS(a, t, ((size) * 8) + 1, (bbs==1)?LTM_PRIME_BBS:0, cb, dat)

/* makes a truly random prime of a given size (bits),
 *
 * Flags are as follows:
 * 
 *   LTM_PRIME_BBS      - make prime congruent to 3 mod 4
 *   LTM_PRIME_SAFE     - make sure (p-1)/2 is prime as well (implies LTM_PRIME_BBS)
 *   LTM_PRIME_2MSB_OFF - make the 2nd highest bit zero
 *   LTM_PRIME_2MSB_ON  - make the 2nd highest bit one
 *
 * You have to supply a callback which fills in a buffer with random bytes.  "dat" is a parameter you can
 * have passed to the callback (e.g. a state or something).  This function doesn't use "dat" itself
 * so it can be NULL
 *
 */
int mp_prime_random_exEOS(mp_int *a, int t, int size, int flags, ltm_prime_callbackEOS cb, void *dat);

/* ---> radix conversion <--- */
int mp_count_bitsEOS(mp_int *a);

int mp_unsigned_bin_sizeEOS(mp_int *a);
int mp_read_unsigned_binEOS(mp_int *a, const unsigned char *b, int c);
int mp_to_unsigned_binEOS(mp_int *a, unsigned char *b);
int mp_to_unsigned_bin_nEOS (mp_int * a, unsigned char *b, unsigned long *outlen);

int mp_signed_bin_sizeEOS(mp_int *a);
int mp_read_signed_binEOS(mp_int *a, const unsigned char *b, int c);
int mp_to_signed_binEOS(mp_int *a,  unsigned char *b);
int mp_to_signed_bin_nEOS (mp_int * a, unsigned char *b, unsigned long *outlen);

int mp_read_radixEOS(mp_int *a, const char *str, int radix);
int mp_toradixEOS(mp_int *a, char *str, int radix);
int mp_toradix_nEOS(mp_int * a, char *str, int radix, int maxlen);
int mp_radix_sizeEOS(mp_int *a, int radix, int *size);

int mp_freadEOS(mp_int *a, int radix, FILE *stream);
int mp_fwriteEOS(mp_int *a, int radix, FILE *stream);

#define mp_read_raw(mp, str, len) mp_read_signed_binEOS((mp), (str), (len))
#define mp_raw_size(mp)           mp_signed_bin_sizeEOS(mp)
#define mp_toraw(mp, str)         mp_to_signed_binEOS((mp), (str))
#define mp_read_mag(mp, str, len) mp_read_unsigned_binEOS((mp), (str), (len))
#define mp_mag_size(mp)           mp_unsigned_bin_sizeEOS(mp)
#define mp_tomag(mp, str)         mp_to_unsigned_binEOS((mp), (str))

#define mp_tobinary(M, S)  mp_toradixEOS((M), (S), 2)
#define mp_tooctal(M, S)   mp_toradixEOS((M), (S), 8)
#define mp_todecimal(M, S) mp_toradixEOS((M), (S), 10)
#define mp_tohex(M, S)     mp_toradixEOS((M), (S), 16)

/* lowlevel functions, do not call! */
int s_mp_addEOS(mp_int *a, mp_int *b, mp_int *c);
int s_mp_subEOS(mp_int *a, mp_int *b, mp_int *c);
#define s_mp_mul(a, b, c) s_mp_mul_digsEOS(a, b, c, (a)->used + (b)->used + 1)
int fast_s_mp_mul_digsEOS(mp_int *a, mp_int *b, mp_int *c, int digs);
int s_mp_mul_digsEOS(mp_int *a, mp_int *b, mp_int *c, int digs);
int fast_s_mp_mul_high_digsEOS(mp_int *a, mp_int *b, mp_int *c, int digs);
int s_mp_mul_high_digsEOS(mp_int *a, mp_int *b, mp_int *c, int digs);
int fast_s_mp_sqrEOS(mp_int *a, mp_int *b);
int s_mp_sqrEOS(mp_int *a, mp_int *b);
int mp_karatsuba_mulEOS(mp_int *a, mp_int *b, mp_int *c);
int mp_toom_mulEOS(mp_int *a, mp_int *b, mp_int *c);
int mp_karatsuba_sqrEOS(mp_int *a, mp_int *b);
int mp_toom_sqrEOS(mp_int *a, mp_int *b);
int fast_mp_invmodEOS(mp_int *a, mp_int *b, mp_int *c);
int mp_invmod_slowEOS (mp_int * a, mp_int * b, mp_int * c);
int fast_mp_montgomery_reduceEOS(mp_int *a, mp_int *m, mp_digit mp);
int mp_exptmod_fastEOS(mp_int *G, mp_int *X, mp_int *P, mp_int *Y, int mode);
int s_mp_exptmodEOS (mp_int * G, mp_int * X, mp_int * P, mp_int * Y, int mode);
void bn_reverseEOS(unsigned char *s, int len);

extern const char *mp_s_rmapEOS;

#ifdef __cplusplus
   }
#endif

#endif


/* $Source$ */
/* $Revision: 0.39 $ */
/* $Date: 2006-04-06 19:49:59 +0000 $ */
