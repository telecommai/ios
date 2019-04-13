//
//  TradeOutItemView.h
//  WalletManager
//
//  Created by 王胜利 on 2019/3/28.
//  Copyright © 2019 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TradeFeeSliderView.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, TradeOutItemCViewType) {
    TradeOutItemCViewTypeNone,
    TradeOutItemCViewTypeLabel,
    TradeOutItemCViewTypeInput,
    TradeOutItemCViewTypeFeeSlider,
};

typedef NS_ENUM(NSUInteger, TradeOutItemRViewType) {
    TradeOutItemRViewTypeNone,
    TradeOutItemRViewTypeText,
    TradeOutItemRViewTypeNextImage,
    TradeOutItemRViewTypeTextNextImage,
};

@interface TradeOutItemView : UIView

@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, strong) UILabel *rightLabel;

@property (nonatomic, strong) UILabel *contentLabel;
@property (nonatomic, strong) UITextField *contentInput;
@property (nonatomic, strong) TradeFeeSliderView *contentFeeSlider;

@property (nonatomic, readonly) TradeOutItemCViewType contentViewType;


- (void)viewWithTitle:(NSString *)title cViewType:(TradeOutItemCViewType)cViewType rViewType:(TradeOutItemRViewType)rViewType showBottomLine:(BOOL)showBottomLine;

@end

NS_ASSUME_NONNULL_END
