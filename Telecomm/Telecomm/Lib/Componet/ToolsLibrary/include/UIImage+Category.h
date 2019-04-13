//
//  UIImage+Category.h
//  EShop
//
//  Created by 王胜利 on 2018/3/6.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (ExtractImage)

/*
 *参数：imageName 图片名称（包含后缀名）
 *     bundleName 图片所在的路径（不包括图片名）
 */
+ (UIImage *)extractImageWithImageName:(NSString *)imageName WithImageBundleName:(NSString *)bundleName;

@end

@interface UIImage (LaunchImage)
/*
 引导页图片名称规则：
 4.0寸屏幕: 图片名@iphone4.0
 4.7寸屏幕: 图片名@iphone4.7
 5.5寸屏幕: 图片名@iphone5.5
 iphoneX寸屏幕: 图片名@iphonex
 
 传值是只传@之前的图片名
 
 */
/// 根据图片名赋值图片(传值是只传@之前的图片名）
+ (UIImage *)launchImageWithName:(NSString *)imageName;
/// 根据图片路径赋值图片（传值是只传@之前的图片名）
+ (UIImage *)launchImageWithContentFile:(NSString *)imagePath;
/// 从bundle中加载图片传值是只传@之前的图片名）
+ (UIImage *)launchImageWithBundleFile:(NSString *)imagePath;

@end


#pragma mark - UIImage扩展之颜色
@interface UIImage (Color)
/// 通过颜色生成图片
+ (UIImage *)ex_imageWithColor:(UIColor *)color;
+ (UIImage *)ex_imageWithColor:(UIColor *)color size:(CGSize)size;
/// 根据View画出一张图片
+ (UIImage *)ex_imageWithView:(UIView *)view withSize:(CGSize)size;
/// 截取scrollView屏幕
+(UIImage *)ex_imageWithScrollView:(UIScrollView *)scrollView;
/// 生成灰色默认图片
+ (UIImage *)ex_placeHolderImageWithGray;
@end




#pragma mark - UIImage扩展之圆角图片
@interface UIImage (RoundImage)
/**
 生成圆角图片

 @param size 大小
 @param radius 圆角
 @param borderWidth 线宽
 @param borderColor 线颜色
 @return 图片
 */
-(UIImage*)roundRectImageWithSize:(CGFloat)size radius:(CGFloat)radius borderWidth:(CGFloat)borderWidth borderColor:(UIColor*)borderColor;
-(UIImage*)roundRectImageWithSize:(CGFloat)size radius:(CGFloat)radius;


@end

#pragma mark - UIImage扩展之二维码
@interface UIImage (QrCode)

/// 识别图片二维码
-(NSString*)scanCodeContent;

@end



