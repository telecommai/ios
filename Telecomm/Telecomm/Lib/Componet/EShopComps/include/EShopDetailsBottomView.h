//
//  EShopBottomView.h
//  EShopComps
//
//  Created by 虎 谢 on 2018/1/15.
//  Copyright © 2018年 谢虎. All rights reserved.
//  商品详情底部工具栏

#import <UIKit/UIKit.h>

@interface EShopDetailsBottomView : UIView

/// 修改是否收藏
- (void)changeIsLike:(BOOL)isLike;

/// 修改购物车商品数目
- (void)changeShopCartBadge:(NSString *)badge;
/// 是否显示加入购物车按钮 商品商店编号 (1月7号，张志军 然后那个客服按钮也判断下 店铺Bh 129674显示客服按钮 其他不显示 暂时判断)
- (void)refreshViewWithModel:(EShopGoodsEntity *)model;

///////////////////////// 回调点击事件 /////////////////////
/// 加入购物车
@property (nonatomic, copy) VoidBlock addShopCartBlock;
/// 立即购买
@property (nonatomic, copy) VoidBlock buyNowBlock;
/// 进入购物车界面
@property (nonatomic, copy) VoidBlock shopCartBlock;
/// 收藏按钮
@property (nonatomic, copy) BoolBlock likeBlock;
/// 联系客服
@property (nonatomic, copy) VoidBlock chatBlock;

@end
