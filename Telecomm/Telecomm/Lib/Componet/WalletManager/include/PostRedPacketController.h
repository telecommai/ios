//
//  PostRedPacketController.h
//  ChatComps
//
//  Created by 夏祥可 on 2018/8/8.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFMasterAccountModel.h"
#import "EFUIViewController.h"

@interface PostRedPacketController : EFUIViewController


/**红包类型   0 网页  1 个人  2 群*/
@property (nonatomic,assign) NSInteger redPacketType;

/**选择的币种 默认的是PWR*/
@property (nonatomic,strong) JFManagerAccountModel *selectedCoinType;


@end
