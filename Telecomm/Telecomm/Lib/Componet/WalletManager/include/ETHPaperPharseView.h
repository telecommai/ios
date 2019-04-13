//
//  ETHPaperPharseView.h
//  OpenPlanet
//
//  Created by 王胜利 on 2018/6/8.
//  Copyright © 2018年 wsl. All rights reserved.
//  ETH创建钱包写下助记词View
//

#import <UIKit/UIKit.h>
#import "TalkChainHeader.h"
#import "TCWalletSubTipView.h"


@interface ETHPaperPharseView : UIView


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
// 设置助记词
@property (nonatomic, strong) NSArray *memoryWords;
/// 下一步按钮
@property (nonatomic, strong) UIButton *nextButton;


@end
