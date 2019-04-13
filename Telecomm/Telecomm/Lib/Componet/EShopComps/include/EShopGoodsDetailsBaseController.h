//
//  EShopGoodsDetailsBaseController.h
//  EShopComps
//
//  Created by 王胜利 on 2018/9/14.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EFUIViewController.h"
#import <WebKit/WebKit.h>
#import "EShopGoodsAlphaNavigationView.h"
#import "EShopBannerView.h"


@interface EShopGoodsDetailsBaseController : EFUIViewController<UITableViewDelegate,UITableViewDataSource,
WKNavigationDelegate,UIGestureRecognizerDelegate>

/// 随滑动巨剑隐藏的自定义导航栏
@property (nonatomic, strong) EShopGoodsAlphaNavigationView *navigationView;
/// 列表页
@property (nonatomic, strong) UITableView   *tableView;
/// 商品轮播图
@property (nonatomic, strong) EShopBannerView *goodsBannerView;
/// 商品介绍网页
@property (nonatomic, strong) WKWebView     *webView;
/// 底部工具栏
@property (nonatomic, strong) UIView *bottomToolView;
/// 显示商品轮播图
- (void)shopGoodsBannerImageUrls:(NSArray <NSString *>*)goodsUrls;

@end
