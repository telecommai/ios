//
//  EShopAfterSaleTypeCell.h
//  EShopComps
//
//  Created by 赵洪壮 on 2018/12/5.
//  Copyright © 2018 谢虎. All rights reserved.
//  售后服务类型

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class EShopAfterSaleTypeModel;

@interface EShopAfterSaleTypeCell : UITableViewCell

@property (nonatomic, strong) EShopAfterSaleTypeModel *model;

@end

@interface EShopAfterSaleTypeModel : NSObject

@property (nonatomic, copy) NSString *afterSaleType;
@property (nonatomic, copy) NSString *afterSaleDescribe;

@end
NS_ASSUME_NONNULL_END
