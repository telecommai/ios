//
//  SendMessageCell.h
//  ESPChatComps
//
//  Created by 陈海鹏 on 16/9/9.
//  Copyright © 2016年 Pansoft. All rights reserved.
//  群聊中查看群成员底部按钮，根据是否好友显示“发送消息”和“添加好友”

#import <UIKit/UIKit.h>

@interface SendMessageCell : UITableViewCell

@property(nonatomic,strong)UILabel * backgroundLabel;//底部背景label  红色
@property(nonatomic,strong)UILabel * contentLabel;//文字label  删除并退出

@end
