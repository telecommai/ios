//
//  JFSegementControl.h
//  ChatComps
//
//  Created by 董艳武 on 2018/8/16.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JFSegementControl : UIScrollView

@property (nonatomic,copy)  void(^cb)(NSInteger);


/**
 初始化

 @param frame 位置和大小
 @param titles 标题
 @return s实例化对象
 */
-(instancetype)initWithFrame:(CGRect)frame titles:(NSArray<NSString *>*)titles;

-(void)selectIndex:(NSInteger)index;

@end
