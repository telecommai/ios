//
//  HeaderCollectionReusableView.h
//  ESPChatComps
//
//  Created by 于仁汇 on 16/7/29.
//  Copyright © 2016年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol HeaderReusableViewDelegate <NSObject>

/**
 *  点击返回按钮的代理事件
 */
- (void)reusableViewBackBtnToDoEvent;

/**
 *  点击编辑按钮的代理事件(为处于编辑状态)
 */
- (void)reusableViewEditBtnEvent;

/**
 *  编辑状态下的代理事件
 */
- (void)reusableViewEditBtnIsEditEvent;

@end

@interface HeaderReusableView : UIView

/// 返回按钮
@property (nonatomic, strong) UIButton *backBtn;
/// 编辑按钮
@property (nonatomic, strong) UIButton *editBtn;

@property (nonatomic, weak) id<HeaderReusableViewDelegate> delegate;

@end
