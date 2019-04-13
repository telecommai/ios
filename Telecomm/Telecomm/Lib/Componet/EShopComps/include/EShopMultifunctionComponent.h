//
//  EShopMultifunctionComponent.h
//  EShopComps
//
//  Created by Sunjimin on 2018/9/14.
//  Copyright © 2018年 谢虎. All rights reserved.
//

#import <UIKit/UIKit.h>



@interface EShopMultifunctionComponent : UIView

- (void)loadMultifunctionComponentWithTitles:(NSArray *)titles themes:(NSArray <NSString *>*)themes touch:(void(^)(NSString *title,NSUInteger idx))touch;

@end
