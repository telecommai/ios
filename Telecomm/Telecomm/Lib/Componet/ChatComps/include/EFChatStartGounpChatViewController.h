//
//  EFSponsorGroupChatViewController.h
//  ESPChatComps
//
//  Created by 陈海鹏 on 16/8/12.
//  Copyright © 2016年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum{
    /**发起群组*/
    startGroup = (Byte)0,
    /**添加群成员*/
    addAddress = (Byte)1,
}operationGroupType;

@interface EFChatStartGounpChatViewController : UIViewController

///添加联系人时，当前的群组成员
@property (nonatomic,strong)    NSArray         *currentArray;
///手动选择用户
@property (nonatomic,strong)    NSMutableArray  *selectAddressArray;
///发起群组 添加群成员  移除群成员
@property (nonatomic, assign)   Byte            operationGroupType;
///群组信息
@property (nonatomic,strong)    NSDictionary    *groupDictionary;

@end
