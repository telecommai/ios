//
//  JFNetStateView.h
//  ChatComps
//
//  Created by 谢虎 on 2018/10/29.
//  Copyright © 2018 Javor Feng. All rights reserved.
//  聊天列表网络状态展示框

#import <UIKit/UIKit.h>
#import "Constant.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFNetStateView : UIView
///提示Label
@property (nonatomic,strong)  UILabel                   *tipLabel;
///左侧图片
@property (nonatomic,strong)  UIImageView               *erroImage;
///等待菊花旋转框
@property (nonatomic,strong)  UIActivityIndicatorView   *activityIndicatorView;
///点击此组件回调方法
@property (nonatomic,copy)    VoidBlock                 tipViewBlock;

///左侧图片  状态赋值
-(void)viewWithLeftImage:(UIImage *)leftImage state:(NSString *)state;
///等待菊花  开始转圈
-(void)activityStartAnimation;
///等待菊花  停止转圈
-(void)activityStopAnimation;
@end

NS_ASSUME_NONNULL_END
