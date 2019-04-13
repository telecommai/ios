//
//  NewWalletInfoView.h
//  OpenPlanet
//
//  Created by 王胜利 on 2018/6/9.
//  Copyright © 2018年 wsl. All rights reserved.
//  创建钱包填写头像、名称界面View
//

#import <UIKit/UIKit.h>

@interface NewWalletInfoView : UIView

/// 钱包账户图片
@property (nonatomic, strong) UIButton *avatarButton;
/// 图片说明
@property (nonatomic, strong) UILabel *avatarTipLabel;
/// 钱包名称
@property (nonatomic, strong) UITextField *nameTextField;
/// 下一步按钮
@property (nonatomic, strong) UIButton *nextButton;

@end
