//
//  RedPacketCell.h
//  ChatComps
//
//  Created by 董艳武 on 2018/8/7.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RedPacketCell : UITableViewCell

@property(nonatomic,assign)         NSInteger           type;

@property(nonatomic,copy)           NSString            *assetUnit;

@property (nonatomic,strong)        NSDictionary        *dataDict;


@end
