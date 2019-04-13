//
//  OpenRedPacketView.h
//  ChatComps
//
//  Created by 董艳武 on 2018/8/8.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "IMStructMessage.h"

typedef enum {
    /// 没有抢过的红包
    RedPacketStateNotOpen,
    /// 红包过期了
    RedPacketStateOverTime,
    /// 红包抢完了（群聊）
    RedPacketStateSendDone,
} RedPacketState;

typedef void (^OpenAnimationFinishCallBack)(void);

@interface OpenRedPacketView : UIView

-(instancetype)initWithRedPacketState:(RedPacketState)state;

@property (nonatomic,copy) NSDictionary                    *dataDict;

/// 红包开启动画结束后的回调
@property (nonatomic,copy) OpenAnimationFinishCallBack      cb;

/// 消息模型
@property (nonatomic,strong) IMStructMessage   *message;

/// 祝福
@property (nonatomic,copy) NSString *bless;

-(UIView *)coverView;

-(void)remove;

@end
