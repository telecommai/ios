//
//  NSString+Category.h
//  EShop
//
//  Created by 王胜利 on 2018/3/6.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>



#pragma mark - 进制转换
@interface NSString (NumberConversion)

/// 是否是纯数字
- (BOOL)isNum;
/// 十六进制格式化(1.加0x,2.转小写)
- (NSString *)hexLowercaseStringFormat;
/// 十进制转十六进制
- (NSString *)decimalToHex;

@end



@interface NSString (DictionartToJsonString)

/**
 字典转换成json

 @param dict 字典数据源
 @return 返回的json
 */
+(NSString *)convertToJsonData:(NSDictionary *)dict;

@end


@interface NSString (JsonStringToDictionary)

/// 将 Json样式的string转为 字典
+ (NSDictionary *)jsonStringToDictionary:(NSString *)string;
/// 将一个内容 为json样式的类型 转为 json字符串
+ (NSString *)jsonInfoToJsonString:(id)jsonInfo;

@end



#pragma mark - NSString扩展
@interface NSString (VerticalString)
/// 竖向字符串
- (NSString *)verticalString;

/// 时间字符串
+ (NSString *)dateWithTimeInterval:(double)timeInterval formater:(NSString *)formatter;

/// 本地显示时间
+ (NSString *)dateLocalShowWithTimeInterval:(double)timeInterval;

@end

@interface NSString (Thousands)

/// 变成 千分位， 返回 string类型
+ (NSString *)changeThousands:(CGFloat)number;
+ (NSString *)changeThousands:(CGFloat)number withPriceUnit:(NSString *)priceUnit;
/*
 显示千分位
 @prama value   转换的值
 @prama decimal 显示的小数位
 */
+ (NSString *)positiveFormat:(NSString *)value decimal:(NSInteger)decimal;
@end


@interface NSString (QrCode)


/// 1.生成二维码(黑白普通二维码(大小为300))
-(UIImage*)ex_qrCode;
/// 3.生成二维码(自定义大小黑白普通二维码)
-(UIImage*)ex_qrCodeWithSize:(CGFloat)size;
/// 2.生成二维码(带Logo二维码(大小:300))
-(UIImage*)ex_qrCodeWithLogo:(UIImage*)logo;
/// 4.生成二维码(带Logo二维码自定义大小)
-(UIImage*)ex_qrCodeWithSize:(CGFloat)size logo:(UIImage*)logo;
/// 5.生成二维码(自定义大小、颜色、背景颜色、边框宽度)
-(UIImage*)ex_qrCodeWithSize:(CGFloat)size color:(UIColor*)color bgColor:(UIColor*)bgColor borderWidth:(CGFloat)borderWidth;
/// 6.生成二维码(带Logo二维码自定义大小、颜色、背景颜色、边框宽度)
-(UIImage*)ex_qrCodeWithSize:(CGFloat)size color:(UIColor*)color bgColor:(UIColor*)bgColor borderWidth:(CGFloat)borderWidth logo:(UIImage *)logo;

/**
 7.生成二维码

 @param size 大小
 @param color 颜色
 @param bgColor 背景颜色
 @param borderWidth 边框颜色
 @param logo Logo
 @param logoRadius Logo圆角
 @param logoBorderWidth Logo边框宽
 @param logoBorderColor Logo边框颜色
 @return 自定义二维码
 */
-(UIImage*)ex_qrCodeWithSize:(CGFloat)size
                       color:(UIColor*)color
                     bgColor:(UIColor*)bgColor
                 borderWidth:(CGFloat)borderWidth
                        logo:(UIImage*)logo
                  logoRadius:(CGFloat)logoRadius
             logoBorderWidth:(CGFloat)logoBorderWidth
             logoBorderColor:(UIColor*)logoBorderColor;


@end

@interface NSString (UUIDString)

+ (NSString*)uuidString;

@end


@interface NSString (Validate)

/// 判断是否是纯英文字符串
-(Boolean)isPureEnglish;
/// 判断是否是空字符串
-(Boolean)isNotNull;
/// 邮箱判断
-(BOOL)isValidateEmail;
/// 手机号判断
- (BOOL)isValidPhoneNum;

@end


@interface NSString (Size)

- (CGFloat)widthWithSize:(CGSize)size lineBreakMode:(NSLineBreakMode)lineBreakMode font:(UIFont *)font;
- (CGFloat)heightWithSize:(CGSize)size lineBreakMode:(NSLineBreakMode)lineBreakMode font:(UIFont *)font;

- (CGSize)sizeWithSize:(CGSize)size lineBreakMode:(NSLineBreakMode)lineBreakMode font:(UIFont *)font;

@end

@interface NSString (Substring)

/// 获取字符串中多个相同字符串的所有range 返回的数组中元素需要用NSRangeFromString()方法，转成NSRange
+ (NSArray *)rangeOfSubString:(NSString *)subStr inString:(NSString *)string;

@end

@interface NSString (Highlight)
/**
 一段文字中的关键词高亮显示
 
 @param keywords 关键词
 @param color 高亮颜色
 @return 富文本对象
 */
-(NSAttributedString *)hightlightByKeywords:(NSString *)keywords highlightColor:(UIColor *)color;

@end


@interface NSString(emoji)

- (BOOL)stringContainsEmoji;

@end

@interface NSString(point)

+(NSString *)placeString:(NSString *)priceString;

@end

@interface NSString (money)
/// 大型金额转换成X万  X亿
+(NSString *)moneyStringWithBase:(double)base;

@end


@interface NSString (sqlParam)

#pragma mark - ' 替换成 ''
+(NSString *)sqlParamCheckWithString:(NSString *)string;

@end
