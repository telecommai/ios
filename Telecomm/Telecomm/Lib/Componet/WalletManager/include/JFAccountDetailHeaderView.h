//
//  JFAccountDetailHeaderView.h
//  ChatComps
//
//  Created by 董艳武 on 2018/8/10.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFMasterAccountModel.h"

typedef void(^ItemSelectCallBack)(NSInteger);

@interface JFAccountDetailHeaderView : UIView

@property(nonatomic,strong)     JFManagerAccountModel   *model;

@property(nonatomic,copy)       ItemSelectCallBack      cb;

-(void)setAnimationViewPosition:(CGFloat)postion;

-(void)animationViewScrollToIndex:(NSInteger)index;

@end
