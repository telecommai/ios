//
//  UIColor+Category.h
//  ToolsLibrary
//
//  Created by 王胜利 on 2019/1/29.
//  Copyright © 2019 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (Category)

- (NSArray <NSNumber *>*)colorRGB;

@end

@interface UIColor (HexString)
/**
 *  王彦铭16进制color值转换成uicolor
 *
 *  @param hexString <#hexString description#>
 *
 *  @return <#return value description#>
 */
+ (UIColor *) colorWithHexString: (NSString *) hexString;
+ (UIColor *)decimalRGBTransformToUIColor:(int)colorInt;
@end


NS_ASSUME_NONNULL_END
