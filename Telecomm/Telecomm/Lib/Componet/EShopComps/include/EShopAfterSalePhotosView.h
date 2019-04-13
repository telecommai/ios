//
//  EShopAfterSalePhotosView.h
//  EShopComps
//
//  Created by 赵洪壮 on 2018/12/8.
//  Copyright © 2018 谢虎. All rights reserved.
//  退货退款 浏览图片,添加说明

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EShopAfterSalePhotosView : UIView

@property (nonatomic, strong)NSMutableArray *dataArray;
/// 刷新数据
- (void)refreshCollectionViewData;
/// 滚动到指定行
- (void)scrollToItemWithRow:(NSInteger)row;

@end

NS_ASSUME_NONNULL_END
