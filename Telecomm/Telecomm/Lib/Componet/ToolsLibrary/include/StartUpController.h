//
//  StartUpController.h
//  OpenPlanet
//
//  Created by 董艳武 on 2018/10/13.
//  Copyright © 2018 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Constant.h"

NS_ASSUME_NONNULL_BEGIN

@interface StartUpController : UIViewController

/**
 初始化方法

 @param pageInfo 启动页信息
 @param intoAction 点击事件
 @param isFromAbout 是否从关于进入
 @return 启动页控制器对象
 */
-(instancetype)initWithPageInfo:(NSArray<NSDictionary *> *)pageInfo
                     intoAction:(VoidBlock)intoAction
                    isFromAbout:(BOOL)isFromAbout;


@end

NS_ASSUME_NONNULL_END
