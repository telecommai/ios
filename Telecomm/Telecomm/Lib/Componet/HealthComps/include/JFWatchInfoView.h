//
//  JFWatchInfoView.h
//  JFHealthComps
//
//  Created by YRH on 2019/1/24.
//  Copyright © 2019 SpiderMan. All rights reserved.
//

/// 手表信息
#import <UIKit/UIKit.h>

typedef void(^TouchButtonCallback)(UIButton *sender);
@interface JFWatchInfoView : UIView

/// 按钮点击回调
@property (nonatomic, copy) TouchButtonCallback buttonCallback;

/// 赋值
- (void)setWatchLinkState:(NSString *)linkState watchName:(NSString *)watchName voltameter:(NSString *)voltameter quantity:(NSString *)quantity;

@end
