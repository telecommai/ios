//
//  ChatKeyBoard.h
//  FaceKeyboard
//
//  Company：     SunEee
//  Blog:        devcai.com
//  Communicate: 2581502433@qq.com

//  Created by ruofei on 16/3/29.
//  Copyright © 2016年 ruofei. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "ChatKeyBoardMacroDefine.h"

#import "ChatToolBar.h"
#import "FacePanel.h"
#import "MorePanel.h"

#import "MoreItemModel.h"
#import "ChatToolBarItemModel.h"
#import "FaceThemeModel.h"

#import "JFMessageManager.h"

typedef NS_ENUM(NSInteger, KeyBoardStyle)
{
    KeyBoardStyleChat = 0,
    KeyBoardStyleComment
};

@class ChatKeyBoard;
@class ToolBarItem;
@protocol ChatKeyBoardDelegate <NSObject>
@optional

/**
 *  输入状态
 */
- (void)chatKeyBoardTextViewDidBeginEditing:(UITextView *)textView;
- (void)chatKeyBoardSendText:(NSString *)text;
- (void)chatKeyBoardTextViewDidChange:(UITextView *)textView;

/**
 * 表情
 */
- (void)chatKeyBoardAddFaceSubject:(ChatKeyBoard *)chatKeyBoard;
- (void)chatKeyBoardSetFaceSubject:(ChatKeyBoard *)chatKeyBoard;

@end

@interface ChatKeyBoard : UIView

/**
 *  默认是导航栏透明，或者没有导航栏
 */
+ (instancetype)keyBoard;

/**
 *  当导航栏不透明时（强制要导航栏不透明）
 *
 *  @param translucent 是否透明
 *
 *  @return keyboard对象
 */
+ (instancetype)keyBoardWithNavgationBarTranslucent:(BOOL)translucent;


/**
 *  直接传入父视图的bounds过来
 *
 *  @param bounds 父视图的bounds，一般为控制器的view
 *
 *  @return keyboard对象
 */
+ (instancetype)keyBoardWithParentViewBounds:(CGRect)bounds;

/**
 *
 *  设置关联的表
 */
@property (nonatomic, weak) UITableView *associateTableView;

@property (nonatomic, weak) id<ChatKeyBoardDelegate> delegate;

@property (nonatomic, readonly, strong) ChatToolBar *chatToolBar;

@property (nonatomic, readonly, strong) MorePanel *morePanel;

/**
 *  placeHolder内容
 */
@property (nonatomic, copy) NSString * placeHolder;
/**
 *  placeHolder颜色
 */
@property (nonatomic, strong) UIColor *placeHolderColor;

/**
 *  键盘弹出
 */
- (void)keyboardUp;

/**
 *  键盘收起
 */
- (void)keyboardDown;


///************************************************************************************************
// *  如果设置键盘风格为 KeyBoardStyleComment 则可以使用下面两个方法
// *  开启评论键盘
// */
//- (void)keyboardUpforComment;
//
///**
// *  隐藏评论键盘
// */
//- (void)keyboardDownForComment;
//
//// =================

/**
 整个chatToolBar上移
 */
- (void)chatToolBarUpCompletion:(void(^)(BOOL finished))animationFinished;

/**
 chatToolBar恢复初始位置
 */
- (void)chatToolBarDowmCompletion:(void(^)(BOOL finished))animationFinished;

/**
 chatToolBarItem恢复初始状态
 */
- (void)chatToolBarItemRestoreInitialState;

/**
 展示barItem具体内容的view
 
 @param view 具体内容view
 */
- (void)showBarItemContentView:(UIView *)view;

/**
 隐藏barItem具体内容view
 
 @param view 具体内容view
 */
- (void)hiddenBarItemContentView:(UIView *)view;

- (void)deleteBackward:(NSString *)text appendText:(NSString *)appendText;

/// 开启应用号 键盘
- (void)openOfficialAccountStyle;

/// 添加应用号键盘 上面的按钮
- (void)addOfficialAccountItemWithItems:(NSMutableArray <UIView *> *)itemsArray;

- (void)addKeyBoardWillChangeFrameNotification;

@end
