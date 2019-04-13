//
//  EShopHomeBaseCell.h
//  EShopComps
//
//  Created by 王胜利 on 2018/9/30.
//  Copyright © 2018 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

// EShopHomeActionTypeWinTreasure 一元夺宝点击
typedef NS_ENUM(NSUInteger, EShopHomeActionType) {
    EShopHomeActionTypeTap           = 0,
    EShopHomeActionTypeOther1        = 1,
    EShopHomeActionTypeOther2        = 2,
    EShopHomeActionTypeOther3        = 3,
    EShopHomeActionTypeWinTreasure   = 4,
};

@protocol EShopHomeItem <NSObject>

/// 商城Cell整个点击事件
- (void)eshopHomeActionWithCell:(UITableViewCell *)cell entity:(EShopHomeEntity *)entity actionType:(EShopHomeActionType)actionType otherParams:(id)otheParams;

@end

@interface EShopHomeBaseCell : UITableViewCell

/// 数据源
@property (nonatomic,strong) EShopHomeEntity *entity;
/// 代理
@property (nonatomic,weak) id<EShopHomeItem> delegate;

/// cell重新刷新布局(子类布局需实现此方法)
- (void)cellReload;

@end

NS_ASSUME_NONNULL_END
