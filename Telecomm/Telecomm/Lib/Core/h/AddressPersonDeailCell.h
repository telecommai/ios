//
//  AddressPersonDeailCell.h
//  ESPChatComps
//
//  Created by 陈海鹏 on 16/9/9.
//  Copyright © 2016年 Pansoft. All rights reserved.
//  个人详情cell-底部 文字+文字 例（联信号 629）

#import <UIKit/UIKit.h>
#import "PhoneButton.h"
@interface AddressPersonDeailCell : UITableViewCell

@property (strong, nonatomic) UILabel  *label_main;
@property (strong, nonatomic) PhoneButton *button_detail;

- (void)setUserTitle:(NSString *)title infor:(NSString *)infor;

@end
