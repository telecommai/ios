//
//  DetailViewController.h
//  FriendSearch
//
//  Created by 吴鹏 on 16/4/9.
//  Copyright © 2016年 Caoyq. All rights reserved.
//

/*
 个人详情界面
 */

#import <UIKit/UIKit.h>
#import "PersonModel.h"

@protocol updataOrDeleteDelegate <NSObject>

/// 好友详情界面修改备注和删除联系人的代理方法
- (void)updataOrDeleteModel:(PersonModel *)model;
- (void)updataOrDeleteModel;

@end

typedef enum{
    /**单聊且是好友*/
    PersonFrinedType = (Byte)0,
    /**群聊且是好友*/
    GroupFriendType = (Byte)1,
    /**群聊非好友*/
    GroupNotFriendType = (Byte)2,
    /**点自己头像*/
    MyselfType = (Byte)3,
}detailViewType;

typedef enum {
    /**通讯录进入*/
    AddressIntoType = (Byte)0,
    /**单聊点好友头像进入*/
    PersonIntoType = (Byte)1,
    /**群聊点头像进入*/
    GroupIntoType = (Byte)2,
}enterIntoType;

@interface DetailViewController : UIViewController

///个人详情界面的类型
@property (nonatomic, assign) Byte       detailViewType;
///进入个人详情界面的几种情况(解决无限push问题)
@property (nonatomic, assign) Byte       enterIntoType;

@property (nonatomic, copy) NSString     *groupId;
///判断是否从聊天列表界面进入
//@property (nonatomic, assign) BOOL       isChatVC;

@property(nonatomic,weak) id<updataOrDeleteDelegate> delegate;

- (id)initWithData:(PersonModel *)data;

@end
