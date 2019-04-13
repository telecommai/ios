//
//  WalletConfirmTradeView.h
//  OpenPlanet
//
//  Created by 王胜利 on 2018/6/7.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Constant.h"
#import "BlockChainManager.h"
#import "WalletModel.h"


@interface WalletConfirmTradeView : UIView

+ (instancetype)confirmViewWithTradeModel:(WalletTradeModel *)model;

@property (nonatomic, copy) VoidBlock transferBlock;

@end
