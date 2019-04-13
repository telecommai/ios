//
//  StartUpNavView.h
//  ToolsLibrary
//
//  Created by 董艳武 on 2018/10/15.
//  Copyright © 2018 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Constant.h"

NS_ASSUME_NONNULL_BEGIN

@interface StartUpNavView : UIView

-(instancetype)initWithTitle:(NSString *)title AndBackAction:(VoidBlock)action;

@end

NS_ASSUME_NONNULL_END
