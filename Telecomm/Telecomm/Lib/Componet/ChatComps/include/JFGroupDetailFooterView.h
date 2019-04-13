//
//  JFGroupDetailFooterView.h
//  ChatComps
//
//  Created by 董艳武 on 2018/8/30.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JFGroupDetailFooterView : UIView

/// 删除或退出部落的回调
@property (nonatomic,copy) void(^delteGroupCallBack)(void);

@end
