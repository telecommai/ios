//
//  TCSureMemoryView.h
//  OpenPlanet
//
//  Created by 王胜利 on 2018/4/26.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TalkChainHeader.h"

typedef void(^SureMemoryTapBlock)(NSString *word,NSUInteger index);


@interface TCSureMemoryView : UIView

/// 内容视图
@property (nonatomic, strong) UIScrollView *contentView;
/// 子标题
@property (nonatomic, strong) UILabel *subTitleLabel;
/// 警告文本
@property (nonatomic, strong) UILabel *tipLabel;
/// 确认助记词视图
@property (nonatomic, strong) UIView *selectedMemeoryWordView;
/// 助记词
@property (nonatomic, strong) UIView *noSelectMemoryWordView;
/// 下一步按钮
@property (nonatomic, strong) UIButton *nextButton;
/// 已经确认过的助记词
@property (nonatomic, strong) NSArray *selectedMemoryWords;
/// 未确认过的设置助记词
@property (nonatomic, strong) NSArray *noSelectMemoryWords;

@property (nonatomic, copy) SureMemoryTapBlock selectedMemoryWordTapAction;

@property (nonatomic, copy) SureMemoryTapBlock noSelectMemoryWordTapAction;

@end
