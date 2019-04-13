//
//  JFCandleStickInfoView.h
//  WalletManager
//
//  Created by YRH on 2018/11/7.
//  Copyright © 2018 pansoft. All rights reserved.
//

/// 蜡烛图 在左/右上角显示每一支详情的view
#import <UIKit/UIKit.h>
#import "KLineInfoParseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFCandleStickInfoView : UIView

/// 赋值
- (void)reloadData:(KLineInfoCandleItem *)data;

@end

NS_ASSUME_NONNULL_END
