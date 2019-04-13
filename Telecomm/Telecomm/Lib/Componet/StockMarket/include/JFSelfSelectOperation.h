//
//  JFSelfSelectOperation.h
//  StockMarket
//
//  Created by YRH on 2018/12/4.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

/// 添加、删除自选操作
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface JFSelfSelectOperation : NSObject

/// 添加自选
+ (void)addSelfSelectWithId:(NSString *)Id showHintView:(UIView *)showHintView;
/// 删除自选
+ (void)deleteSelfSelectWithId:(NSString *)Id showHintView:(UIView *)showHintView;

@end
