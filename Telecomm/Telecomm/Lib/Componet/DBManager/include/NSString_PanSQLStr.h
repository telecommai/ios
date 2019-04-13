//
//  NSString+PanSQLStr.h
//  DBManager
//
//  Created by pansoft_mac on 13-7-18.
//  Copyright (c) 2013年 pansoft_mac. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString_PanSQLStr : NSObject

@end

typedef struct PanSQLDeal {
    int   dealType;
    char *tableName;
} PanSQLDeal;

@interface NSString (PanSQLStr)

-(PanSQLDeal)substringFromSQL;
//+(PanSQLDeal)substringFromSQL:(NSString *)SQL;

/** 整理insert语句 */
+ (NSString *)sqlStringInsertToTable:(NSString *)tableName withDictionary:(NSDictionary *)dic ;
/** 整理delete语句 */
+ (NSString *)sqlStringDeleteFromTable:(NSString *)tableName withDictionary:(NSDictionary *)dic andPrimeKey:(NSArray *)primeKey;
/** 整理update语句 */
+ (NSString *)sqlStringUpdateToTable:(NSString *)tableName withDictionary:(NSDictionary *)dic andPrimeKey:(NSArray *)primeKey;
@end
