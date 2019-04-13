//
//  TextSwitchCell.h
//  ChatComps
//
//  Created by StarLord on 2018/7/25.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TextSwitchCell;
@protocol TextSwitchCellDelegate <NSObject>

@optional
- (void)touchCellSwitch:(UISwitch *)switchView cell:(TextSwitchCell *)cell cellDic:(NSDictionary *)cellDic;

@end

@interface TextSwitchCell : UITableViewCell

@property (nonatomic, weak) id<TextSwitchCellDelegate> delegate;
@property (nonatomic, strong) NSDictionary *cellDic;

@end
