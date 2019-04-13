//
//  TCBackUpMemoryView.h
//  TalkChain
//
//  Created by 王胜利 on 2018/3/16.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TalkChainHeader.h"
#import "TCWalletSubTipView.h"

@interface TCBackUpMemoryView : UIView

@property (nonatomic, strong) UIScrollView *contentView;
/// 子标题
@property (nonatomic, strong) UILabel *accountLabel;
/// 账号分割线
@property (nonatomic, strong) UIView *lineView;
/// 子标题
@property (nonatomic, strong) UILabel *subTitleLabel;
/// 警告文本
@property (nonatomic, strong) UILabel *tipLabel;
/// 助记词
@property (nonatomic, strong) UIView *memoryWordView;
/// 奖励
@property (nonatomic, strong) TCWalletSubTipView *subTipView;
// 设置助记词
@property (nonatomic, strong) NSArray *memoryWords;

/// 下一步按钮
@property (nonatomic, strong) UIButton *nextButton;


@end
