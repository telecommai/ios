//
//  JFLanguageManager.h
//  ToolsLibrary
//
//  Created by 赵洪壮 on 2018/12/10.
//  Copyright © 2018 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "StubObject.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, TableLanguageType) {
    /// 主工程
    Table_OpenPlanet,
    /// 主工程Info.string
    Table_MainInfo,
    /// chatComps工程
    Table_Chat,
    /// toolsLibrary工程（包含公有）
    Table_Tools,
    /// stockMarket工程
    Table_StockMarket,
    /// eshop工程
    Table_EShopComps,
    /// zone工程
    Table_Zone,
    /// MobileView工程
    Table_Mobile,
    /// Wallet工程
    Table_Wallet,
    /// NewsComps 工程
    Table_NewsComps,
    /// ShareComps 工程
    Table_ShareComps,
    /// PayComps 工程
    Table_PayComps,
    /// HealthComps 工程
    Table_HealthComps,
};

@interface JFLanguageManager : NSObject

/// key关键字  table string表名  comment 描述
+ (NSString *)stringWithKey:(NSString *)key table:(TableLanguageType)table comment:(NSString *)comment;
/// 通过key关键字  table string表名
+ (NSString *)stringWithKey:(NSString *)key table:(TableLanguageType)table;
#pragma mark 常用
/// 提示
+ (NSString *)commonStringWithAlert;
/// 确定
+ (NSString *)commonStringWithConfirm;
/// 取消
+ (NSString *)commonStringWithCancel;
/// 返回
+ (NSString *)commonStringWithBack;
/// 删除
+ (NSString *)commonStringWithDelete;
/// 请求失败
+ (NSString *)commonStringWithRequestFailed;
/// 暂无数据
+ (NSString *)commonStringWithNoData;
/// 根据Stubobject获取名称
+ (NSString *)titleWithStubobject:(StubObject *)stubobject;
/// 获取语言种类
+ (NSString *)getCurrentLanguage;
/// 获取语言种类名
+ (NSString *)getCurrentLanguageName;
///
+ (NSString *)getCurrentLocale;
@end

NS_ASSUME_NONNULL_END
