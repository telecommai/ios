//
//  EFGroupImageUtils.h
//  ESPChatComps
//
//  Created by 陈海鹏 on 2017/3/10.
//  Copyright © 2017年 Pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface EFGroupImageUtils : NSObject

/// 保存群头像
+ (NSString *)saveImageWithGroupId:(int)groupId image:(UIImage *)img;

@end
