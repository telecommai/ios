//
//  UIImage+ExtractImage.h
//  ESPChatComps
//
//  Created by 于仁汇 on 16/11/10.
//  Copyright © 2016年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (ExtractImage)

/// 提取图片资源（参数传图片的完整名字，包含后缀）
//+ (UIImage *)extractImageWithImageName:(NSString *)imageName;
//+ (UIImage *)extractImageWithImageName:(NSString *)imageName WithImageBundleName:(NSString *)bundleName;
/*
 *参数：imageName 图片名称（包含后缀名）
 *     bundleName 图片所在的路径（不包括图片名）
 */
+ (UIImage *)extractImageWithImageName:(NSString *)imageName WithImageBundleName:(NSString *)bundleName;
@end
