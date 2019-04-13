//
//  EShopLimitPriceCell.h
//  EShopComps
//
//  Created by Sunjimin on 2018/9/17.
//  Copyright © 2018年 谢虎. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EShopLimitPriceCell : UITableViewCell

- (void)loadLimitPriceCellWith:(NSString *)price value:(NSString *)value expiryDate:(NSString *)date;

@end
