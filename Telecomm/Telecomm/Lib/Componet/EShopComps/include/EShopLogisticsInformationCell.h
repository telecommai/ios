//
//  EShopLogisticsInformationCell.h
//  EShopComps
//
//  Created by 赵洪壮 on 2018/12/14.
//  Copyright © 2018 谢虎. All rights reserved.
//  物流信息

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EShopLogisticsInformationCell : UITableViewCell

- (void)cellWithTitle:(NSString *)title content:(NSString *)content copyAction:(VoidBlock)copyAction;

@end

NS_ASSUME_NONNULL_END
