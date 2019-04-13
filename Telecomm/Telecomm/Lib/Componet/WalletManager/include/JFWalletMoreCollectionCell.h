//
//  JFWalletMoreCollectionCell.h
//  WalletManager
//
//  Created by 赵洪壮 on 2019/1/28.
//  Copyright © 2019 pansoft. All rights reserved.
//  添加应用顶部view 中 cell

#import <UIKit/UIKit.h>
#import "AssetsMenuManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFWalletMoreCollectionCell : UICollectionViewCell

@property (nonatomic, strong) AssetsMenuModel *model;
@property (nonatomic, strong) NSMutableArray <NSString *>*selectedKeysArray;
// 是否处于编辑状态
@property (nonatomic, assign) BOOL isBeingEdit;

@property (nonatomic, copy) void (^walletMoreCellBlock)(AssetsMenuModel *model);

@end

NS_ASSUME_NONNULL_END
