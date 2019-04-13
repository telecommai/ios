//
//  ZoneBlackListCell.h
//  Zone
//
//  Created by 王胜利 on 2018/6/27.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZoneModel.h"
#import "Constant.h"

@interface ZoneBlackListCell : UITableViewCell

- (void)cellDataWithModle:(ZoneUserModel *)userModel removeBlock:(VoidBlock)removeBlock;

@end
