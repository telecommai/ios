//
//  EFMessageRedPocketItem.h
//  ChatComps
//
//  Created by 谢虎 on 2018/8/8.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JFMessageItem.h"

typedef enum{
    /**未打开*/
    packet_NoOpen               = (Byte)0,
    /**已领取*/
    packet_Recieve              = (Byte)1,
    /**被抢光*/
    packet_NoLeft               = (Byte)2,
    /**过期*/
    packet_TimeOut              = (Byte)3,
    
}packetState;

@interface EFMessageRedPocketItem : NSObject<JFMessageItem>

@end
