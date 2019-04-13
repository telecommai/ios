//
//  SLPageManager.h
//  SLPageView
//
//  Created by 王胜利 on 2018/11/12.
//  Copyright © 2018 wsl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SLPageProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface SLPageEntity : NSObject

/// 标题
@property (nonatomic, copy) NSString *title;
/// PageView该实体所对应的view
@property (nonatomic, strong) UIView *childView;
/// 未读消息数
@property (nonatomic, copy) NSString *badge;
/// 是否显示小红点
@property (nonatomic, assign) BOOL showRedPoint;
/// 分页代码
@property (nonatomic, copy) NSString *node;
/// 其他参数
@property (nonatomic, strong) id other;

@end

@interface SLPageManager : NSObject

+ (void)managerWithTitleView:(id<SLPageTitleProtocol>)titleView contentView:(id<SLPageContentProtocol>)contentView pageEntitys:(NSArray <SLPageEntity *>*)pageEntitys defaultIdx:(NSInteger)defaultIdx;

@end

NS_ASSUME_NONNULL_END
