//
//  EShopHeader.h
//  EShopComps
//
//  Created by 王胜利 on 2018/1/19.
//  Copyright © 2018年 谢虎. All rights reserved.
//  商城自用头文件

#ifndef EShopHeader_h
#define EShopHeader_h

/// 商城接口用户Id
#define UserID [EnvironmentVariable getWalletUserID] // 手机号

/// 商城用灰线颜色
#define EShopLineGrayColor [UIColor colorWithWhite:0.9 alpha:1]
/// 商城主题色
#define EShopThemeColor EF_RED_COLOR

/// 加载商城图片(优化路径长度，不需要写图片png后缀)
#define EShopImage(localPath) efImageFromBundleWithPathAndType(@"EShopResource.bundle",[@"/image_shopping" stringByAppendingString:localPath],@"png")
/// 加载商城资源文件
#define EShopResource(localPath)  [[NSBundle mainBundle] pathForResource:[NSString stringWithFormat:@"EShopResource.bundle%@",localPath] ofType:nil]


/// 点击事件回调Block
typedef void(^EShopTapBlock)(id obj,unsigned long idx);

/// 轮播图
#define EShopHomeViewTypeBanners @"banners"
/// 多列
#define EShopHomeViewTypeHorizontalViewGroup @"horizontalViewGroup"
/// 分组专辑(商品带价格)
#define EShopHomeViewTypeGroupView1 @"groupView1"
/// 分组专辑(图片)
#define EShopHomeViewTypeGroupView2 @"groupView2"
/// 分组专辑(店铺)
#define EShopHomeViewTypeGroupView3 @"groupView3"
/// 推荐商品专辑
#define EShopHomeViewTypeGroupView4 @"groupView4"
/// 每日精选
#define EShopHomeViewTypeListView @"listView"
/// 为你推荐(单个商品)
#define EShopHomeViewTypeGoodItem @"goodItem"
/// 限时抢购
#define EShopHomeViewTypeTimeToBuyItem @"timeToBuyItem"
/// 左一右二组件
#define EShopHomeViewType12View @"12View"
/// 左一右一
#define EShopHomeViewType11View @"11View"
/// 轮播
#define EShopHomeViewTypeViewPager @"viewPager"
/// 悬停头部Header
#define EShopHomeViewTypeListViewHeader @"listViewHeader"

/// 秒杀
#define EShopHomeViewTypeSeckillGoodsCell @"seckillGoods"
/// 一元夺宝
#define EShopHomeViewTypeWinTreasureCell @"snatchGoodItem"
/// 两排组件
#define EShopHomeViewTypeDoubleRowCell @"doubleRow"




#endif /* EShopHeader_h */
