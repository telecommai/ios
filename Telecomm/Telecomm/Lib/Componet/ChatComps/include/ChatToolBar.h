//
//  ToolbarView.h
//  FaceKeyboard

//  Company：     SunEee
//  Blog:        devcai.com
//  Communicate: 2581502433@qq.com

//  Created by ruofei on 16/3/28.
//  Copyright © 2016年 ruofei. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RFTextView.h"
#import "RFRecordButton.h"
#import "ToolBarItem.h"

typedef NS_ENUM(NSInteger, ButKind)
{
    kButKindVoice,
    kButKindFace,
    kButKindMore,
    kButKindSwitchBar
};

typedef NS_ENUM(NSUInteger, AttributedMessageTypeKey) {
    /// 普通
    AttributedMessageType_Normal = 0,
    /// @某人
    AttributedMessageType_AT = 1,
};

@class ChatToolBar;
@class ChatToolBarItemModel;
@class ToolBarItem;

@protocol ChatToolBarDelegate <NSObject>

@optional
- (void)chatToolBarSwitchToolBarBtnPressed:(ChatToolBar *)toolBar keyBoardState:(BOOL)change;

- (void)chatToolBarTextViewDidBeginEditing:(UITextView *)textView;
- (void)chatToolBarSendText:(NSString *)text;
- (void)chatToolBarTextViewDidChange:(UITextView *)textView;
- (void)chatToolBarTextViewDeleteBackward:(RFTextView *)textView;

- (void)chatToolBarTextSpeechRecognizeButtonTouched:(UIButton *)speechRecognizeButton chatToolBar:(ChatToolBar *)toolBar;

/**
 按下barItem

 @param toolBar toolBar
 @param select select
 @param chatToolBarItem chatToolBarItem
 */
- (void)chatToolBar:(ChatToolBar *)toolBar barItemPressed:(BOOL)select chatToolBarItem:(ToolBarItem *)chatToolBarItem keyBoardState:(BOOL)change;

/**
 * 输入了@符号
 */
- (BOOL)chatToolBarInputAtCharTextView:(UITextView *)textView shouldChangeTextInRange:(NSRange)range replacementText:(NSString *)text;

@end


@interface ChatToolBar : UIImageView

@property (nonatomic, weak) id<ChatToolBarDelegate> delegate;

/** 切换barView按钮 */
@property (nonatomic, readonly, strong) UIButton *switchBarBtn;

/** more按钮 */
@property (nonatomic, readonly, strong) UIButton *moreBtn;
/** 输入文本框 */
@property (nonatomic, readonly, strong) RFTextView *textView;

/** 默认为no 显示左侧工具按钮 */
@property (nonatomic, assign) BOOL allowSwitchBar;

/// 选中的barItem
@property (readonly) BOOL barItemSelected;
/// 选中barItem的时候textview是否是第一响应者
@property (readonly) BOOL barItemSelectedAndKeyBoardChangeState;

/**
 *  配置textView内容
 */
- (void)setTextViewContent:(NSString *)text;
- (void)setTextViewContentWithAttributedString:(NSMutableAttributedString *)attributedString;
- (void)clearTextViewContent;

/**
 *  配置placeHolder
 */
- (void)setTextViewPlaceHolder:(NSString *)placeholder;
- (void)setTextViewPlaceHolderColor:(UIColor *)placeHolderColor;

/**
 *  为开始评论和结束评论做准备
 */
- (void)prepareForBeginComment;
- (void)prepareForEndComment;


/**
 *  加载数据
 */
- (void)loadBarItems:(NSArray<ChatToolBarItemModel *> *)barItems;

/**
 恢复barItem的状态
 */
- (void)resetSelectionBarItem;

/**
 调整某个barItem的frame

 @param index 第几个barItem（从0开始）
 @param frame frame
 */
- (void)adjustBarItemFrameWithIndex:(NSInteger)index frame:(CGRect)frame;

/// 显示 应用号键盘
- (void)showOfficialAccount;
/// 隐藏 应用号键盘
- (void)hiddenOfficialAccountView;
/// 应用号键盘添加按钮
- (void)chatToolBarAddOfficialAccountItemWithItems:(NSMutableArray <UIView *> *)itemsArray;

/// 获取@人信息字典数组
- (NSArray *)atSomeOneInfoDicArray;

@end

@interface JFTextChecking : NSObject

@property (nonatomic, copy) NSString *text;
@property (nonatomic) NSRange range;

+ (JFTextChecking *)textCheckingWithText:(NSString *)text range:(NSRange)range;

@end

