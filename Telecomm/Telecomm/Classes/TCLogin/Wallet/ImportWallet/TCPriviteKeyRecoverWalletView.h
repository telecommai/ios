//
//  TCPriviteKeyRecoverWalletView.h
//  TalkChain
//
//  Created by 王胜利 on 2018/3/28.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TCPriviteKeyRecoverWalletView : UIView

/// 警告文本
@property (nonatomic, strong) UILabel *tipLabel;
/// 秘钥
@property (nonatomic, strong) UITextView *priviteKeyTextView;
/// 下一步按钮
@property (nonatomic, strong) UIButton *nextButton;

@end

