//
//  EOSCreateKeyView.h
//  WalletManager
//
//  Created by 王胜利 on 2018/7/27.
//  Copyright © 2018年 pansoft. All rights reserved.
//  EOS创建双私钥(未激活状态)View
//

#import <UIKit/UIKit.h>

@interface EOSCreateKeyView : UIView

@property (nonatomic, strong) UIScrollView *contentView;
@property (nonatomic, strong) UILabel *tipLabel;
@property (nonatomic, strong) UIImageView *qrImageView;
@property (nonatomic, strong) UILabel *accountTitleLabel;
@property (nonatomic, strong) UITextField *accountTextField;
@property (nonatomic, strong) UILabel *accountErrorTipLabel;
@property (nonatomic, strong) UILabel *keyLabel;

@property (nonatomic, strong) UIButton *sendToFriendButton;
@property (nonatomic, strong) UIButton *shareButton;

- (void)isEosAccountValidate:(BOOL)isValidate;

@end
