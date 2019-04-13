//
//  EFChatListViewController.h
//  ESPChatComps
//
//  Created by Javor on 16/4/10.
//  Copyright (c) 2016年 Pansoft. All rights reserved.
//  聊天消息列表

#import <UIKit/UIKit.h>
#import "JFMessageManager.h"
#import "EFTableView.h"
#import "IBadgeView.h"
#import "EFExitObj.h"
#import "EFUIViewController.h"
@interface EFChatListViewController : EFUIViewController<UITableViewDataSource, UITableViewDelegate,UISearchBarDelegate,JFMessageManagerDelegate,UIAlertViewDelegate>

@property (nonatomic, strong) EFTableView    *tableView;
///整个列表数据源
@property (nonatomic, strong) NSMutableArray *listArray;
@property (nonatomic, strong) NSString       *updateURL;
@property(nonatomic, weak) id<IBadgeView>      kjBadgeView;

@property(nonatomic, strong) EFExitObj *exitObj;

- (void)connectManager;

@end

