//
//  JFMiddleCell.h
//  ChatComps
//
//  Created by 谢虎 on 2018/9/18.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JFMessageBuilderCell.h"
#import "IMStructMessage.h"


@interface JFMiddleCell : UITableViewCell
@property(nonatomic,strong) UILabel *topLabel;
@property(nonatomic,strong)IMStructMessage *messageStruct;
@property(nonatomic,assign) CGFloat cellHeight;
@end
