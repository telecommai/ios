//
//  EShopGoodsCellView.h
//  EShopComps
//
//  Created by 王胜利 on 2018/11/8.
//  Copyright © 2018 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@class EShopSureOrderGoodModel;
@class EShopOrderGoodEntity;

NS_ASSUME_NONNULL_BEGIN

@interface EShopGoodsCellView : UIView

@property (nonatomic,strong) EShoppingCartCommodityModel *goodModel;
@property (nonatomic,strong) EShopOrderGoodEntity *orderGoodEntity;

// 是否显示顶部分割线
@property (nonatomic,assign) BOOL isShowBottomLine;

@end

NS_ASSUME_NONNULL_END
