//
//  FindTableViewCell.h
//  ESPChatComps
//
//  Created by 于仁汇 on 16/9/6.
//  Copyright © 2016年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "StubObject.h"

@interface FindTableViewCell : UITableViewCell

/// 数据字典
@property (nonatomic, strong) NSMutableDictionary *infoDataDic;

@property (nonatomic, strong) StubObject *stubObject;

@end
