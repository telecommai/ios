//
//  JFImageSynthesisUtil.h
//  ToolsLibrary
//
//  Created by 虎 谢 on 2019/2/28.
//  Copyright © 2019年 Javor Feng. All rights reserved.
//  图片合成

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFImageSynthesisUtil : NSObject

/**
 图片是URL，默认宽度高度的图片合成

 @param imageURLArray 图片源
 @param image 返回的图片
 */
+ (void)imageSynthesisWithImageUrlArray:(NSMutableArray *)imageURLArray defaultImage:(void(^)(UIImage *image))image;

// 根据URL合成图片
/**
 自定义图片宽度的图片合成

 @param imageURLArray 图片源
 @param width 图片宽度
 @param height 图片高度
 @param finalImage 返回的图片
 */
+ (void)imageSynthesisWithImageUrlArray:(NSMutableArray *)imageURLArray andNewImageWidth:(CGFloat)width height:(CGFloat)height image:(void(^)(UIImage *image))finalImage;


/**
 根据图片源合成默认宽度高度图片

 @param imageArray 图片源
 @param image 图片源
 */
+ (void)imageSynthesisWithImageArray:(NSMutableArray *)imageArray defaultImage:(void (^) (UIImage *image))image;

/**
 根据图片源合成自定义尺寸宽度高度图片

 @param imageArray 图片源
 @param width 图片宽度
 @param height 图片高度
 @param finalImage 返回的图片
 */
+ (void)imageSynthesisWithImageArray:(NSMutableArray *)imageArray andNewImageWidth:(CGFloat)width height:(CGFloat)height image:(void (^) (UIImage *image))finalImage;

@end

NS_ASSUME_NONNULL_END
