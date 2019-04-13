//
//  UIBarButtonItem+Category.h
//  TalkChain
//
//  Created by 王胜利 on 2018/3/30.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

#pragma mark - 封装事件回调
@interface UIBarButtonItem (BlockAction)
/// 类方法
+ (instancetype)ex_itemWithBarButtonSystemItem:(UIBarButtonSystemItem)systemItem handler:(void (^)(id sender))action ;
+ (instancetype)ex_itemWithImage:(UIImage *)image style:(UIBarButtonItemStyle)style handler:(void (^)(id sender))action ;
+ (instancetype)ex_itemWithImage:(UIImage *)image landscapeImagePhone:(UIImage *)landscapeImagePhone style:(UIBarButtonItemStyle)style handler:(void (^)(id sender))action ;
+ (instancetype)ex_itemWithTitle:(NSString *)title style:(UIBarButtonItemStyle)style handler:(void (^)(id sender))action ;

/// 实例方法
- (instancetype)ex_initWithBarButtonSystemItem:(UIBarButtonSystemItem)systemItem handler:(void (^)(id sender))action ;
- (instancetype)ex_initWithImage:(UIImage *)image style:(UIBarButtonItemStyle)style handler:(void (^)(id sender))action ;
- (instancetype)ex_initWithImage:(UIImage *)image landscapeImagePhone:(UIImage *)landscapeImagePhone style:(UIBarButtonItemStyle)style handler:(void (^)(id sender))action ;
- (instancetype)ex_initWithTitle:(NSString *)title style:(UIBarButtonItemStyle)style handler:(void (^)(id sender))action ;

@end
