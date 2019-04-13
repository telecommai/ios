//
//  JFHealthHomeController.h
//  JFHealthComps
//
//  Created by YRH on 2019/1/24.
//  Copyright © 2019 SpiderMan. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFHealthHomeController : UIViewController

@end

NS_ASSUME_NONNULL_END

@interface HealthHomeCellModel : NSObject

/// cell标识符
@property (nonatomic, copy) NSString *cellIdentifier;
/// cell数据
@property (nonatomic, assign) id cellData;

@end
