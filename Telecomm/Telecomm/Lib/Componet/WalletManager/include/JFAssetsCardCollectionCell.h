//
//  JFAssetsCardCollectionCell.h
//  WalletManager
//
//  Created by 夏祥可 on 2019/1/25.
//  Copyright © 2019 pansoft. All rights reserved.
//  交易、红包、空投、更多等Cell

#import <UIKit/UIKit.h>
#import "AssetsMenuManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFAssetsCardCollectionCell : UICollectionViewCell

@property (nonatomic,strong) AssetsMenuModel *model;

@end

NS_ASSUME_NONNULL_END
