//
//  SLPageNormalContentView.h
//  ToolsLibrary
//
//  Created by 王胜利 on 2018/11/13.
//  Copyright © 2018 Javor Feng. All rights reserved.
//  一并初始化并加载所要显示的所有View，(使用于固定的View)
//

#import <UIKit/UIKit.h>
#import "SLPageProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface SLPageNormalContentView : UIView<SLPageContentProtocol>

@end

NS_ASSUME_NONNULL_END
