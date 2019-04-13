//
//  JFAssetsMenuCollectionCell.h
//  WalletManager
//
//  Created by 夏祥可 on 2019/1/25.
//  Copyright © 2019 pansoft. All rights reserved.
//  扫一扫、付钱、收钱、积分卡菜单Cell

#import <UIKit/UIKit.h>
#import "AssetsMenuManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFAssetsMenuCollectionCell : UICollectionViewCell

@property (nonatomic,strong) AssetsMenuModel *model;

@end

NS_ASSUME_NONNULL_END
