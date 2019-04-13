//
//  UIImageView+AnimatedGIF.h
//  ToolsLibrary
//
//  Created by 高建飞 on 2018/7/18.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImageView (AnimatedGIF)

- (void)imageCacheWithimageUrl:(NSURL *) imageUrl placeholderImage:(UIImage *)placeholderImage;

@end
