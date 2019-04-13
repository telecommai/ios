//
//  EShopBusinessMessageCell.h
//  EShopComps
//
//  Created by 赵洪壮 on 2019/1/8.
//  Copyright © 2019 谢虎. All rights reserved.
//
// 商家留言

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EShopBusinessMessageCell : UITableViewCell

- (void)cellWithTitle:(NSString *)title message:(NSString *)message;

@property (nonatomic, copy) void(^touchAtUrlLinkBlock)(NSString *urlString);

@end

NS_ASSUME_NONNULL_END
