//
//  EShopAddEvaluateController.h
//  EShopComps
//
//  Created by 王胜利 on 2018/3/5.
//  Copyright © 2018年 谢虎. All rights reserved.
//  添加商品评价控制器
//


#import <UIKit/UIKit.h>

@interface EShopAddEvaluateController : UIViewController

@property (nonatomic, copy) NSString *orderBh;
@property (nonatomic, copy) void(^addEvaluateBlock)(void);

@end
