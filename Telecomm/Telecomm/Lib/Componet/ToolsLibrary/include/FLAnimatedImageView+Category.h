//
//  FLAnimatedImageView+Category.h
//  ToolsLibrary
//
//  Created by 王胜利 on 2018/8/14.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import "FLAnimatedImageView.h"
#import "SDWebImageManager.h"
#import "IMStructMessage.h"

@interface FLAnimatedImageView (Category)

- (void)flaImageCacheWithimageUrl:(NSURL *)imageUrl placeholderImage:(UIImage *)placeholderImage;

- (void)flaImageCacheWithimageUrl:(NSURL *)imageUrl placeholderImage:(UIImage *)placeholderImag structMessage:(IMStructMessage *)message progress:(SDWebImageDownloaderProgressBlock)progress completed:(SDInternalCompletionBlock)completed;

@end
