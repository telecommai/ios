//
//  EShopWinTreasureSignView.h
//  EShopComps
//
//  Created by 赵洪壮 on 2018/11/2.
//  Copyright © 2018 谢虎. All rights reserved.
//  一元夺宝商品左上角显示标志

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EShopWinTreasureSignView : UIView

/// 类型
@property (nonatomic, strong) NSString *signString;
/// 字号
@property (nonatomic, strong) UIFont *titleFont;
/// 圆角大小
@property (nonatomic, assign) CGSize cornerSize;
/// 字体颜色
@property (nonatomic, strong) UIColor *titleColor;

@end

NS_ASSUME_NONNULL_END
