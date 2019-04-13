//
//  EShopBannerView.h
//  EShopComps
//
//  Created by 王胜利 on 2018/1/29.
//  Copyright © 2018年 谢虎. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EShopBannerView : UIView

/**
 轮播图View组件（供Cell或者直接使用）

 @param imageUrls 图片Url数组(内部是urlString)
 @param tapBlock 图片点击回调
 */
- (void)viewWithImageUrls:(NSArray <NSString *>*)imageUrls tap:(EShopTapBlock)tapBlock;


@end
