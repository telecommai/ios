//
//  ScreenUtil.h
//  TalkChain
//
//  Created by 王胜利 on 2018/3/20.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger,DeviceType){
    Iphone4sSize,
    IphoneSESize,
    Iphone8Size,
    Iphone8plusSize,
    IphoneXSize
};

DeviceType CurrentDeviceType(void);

