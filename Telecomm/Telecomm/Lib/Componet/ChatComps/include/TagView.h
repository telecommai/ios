//
//  TagView.h
//  MessagePage
//
//  Created by 于仁汇 on 16/4/10.
//  Copyright © 2016年 YRH. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TagView : UIButton

@property (nonatomic, strong) NSString *badgeValue;

@property (nonatomic, strong) UIColor  *badgeBGColor;

//判断是否为二级菜单
@property (nonatomic, assign) BOOL sencondMenu;

-(instancetype)initWithFrame:(CGRect)frame WithSecondMenu:(BOOL)isSec;

@end
