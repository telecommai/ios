//
//  UIImage+ImageStretch.h
//  UIImageTensileTest
//
//  Created by YRH on 2018/3/21.
//  Copyright © 2018年 YRH. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (ImageStretch)

/**
 聊天框气泡拉伸图片
 
 @param image 原始图片
 @return 拉伸后的图片
 */
+ (UIImage *)chatBubbleimageStretchWithImage:(UIImage *)image;

/**
 拉伸图片
 
 @param image 原始图片
 @param insets 盖帽范围
 @return 拉伸后的图片
 */
+ (UIImage *)imageStretchWithImage:(UIImage *)image insets:(UIEdgeInsets)insets;

@end
