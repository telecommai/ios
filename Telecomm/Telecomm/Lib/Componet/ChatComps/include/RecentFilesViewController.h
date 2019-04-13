//
//  RecentFilesViewController.h
//  ESPChatComps
//
//  Created by 吴鹏 on 17/7/3.
//  Copyright © 2017年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "IMStructMessage.h"

typedef enum {
    /**立刻发送*/
    sendType_atOnce = 0,
    /**返回文件信息*/
    sendType_filesInfo = 1,
    
}sendType;

typedef enum {
    /**正常*/
    colorType_normal = 0,
    /**正常*/
    colorType_night  = 1,
    
}colorType;

@protocol RecentFilesDelegate <NSObject>

@optional

- (void)recentUpLoadPercent:(CGFloat)percent IMStructMessage:(IMStructMessage *)structMessage;

- (void)sendFilesInfo:(NSArray *)files;

@end

@interface RecentFilesViewController : UIViewController

@property (nonatomic) UITableView *tableView;
///代理
@property(nonatomic, weak) id<RecentFilesDelegate> delegate;
///来源用户ID
@property(nonatomic, assign) int        fromUserID;
///发送到用户ID
@property(nonatomic, assign) int        toUserID;
/// 消息投递分类
@property (nonatomic, assign) Byte      chatType;
/// 直接发送或返回文件信息
@property (nonatomic, assign) Byte      sendType;
/// 直接发送或返回文件信息
@property (nonatomic, assign) Byte      colorType;

- (instancetype)initWithSelectFile:(NSMutableArray *)filesArray sendType:(sendType)sendType colorType:(colorType)colorType;
- (void)recendFileMessage:(IMStructMessage *)oldMessage;

@end
