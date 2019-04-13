//
//  HDWalletTypeCell.h
//  WalletManager
//
//  Created by 赵洪壮 on 2019/3/25.
//  Copyright © 2019 pansoft. All rights reserved.
//  钱包类型cell

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, WalletType) {
    HotWallet,
    ColdWallet,
};

NS_ASSUME_NONNULL_BEGIN

@interface HDWalletTypeCell : UITableViewCell

- (void)cellWithWalletType:(WalletType)walletType isSelected:(BOOL)isSelected;

@property (nonatomic ,copy) void(^walletTypeBlock)(WalletType walletType);

@end

NS_ASSUME_NONNULL_END
