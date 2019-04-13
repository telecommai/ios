//
//  JFHealthHomeController+DataSource.h
//  HealthComps
//
//  Created by YRH on 2019/2/12.
//  Copyright © 2019 SpiderMan. All rights reserved.
//

#import "JFHealthHomeController.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFHealthHomeController (DataSource)

/// cell数据
- (NSMutableArray <HealthHomeCellModel *>*)homeCellDataSource;

@end

NS_ASSUME_NONNULL_END
