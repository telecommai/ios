//
//  AssetsMenuManager.h
//  WalletManager
//
//  Created by 王胜利 on 2019/1/29.
//  Copyright © 2019 pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 映射类型

 - AssetsMenuTypeController: 控制器
 - AssetsMenuTypeWeb: 网页
 */
typedef NS_ENUM(NSUInteger, AssetsMenuType) {
    AssetsMenuTypeController      = 0,
    AssetsMenuTypeWeb             = 1,
};

@interface AssetsMenuModel : NSObject

@property (nonatomic,assign) AssetsMenuType menuType;
@property (nonatomic,assign) BOOL canUse;
@property (nonatomic,copy) NSString *titleKey;
@property (nonatomic,copy) NSString *icon;
@property (nonatomic,copy) NSString *go;
@property (nonatomic,copy) NSNumber *tableName;
//// 是否添加为我的应用
//@property (nonatomic,assign) BOOL isSelected;
// 选中时的排序坐标
//@property (nonatomic,assign) NSInteger selectedIndex;
@property (nonatomic,copy) NSString *menuKey;

@end

@interface AssetsGroupModel : NSObject 

@property (nonatomic, strong) NSMutableArray <AssetsMenuModel *>* dataArray;
@property (nonatomic, copy) NSString *titleKey;
@property (nonatomic,copy) NSNumber *tableName;

@end

@interface AssetsMenuManager : NSObject

// 首页顶部数据(扫一扫、付钱、收钱、积分卡)
+ (NSArray <AssetsMenuModel *>*)assetHomeTopMenus;
// 首页卡片数据(红包、空投、安全加固等)
+ (NSMutableArray <AssetsMenuModel *>*)assetHomeMenus;

// 更多页面新加接口
/// 所有分类
+ (NSMutableArray <AssetsGroupModel *>*)assetAllMenus;
/// 已选分类
+ (NSMutableArray <AssetsMenuModel *>*)assetSelectedMenus:(NSMutableArray <AssetsGroupModel *>*)dataArray;
+ (NSMutableArray <NSString *>*)getSelectedKeyArray;
/// 刷新数据
+ (void)refreshSelectedMenusData:(NSMutableArray <NSString *>*)dataArray;

@end

NS_ASSUME_NONNULL_END
