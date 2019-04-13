//
//  EShopGoodInfoView.h
//  EShopComps
//
//  Created by 王胜利 on 2018/3/5.
//  Copyright © 2018年 谢虎. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EShopGoodInfoView : UIView
/// 根据url赋值商品详情
- (void)loadUrlString:(NSString *)urlString complete:(FloatBlock)complete;
/// 直接赋值HTTPString
- (void)loadHttpString:(NSString *)httpString complete:(FloatBlock)complete;
/// 加载本地html文件
- (void)loadLocalUrlString:(NSString *)localUrlString complete:(FloatBlock)complete;

@end
