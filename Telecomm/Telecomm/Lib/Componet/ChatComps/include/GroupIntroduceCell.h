//
//  GroupIntroduceCell.h
//  ESPChatComps
//
//  Created by Sunjimin on 17/1/10.
//  Copyright © 2017年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GroupIntroduceCell : UITableViewCell


@property (nonatomic, strong) UILabel *describeL;    //创建时间等信息
@property (nonatomic, strong) UILabel *introduceL;    //群介绍

- (void)customWith:(NSString *)createTime andIntroduceText:(NSString *)introduceText;

@end
