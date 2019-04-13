//
//  EFChatAddGroupCell.h
//  ESPChatComps
//
//  Created by Sunjimin on 17/2/4.
//  Copyright © 2017年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EFChatAddGroupCell : UITableViewCell

@property (nonatomic, copy) NSString *groupId;
@property (nonatomic, strong) UILabel *groupNameLabel;
- (void)setDataDictionary:(NSDictionary *)dic;
@end
