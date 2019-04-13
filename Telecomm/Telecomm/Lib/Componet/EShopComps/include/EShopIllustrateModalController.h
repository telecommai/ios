//
//  EShopGoodsInfoModalController.h
//  EShopComps
//
//  Created by 王胜利 on 2018/1/22.
//  Copyright © 2018年 谢虎. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    /// 普通文字说明
    GoodsDetialContentViewTypeLabel,
    /// 列表说明
    GoodsDetailContentViewTypeTableView,
} GoodsDetailContentViewType;

typedef void(^SelectAddressBlock)(id object);

@interface EShopIllustrateModalController : UIViewController


/**
 显示说明弹窗View

 @param superVc 父控制器
 @param title 标题
 @param viewType 弹窗类型
 @param contentData 数据
 @return 弹窗实例对象
 */
+ (instancetype)showWithSuperVc:(UIViewController *)superVc
                          title:(NSString *)title
                       viewType:(GoodsDetailContentViewType)viewType
                    contentData:(id)contentData;


/// 选择地址回调Block
@property (nonatomic, copy) SelectAddressBlock addressBlock;

/// 选择其他地址回调（仅限type == GoodsDetailContentViewTypeAddress使用）
@property (nonatomic, copy) VoidBlock selectOtherAddress;
@end
