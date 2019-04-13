//
//  ImageItemLoadImage.h
//  ESPChatComps
//
//  Created by 于仁汇 on 17/2/6.
//  Copyright © 2017年 Pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "IMStructMessage.h"
#import "ImageItemImageSize.h"

@class FLAnimatedImageView;
/// 加载完成之后的图片、二进制数据
typedef void(^LoadedCompletionHandle)(UIImage *loadedImage, NSData *loadedImageData);
@interface ImageItemLoadImage : NSObject

/// 加载图片
- (void)loadImageWithMessage:(IMStructMessage *)message imageView:(FLAnimatedImageView *)imageView completionHandle:(LoadedCompletionHandle)completionHandle;

@end
