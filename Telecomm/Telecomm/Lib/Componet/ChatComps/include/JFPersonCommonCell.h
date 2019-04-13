//
//  JFPersonCommonCell.h
//  ChatComps
//
//  Created by 谢虎 on 2019/2/19.
//  Copyright © 2019 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

@class JFPersonCommonCell;

@protocol mineCellDelegate <NSObject>

-(void)mineCellDidSelect:(JFPersonCommonCell *)cell mswitch:(UISwitch *)mswitch;

@end
@interface JFPersonCommonCell : UITableViewCell

@property(nonatomic,strong) NSDictionary *data;

@property(nonatomic,weak) id<mineCellDelegate>delegate;

@end
