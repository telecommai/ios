//
//  ZoneAddCommentController.h
//  Zone
//
//  Created by 王胜利 on 2018/5/8.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Zone.h"

typedef NS_ENUM(NSUInteger, ZoneAddCommentType) {
    /// 添加评论
    ZoneAddCommentTypeComment,
    /// 添加回复
    ZoneAddCommentTypeReply,
    /// 转发
    ZoneAddCommentTypeTransmit,
};

typedef void(^ZoneAddCommentBlock)(ZoneAddCommentType type,NSArray <UIImage *>*images,NSString *inputText);

@interface ZoneAddCommentController : UIViewController

+ (void)addCommentWithSuperVc:(UIViewController *)superVc type:(ZoneAddCommentType)type complete:(ZoneAddCommentBlock)complete;

@end
