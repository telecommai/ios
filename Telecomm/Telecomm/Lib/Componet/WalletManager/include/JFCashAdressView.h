//
//  JFCashAdressView.h
//  ChatComps
//
//  Created by 夏祥可 on 2018/8/16.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^JFCashSelectWalletBlock)(void);

@interface JFCashAdressView : UIView

///箭头左侧显示内容
@property (nonatomic,strong) UILabel *contentLabel;
///付款地址
@property (nonatomic,strong) UILabel *adressLabel;

@property (nonatomic, copy) JFCashSelectWalletBlock block;

@end
