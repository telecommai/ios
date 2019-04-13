//
//  ChatKeyBoardBusiness.h
//  ESPChatComps
//
//  Created by YRH on 2018/3/26.
//  Copyright © 2018年 Pansoft. All rights reserved.
//

#import "ChatKeyBoard.h"
#import "IIMStruct.h"

@class PersonModel;

@interface EFChatKeyBoard : ChatKeyBoard

/// 禁言
@property (nonatomic, assign) BOOL isSilenceMode;

/**
 根据消息的postType来决定显示哪些barItems

 @param postType postType
 */
- (void)chatKeyBoardToolbarItemsWithPostType:(postType)postType;

/// 添加监听键盘高度变化的通知
- (void)addKeyboardChangeFrameNotification;
/// 移除监听键盘高度变化的通知
- (void)removeKeyboardChangeFrameNotification;

/// 添加@某人
- (void)increaseAT:(PersonModel *)obj insertIndex:(NSInteger)insertIndex;

/// 加载草稿箱内容
- (void)loadDraft;
/// 存储草稿
- (void)saveDraft;

@end
