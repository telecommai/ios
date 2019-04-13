//
//  EOSCreateView.h
//  WalletManager
//
//  Created by 王胜利 on 2018/8/1.
//  Copyright © 2018年 pansoft. All rights reserved.
//  帮助创建EOS钱包View
//

#import <UIKit/UIKit.h>
#import "TradeOutItemView.h"


@interface EOSCreateView : UIView

@property (nonatomic, strong) UIScrollView *contentView;

@property (nonatomic, strong) UILabel *feeTitleLabel;
@property (nonatomic, strong) UILabel *feeLabel;

@property (nonatomic, strong) UILabel *feeRamTitleLabel;
@property (nonatomic, strong) UILabel *feeRamLabel;
@property (nonatomic, strong) UILabel *feeCpuTitleLabel;
@property (nonatomic, strong) UILabel *feeCpuLabel;
@property (nonatomic, strong) UILabel *feeNetTitleLabel;
@property (nonatomic, strong) UILabel *feeNetLabel;

@property (nonatomic, strong) UILabel *accountTitleLabel;
@property (nonatomic, strong) UITextField *accountTextField;
@property (nonatomic, strong) UILabel *accountErrorTipLabel;

@property (nonatomic, strong) UILabel *keyLabel;

@property (nonatomic, strong) TradeOutItemView *walletItem;
@property (nonatomic, strong) TradeOutItemView *accountItem;

@property (nonatomic, strong) UIButton *nextButton;


- (void)isEosAccountValidate:(BOOL)isValidate;


@end
