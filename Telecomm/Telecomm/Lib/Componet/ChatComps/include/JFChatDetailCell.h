//
//  JFChatDetailCell.h
//  ChatComps
//
//  Created by 虎 谢 on 2019/3/4.
//  Copyright © 2019年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Constant.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFChatDetailCell : UITableViewCell

@property (nonatomic,strong)        NSDictionary *detailDictionary;

@property (nonatomic,copy)          BoolBlock    swicthBlock;

@end

NS_ASSUME_NONNULL_END
