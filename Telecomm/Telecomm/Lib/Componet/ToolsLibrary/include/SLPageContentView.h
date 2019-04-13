//
//  SLPageContentView.h
//  SLPageView
//
//  Created by 王胜利 on 2018/11/12.
//  Copyright © 2018 wsl. All rights reserved.
//  跟随滑动初始化所显示的控制器，没滑过去不进行初始化
//

#import <UIKit/UIKit.h>
#import "SLPageProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface SLPageContentView : UIView<SLPageContentProtocol>

@end

NS_ASSUME_NONNULL_END
