//
//  ReadPacketHeaderView.h
//  ChatComps
//
//  Created by 董艳武 on 2018/8/7.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RedPacketHeaderView : UITableViewHeaderFooterView

@property (nonatomic,copy) NSDictionary *dataDict;

@property (nonatomic,assign) NSInteger gotNum;

@end
