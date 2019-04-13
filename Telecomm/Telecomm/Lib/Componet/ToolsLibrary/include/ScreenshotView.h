//
//  ScreenshotView.h
//  ToolsLibrary
//
//  Created by 夏祥可 on 2018/11/5.
//  Copyright © 2018 Javor Feng. All rights reserved.
//  截屏视图

#import <UIKit/UIKit.h>
#import "Constant.h"

NS_ASSUME_NONNULL_BEGIN

@interface ScreenshotView : UIView

@property (nonatomic,copy) IdBlock shareBlock;

- (instancetype)initWithImage:(UIImage *)image fristShow:(BOOL)fristShow;

- (void)show;
- (void)hiden;

@end

NS_ASSUME_NONNULL_END
