//
//  EShopOrderDetailHashCell.h
//  EShopComps
//
//  Created by 赵洪壮 on 2019/1/9.
//  Copyright © 2019 谢虎. All rights reserved.
//  订单详情哈希值

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EShopOrderDetailHashCell : UITableViewCell

- (void)cellWithTitle:(NSString *)title detailText:(NSString *)detailText;

@property (nonatomic, copy) void(^hashCopyBlock)(void);

@end

NS_ASSUME_NONNULL_END
