//
//  TCObserverRecoverWalletView.h
//  TalkChain
//
//  Created by 高建飞 on 2018/6/19.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TCObserverRecoverWalletView : UIView

/// 警告文本
@property (nonatomic, strong) UILabel *tipLabel;
/// 钱包地址
@property (nonatomic, strong) UITextView *walletAddressTextView;
/// 下一步按钮
@property (nonatomic, strong) UIButton *nextButton;

@end

