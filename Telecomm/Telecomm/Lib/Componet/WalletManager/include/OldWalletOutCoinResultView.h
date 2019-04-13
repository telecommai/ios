//
//  WalletOutCoinResultView.h
//  WalletManager
//
//  Created by 王胜利 on 2018/7/24.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OldWalletOutCoinResultItemView.h"

@interface OldWalletOutCoinResultView : UIView

@property (nonatomic, strong) UIScrollView *scrollView;

@property (nonatomic, strong) UIView *topView;
@property (nonatomic, strong) UIImageView *transferStateImageView;
@property (nonatomic, strong) UILabel *transferStateLabel;
@property (nonatomic, strong) UILabel *moneyLabel;

@property (nonatomic, strong) OldWalletOutCoinResultItemView *orderView;
@property (nonatomic, strong) OldWalletOutCoinResultItemView *timeView;
@property (nonatomic, strong) OldWalletOutCoinResultItemView *outAddressView;
@property (nonatomic, strong) OldWalletOutCoinResultItemView *inAddressView;

@end
