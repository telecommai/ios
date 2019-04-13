//
//  EShopGoodsNavigationView.h
//  EShopComps
//
//  Created by 王胜利 on 2018/1/16.
//  Copyright © 2018年 谢虎. All rights reserved.
//  商品详情标题组件

#import <UIKit/UIKit.h>

@interface EShopGoodsNavigationTitleView : UIView


/**
 商品详情标题组件

 @param titles 标题数组
 @param defaultIndex 默认选中的下标
 @param itemTap 标题item点击事件
 */
- (void)viewViewTitles:(NSArray *)titles defaultIndex:(NSUInteger)defaultIndex itemTap:(EShopTapBlock)itemTap;


/**
 修改当前选中的标题选项

 @param index 要修改的下标
 */
- (void)changeToIndex:(NSInteger)index;
@end
