//
//  EShopLuckNumCell.h
//  EShopComps
//
//  Created by 夏祥可 on 2018/11/2.
//  Copyright © 2018 谢虎. All rights reserved.
//  夺宝 本期幸运号码Cell

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EShopLuckNumCell : UITableViewCell

///标题 key
@property (nonatomic,copy) NSString *titleStr;
///内容 value
@property (nonatomic,copy) NSString *contentStr;

@end

NS_ASSUME_NONNULL_END
