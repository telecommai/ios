//
//  EFTextSizeUtil.h
//  ESPChatComps
//
//  Created by 虎 谢 on 2018/3/26.
//  Copyright © 2018年 Pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface EFStringSizeUtil : NSObject

//根据字体和text返回size
+ (CGSize)sizeForText:(NSString *)text font:(UIFont *)font;

//根据文本很最大宽度字体返回size
+ (CGSize)sizeForText:(NSString *)text width:(float)width font:(UIFont *)font;

@end
