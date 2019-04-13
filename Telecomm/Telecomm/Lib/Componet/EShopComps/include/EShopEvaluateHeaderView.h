//
//  EShopEvaluateHeaderView.h
//  EShopComps
//
//  Created by 王胜利 on 2018/2/1.
//  Copyright © 2018年 谢虎. All rights reserved.
//  商品评价头部组件(显示商品好评率)

#import <UIKit/UIKit.h>

@interface EShopEvaluateHeaderView : UIView


/**
 商品评价头部组件(显示商品好评率)

 @param string 好评率
 */
- (void)viewWithGoodEvaluation:(NSString *)string;

@end
