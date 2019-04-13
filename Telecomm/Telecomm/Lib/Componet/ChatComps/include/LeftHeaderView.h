//
//  LeftHeaderView.h
//  ESPChatComps
//
//  Created by 于仁汇 on 16/9/20.
//  Copyright © 2016年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EFAvatar.h"
#import "Constant.h"


@class LeftHeaderView;

@interface LeftHeaderView : UIView

@property (nonatomic, strong) EFAvatar          *headImageView;
@property (nonatomic, strong) UILabel           *nameLabel;
@property (nonatomic, strong) UILabel           *idLabel;
@property (nonatomic, strong) UIImageView       *qrImageView;

@property (nonatomic, strong) UIImageView       *genderImageView;
@property (nonatomic, copy)   NSString          *gender;
//点击二维码的回调
@property (nonatomic,copy) VoidBlock    qrBlock;

/// 赋值
- (void)viewWithAvatar:(NSString *)avatar nickName:(NSString *)nickName identity:(NSString *)identity gender:(NSString *)gender;

@end
