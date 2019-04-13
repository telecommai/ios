//
//  EShopLuckNumController.h
//  EShopComps
//
//  Created by 夏祥可 on 2018/11/2.
//  Copyright © 2018 谢虎. All rights reserved.
//  夺宝 本期幸运号码界面

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EShopLuckNumController : UIViewController

///商品ID
@property (nonatomic,copy) NSString *goodID;
///是否中奖
@property (nonatomic,assign) BOOL isWinner;

@end

NS_ASSUME_NONNULL_END
