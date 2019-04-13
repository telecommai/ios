//
//  JFTransferPayView.h
//  ChatComps
//
//  Created by 夏祥可 on 2018/8/11.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^TransferSelectWalletBlock)(void);

@interface JFTransferPayView : UIView

///付款地址
@property (nonatomic,strong) UILabel *adressLabel;

@property (nonatomic, copy) TransferSelectWalletBlock block;

@end
