//
//  BottomAlert.h
//  OpenPlanet
//
//  Created by 王胜利 on 2018/6/7.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Masonry.h"
#import "ImageButton.h"
#import "Constant.h"

@interface BottomAlert : UIViewController

/// 标题
@property (nonatomic, strong) UILabel *titleLabel;
/// 关闭按钮
@property (nonatomic, strong) ImageButton *closeButton;
/// 底部内容区域
@property (nonatomic, strong) UIView *bottomView;
/// 外部传进来的View
@property (nonatomic, strong) UIView *contentView;
/// 关闭按钮block，如果block=nil，则会执行dismiss方法
@property (copy, nonatomic) VoidBlock closeAlertBlock;

/// 显示底部弹窗
+ (instancetype)showWithTitle:(NSString *)title
                  contentView:(UIView *)contentView
            contentViewHeight:(CGFloat)contentViewHeight;


/// 显示底部弹窗
+ (instancetype)showMasonryAutoHeightViewWithTitle:(NSString *)title contentView:(UIView *)contentView;


/// 关闭弹窗
- (void)closeAlert;

@end
