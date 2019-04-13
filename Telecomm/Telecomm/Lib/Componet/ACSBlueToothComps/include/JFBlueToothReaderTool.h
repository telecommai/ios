//
//  JFBlueToothReaderTool.h
//  ACSBlueToothComps
//
//  Created by 董艳武 on 2019/2/27.
//  Copyright © 2019 董艳武. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFBlueToothReaderTool : NSObject

+ (NSArray<NSString *> *)hexStringArrayFromString:(NSString *)string;

+(NSArray<NSString *> *)hexStringArrayFromDictionary:(NSDictionary *)dictionary;

+(NSDictionary *)dictionaryFromHexStringArray:(NSArray<NSString *> *)hexStringArray;

+(NSString *)stringFromHexStringArray:(NSArray<NSString *> *)hexStringArray;

@end

NS_ASSUME_NONNULL_END
