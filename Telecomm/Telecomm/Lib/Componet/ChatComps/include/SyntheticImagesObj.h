//
//  SyntheticImagesObj.h
//  SyntheticImages
//
//  Created by 于仁汇 on 16/9/5.
//  Copyright © 2016年 YRH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface SyntheticImagesObj : NSObject

/**
 *  多张图片合成一张图片（图片数组）
 *
 *  @param imageArray 存放要合成的图片数组
 *
 *  @return 合成后的图片
 */
- (void)syntheticImagesWithImageArray:(NSMutableArray *)imageArray andNewImageWidth:(CGFloat)width height:(CGFloat)height withImg:(void (^) (UIImage *image))image;

/**
 *  多张图片合成一张图片（图片URL数组）
 *
 *  @param imageURLArray 图片URL数组
 *  @param width         合成后的图片宽
 *  @param height        合成后的图片高
 *
 *  @return 合成的图片
 */
- (void)syntheticImagesWithImageURLArray:(NSMutableArray *)imageURLArray andNewImageWidth:(CGFloat)width height:(CGFloat)height withImg:(void(^)(UIImage *image))returnImg;

@property (nonatomic,strong) NSOperationQueue  *queue;

@end
