//
//  SLPageProtocol.h
//  SLPageView
//
//  Created by 王胜利 on 2018/11/9.
//  Copyright © 2018 wsl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class SLPageEntity;

NS_ASSUME_NONNULL_BEGIN

@protocol SLPageTitleProtocol <NSObject>

/// 标题数组
@property (nonatomic, strong) NSArray <SLPageEntity *>*pageEntitys;
/// 当前选中的下标
@property (nonatomic, assign) NSUInteger currentIdx;
/// 标题点击事件回调
@property (nonatomic, copy) void(^titleSelect)(NSInteger idx);

/// 滑动到对应的Idx
- (void)scrollToIndex:(NSInteger)idx animated:(BOOL)animated;


@optional
/// 根据滑动进度修改标题颜色和字体大小
- (void)titleChangedWithScale:(CGFloat)scrollScale;
/// 修改标题Badge
- (void)titleBadge:(NSString *)badge idx:(NSInteger)idx;
/// 是否显示标题红点
- (void)titleRedPoint:(BOOL)isShow idx:(NSInteger)idx;

@end



@protocol SLPageContentProtocol <NSObject>

/// 标题数组
@property (nonatomic, strong) NSArray <UIView *>*childViews;
/// 当前选中的下标
@property (nonatomic, assign) NSUInteger currentIdx;
/// 滑动到对应的Idx
- (void)scrollToIndex:(NSInteger)idx animated:(BOOL)animated;

@optional
/// 内容区域滑动页数回调函数
@property (nonatomic, copy)void(^didScrollToIdx)(NSInteger idx);
/// 从某一个滑到某一个
@property (nonatomic, copy)void(^didScrollFromToIdx)(NSInteger fromIdx,NSInteger toIdx);
/// 内容区域滑动回调函数(例：pageView滑动了一屏半 即scrollScale = 1.5)
@property (nonatomic, copy)void(^didScroll)(CGFloat scrollScale);

@end

NS_ASSUME_NONNULL_END
