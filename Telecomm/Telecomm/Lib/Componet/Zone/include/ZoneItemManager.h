//
//  ZoneItemManager.h
//  Zone
//
//  Created by 王胜利 on 2018/10/22.
//  Copyright © 2018 pansoft. All rights reserved.
//  引力场可扩展Item管理器
//
/*
  引力场自定义Item说明：
 1.在ZoneItemType中添加该类型(类型对应的值必须和引力场ZoneContentModel.type值相等)
 2.编写item，实现ZoneItem协议
 3.在ZoneItemManager.m最上面方法(ZoneItemTypeName())中，参照之前的添加该类型对应的ItemClass名称
 4.在ZoneItemManager.m 之 supportItemTypes 方法里面添加支持该Item
 */

#import <Foundation/Foundation.h>
#import "ZoneItem.h"

NS_ASSUME_NONNULL_BEGIN
/// 引力波内容类型(1：纯文本 2：文本+图片 3：文本+视频 4:文本+webView 5:文字+商品)
typedef NS_ENUM(NSUInteger, ZoneItemType) {
    ZoneItemTypeText     = 1,
    ZoneItemTypeImage    = 2,
    ZoneItemTypeVideo    = 3,
    ZoneItemTypeWebView  = 4,
    ZoneItemTypeGoods    = 5,
};

@interface ZoneItemManager : NSObject

@property (class, readonly) NSDictionary<NSNumber *,NSString *> *supportItems;

/// 通过type获取item类型模型
+ (NSString *)itemClassNameWithType:(ZoneItemType)itemType;
/// 根据type创建该类型新的Item
+ (id<ZoneItem>)createItemWithType:(ZoneItemType)itemType;

@end

NS_ASSUME_NONNULL_END
