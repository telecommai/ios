//
//  JFCreateGroupController.h
//  ChatComps
//
//  Created by 虎 谢 on 2019/2/26.
//  Copyright © 2019年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum{
    /**发起群组*/
    createGroup = (Byte)0,
    /**添加群成员*/
    addmember = (Byte)1,
}createGroupType;
@interface JFCreateGroupController : UIViewController

///添加联系人时，当前的群组成员
@property (nonatomic,strong)    NSArray         *currentArray;
///当前选择的用户数组(ID)
@property (nonatomic,strong)    NSMutableArray  *selectedIdArray;
///手动选择用户(PersonModel)
@property (nonatomic,strong)    NSMutableArray  *selectedUserArray;
///发起群组 添加群成员
@property (nonatomic, assign)   Byte            createGroupType;
///群组信息
@property (nonatomic,strong)    NSDictionary    *groupDictionary;

@end

NS_ASSUME_NONNULL_END
