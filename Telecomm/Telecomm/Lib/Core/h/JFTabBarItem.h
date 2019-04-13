//
//  JFTabBarItem.h
//  TabBarTest
//
//  Created by 王胜利 on 2018/9/20.
//  Copyright © 2018年 pansoft. All rights reserved.
//  自定义放大tabBarItem图片组件
//

#import <UIKit/UIKit.h>

@class FLAnimatedImage;

@protocol JFTabBarItemDelegate <NSObject>

- (void)jfTabBarItemTouch:(UIView *)itemView itemIndex:(NSUInteger)itemIndex;

@end

NS_ASSUME_NONNULL_BEGIN

@interface JFTabBarItem : UIView


/// 遍历构造器初始化并添加到TabBar上面
+ (instancetype)itemWithTabBar:(UITabBar *)tabBar itemsCount:(NSUInteger)itemsCount itemIndex:(NSUInteger)itemIndex;

/// 当前下标
@property (nonatomic, assign) NSUInteger itemIndex;

/// delegate
@property (nonatomic, weak) id<JFTabBarItemDelegate> delegate;

///注： GIF图优先级大于普通图

/// 默认普通图片
@property (nonatomic, strong) UIImage *image;
/// 选择状态下普通图片
@property (nonatomic, strong) UIImage *selectedImage;

/// 默认动态图片
@property (nonatomic, strong) FLAnimatedImage *animalImage;
/// 选择状态下动态图片
@property (nonatomic, strong) FLAnimatedImage *selectedAnimalImage;

/// 是否选中(默认NO)
@property (nonatomic, assign) BOOL isSelect;

/// 视图大小比率(和tabbar.bounds.size.height比较，默认1.3)
@property (nonatomic,assign) CGFloat viewScale;



@end

NS_ASSUME_NONNULL_END
