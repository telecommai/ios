//
//  JFOrderManager.h
//  ChatComps
//
//  Created by 谢虎 on 2018/5/29.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface JFOrderManager : NSObject
+ (NSDictionary *)orderSectionArrayWithArray:(NSMutableArray *)dataArray;
+ (NSMutableArray *)orderArrayWithArray:(NSMutableArray *)dataArray;
@end
