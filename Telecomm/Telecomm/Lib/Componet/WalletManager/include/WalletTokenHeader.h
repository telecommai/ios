//
//  WalletTokenHeader.h
//  WalletManager
//
//  Created by 王胜利 on 2019/2/18.
//  Copyright © 2019 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Constant.h"
#import "ImageButton.h"

NS_ASSUME_NONNULL_BEGIN

@interface WalletTokenHeader : UITableViewHeaderFooterView

/// 添加资产按钮
@property (nonatomic, strong) ImageButton *addMoneyButton;
/// 添加资产
@property (nonatomic, copy) VoidBlock addAccountBlock;

@end

NS_ASSUME_NONNULL_END
