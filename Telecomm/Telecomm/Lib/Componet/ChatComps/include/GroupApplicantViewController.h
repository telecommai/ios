//
//  GroupApplicantViewController.h
//  ESPChatComps
//
//  Created by Sunjimin on 17/1/10.
//  Copyright © 2017年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EFUIViewController.h"
@interface GroupApplicantViewController : EFUIViewController <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate>

///群信息
@property (nonatomic, strong) NSDictionary *groupInfoDic;
@property (nonatomic, strong) NSDictionary *groupMessageDictionary;
@property (nonatomic, copy)   NSString     *groupId;
@property (nonatomic, copy)   NSString     *groupKey;
@end
