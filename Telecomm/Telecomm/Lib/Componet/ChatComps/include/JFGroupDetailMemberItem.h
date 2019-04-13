//
//  JFGroupDetailMemberItem.h
//  ChatComps
//
//  Created by 董艳武 on 2018/8/28.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PersonModel.h"

@interface JFGroupDetailMemberItem : UICollectionViewCell

@property(nonatomic,strong) PersonModel *model;

/// 显示增加按钮
-(void)showAdd;

@end
