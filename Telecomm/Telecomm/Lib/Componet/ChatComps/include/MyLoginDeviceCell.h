//
//  MyLoginDeviceCell.h
//  ChatComps
//
//  Created by 高建飞 on 2018/7/6.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
@class MyDeviceModel;

@interface MyLoginDeviceCell : UITableViewCell

- (void)cellWithModel:(MyDeviceModel *)model logout:(void(^)(MyDeviceModel *model))logout;

@end
