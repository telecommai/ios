//
//  JFChatHeaderCell.h
//  ChatComps
//
//  Created by 虎 谢 on 2019/3/4.
//  Copyright © 2019年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PersonModel.h"
#import "Constant.h"
NS_ASSUME_NONNULL_BEGIN

@interface JFChatHeaderCell : UITableViewCell

@property (nonatomic,strong) PersonModel *model;

@property (nonatomic,copy)  VoidBlock   headerBlock;
@property (nonatomic,copy)  VoidBlock   addBlock;

@end

NS_ASSUME_NONNULL_END
