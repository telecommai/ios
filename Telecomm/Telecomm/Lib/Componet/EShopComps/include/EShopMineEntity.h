//
//  EShopMineEntity.h
//  EShopComps
//
//  Created by 王胜利 on 2018/3/8.
//  Copyright © 2018年 谢虎. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EShopMineEntity : NSObject

/// 标题
@property (nonatomic, copy) NSString *title;
/// 右标题
@property (nonatomic, copy) NSString *rightTitle;
/// 是否显示右边按钮
@property (nonatomic, assign) BOOL isShowRightTitle;
/// 内容
@property (nonatomic, strong) NSArray * items;

@end

@interface EShopMineItemEntity : NSObject

/// 标题
@property (nonatomic, copy) NSString *title;
/// 数目
@property (nonatomic, copy) NSString *badge;
/// 本地图片路径
@property (nonatomic, copy) NSString *localImagePath;
/// 备注
@property (nonatomic, copy) NSString *other;
/// 跳转界面
@property (nonatomic, copy) NSString *viewControllerNameString;

@end
