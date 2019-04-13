//
//  AssetsCardBaseItem.h
//  WalletManager
//
//  Created by 王胜利 on 2019/1/29.
//  Copyright © 2019 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ThemeKit.h"
#import "Constant.h"

NS_ASSUME_NONNULL_BEGIN

@interface AssetsCardBaseItem : UIView

@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, strong) UIButton *subButton;
@property (nonatomic, strong) UIView *mutableView;

@property (nonatomic, copy) void(^touchAction)(UIView *view);
@property (nonatomic, copy) void(^titleAction)(UILabel *label);
@property (nonatomic, copy) void(^subTitleAction)(UIButton *button);
@property (nonatomic, copy) void(^tipViewTouchAction)(void);

// 刷新数据
- (void)refreshDatas;
// 有数据
- (void)hasData;
// 提示View数据(无数据或加载失败)
//- (void)tipViewWithThemeImage:(ThemeImagePicker)themeImage title:(NSString *)title;
- (void)tipViewWithImage:(UIImage *)image title:(NSString *)title;

@end

NS_ASSUME_NONNULL_END
