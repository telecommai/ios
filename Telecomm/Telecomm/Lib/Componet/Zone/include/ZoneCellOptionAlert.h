//
//  ZoneCellOptionController.h
//  Zone
//
//  Created by 吴鹏 on 2018/5/11.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZoneModel.h"

typedef void(^ZoneCellOptionBlock)(NSInteger index,NSString *title);

@interface ZoneCellOptionAlert : UIViewController

+ (void)showWithModel:(ZoneModel *)model benginFrame:(CGRect)benginFrame complete:(ZoneCellOptionBlock)complete;

@end
