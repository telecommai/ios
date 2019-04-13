//
//  UIImage+ImageOperation.h
//  UIImageTensileTest
//
//  Created by YRH on 2018/4/9.
//  Copyright © 2018年 YRH. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (ImageOperation)

/**
 从沙盒中获取拉伸图片

 @param imageName 图片名字(不填参数suffix，并且名字不带后缀的，内部自动填充'.png')
 @param suffix 后缀
 @param isFlipMirror 是否镜像翻转
 @return 处理后的图片
 */
+ (UIImage *)sendboxImageStretchWithImageName:(NSString *)imageName suffix:(NSString *)suffix isFlipMirror:(BOOL)isFlipMirror;

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

/**
 读取沙盒中的图片,并镜像翻转
 
 @param imageName 图片名字(不填参数suffix，并且名字不带后缀的，内部自动填充'.png')
 @param suffix 图片后缀
 @param isFlipMirror 图片是否翻转
 @return 图片
 */
+ (UIImage *)sandboxImageWithImageName:(NSString *)imageName suffix:(NSString *)suffix isFlipMirror:(BOOL)isFlipMirror;


/**
 读取沙盒中的图片

 @param imageName 图片名字(不填参数suffix，并且名字不带后缀的，内部自动填充'.png')
 @param suffix 图片后缀
 @return 图片
 */
+ (UIImage *)sandboxImageWithImageName:(NSString *)imageName suffix:(NSString *)suffix;

/**
 图片镜像翻转

 @param originalImage 图片
 @return 镜像翻转后的图片
 */
+ (UIImage *)flipMirrorImageWithOriginalImage:(UIImage *)originalImage;

/**
 根据分辨率得到图片名字

 @param imageName 图片名字
 @return 带倍数的图片名字
 */
+ (NSString *)adapterDeviceResolutionImageName:(NSString *)imageName;

@end
