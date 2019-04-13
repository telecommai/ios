//
//  EShopReturnGoodsDetailView.h
//  EShopComps
//
//  Created by 赵洪壮 on 2018/12/6.
//  Copyright © 2018 谢虎. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EShopReturnGoodsDetailView : UIView

@property (nonatomic, copy) void(^retuenGoodsReasonBlock)(void);
@property (nonatomic, copy) NSString *model;
@end

NS_ASSUME_NONNULL_END
