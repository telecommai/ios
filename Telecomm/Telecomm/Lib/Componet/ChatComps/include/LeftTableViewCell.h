//
//  LeftTableViewCell.h
//  ESPChatComps
//
//  Created by 于仁汇 on 16/9/21.
//  Copyright © 2016年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "StubObject.h"

@interface LeftTableViewCell : UITableViewCell

@property (nonatomic, copy) NSString *imagePath;
@property (nonatomic, strong) StubObject *cellInfo;

/// 赋值
- (void)cellInfor:(UIColor *)textColor headImage:(UIImage *)headImg titleText:(NSString *)title showSwitch:(NSString *)show;

@end
