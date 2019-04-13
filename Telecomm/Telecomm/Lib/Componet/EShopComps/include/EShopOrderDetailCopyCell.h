//
//  EShopOrderDetailCopyCell.h
//  EShopComps
//
//  Created by 王胜利 on 2018/1/31.
//  Copyright © 2018年 pansoft. All rights reserved.
//  订单编号，时间cell(带复制按钮)
//

#import <UIKit/UIKit.h>

@interface EShopOrderDetailCopyCell : UITableViewCell

- (void)cellWithTitle:(NSString *)title content:(NSString *)content copyAction:(VoidBlock)copyAction;

@end
