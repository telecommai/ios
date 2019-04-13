//
//  ZoneSendManager.h
//  Zone
//
//  Created by 王胜利 on 2018/9/19.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 空间发表引力波类型

 - ZoneSendTypeText: 文字类型
 - ZoneSendTypeImage: 图片类型
 - ZoneSendTypeVideo: 视频类型
 - ZoneSendTypeWeb: 网页类型
 */
typedef NS_ENUM(NSUInteger, ZoneSendType) {
    ZoneSendTypeText,
    ZoneSendTypeImage,
    ZoneSendTypeVideo,
    ZoneSendTypeWeb,
};

NS_ASSUME_NONNULL_BEGIN

@interface ZoneSendManager : NSObject


@end

NS_ASSUME_NONNULL_END
