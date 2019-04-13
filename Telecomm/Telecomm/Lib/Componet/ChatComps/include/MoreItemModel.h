//
//  MoreItem.h
//  FaceKeyboard

//  Company：     SunEee
//  Blog:        devcai.com
//  Communicate: 2581502433@qq.com

//  Created by ruofei on 16/3/31.
//  Copyright © 2016年 ruofei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "StubObject.h"

//typedef NS_ENUM(NSUInteger, MoreItemType) {
//    MoreItemTypeOther,
//    MoreItemTypeRecentFiles,
//    /// 转账
//    MoreItemTypeTransfer,
//    MoreItemTypeLocation,
//    MoreItemTypeSecretText,
//    MoreItemTypeSecretImage,
//    MoreItemTypeSecretFile,
//    MoreItemTypeSecretNotice,
//    MoreItemTypeETHTransfer,
//    MoreItemTypeBTCTransfer,
//    MoreItemTypeAlipayQRCode,
//    MoreItemTypeWeChatQRCode
//};

@interface MoreItemModel : NSObject

//@property (nonatomic, assign) MoreItemType moreItemType;
@property (nonatomic, strong) StubObject *stubObject;
@property (nonatomic, copy) NSString * itemPicName;
@property (nonatomic, copy) NSString * itemPicPath;
@property (nonatomic, copy) NSString * itemHighlightPicName;
@property (nonatomic, copy) NSString * itemName;

+ (instancetype)moreItemWithPicName:(NSString *)picName highLightPicName:(NSString *)highLightPicName itemName:(NSString *)itemName;
+ (instancetype)moreItemWithPicPath:(NSString *)picName highLightPicName:(NSString *)highLightPicName itemName:(NSString *)itemName;

@end
