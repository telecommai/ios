//
//  HomeView.h
//  YTAutoLayout
//
//  Created by fly on 14/12/12.
//  Copyright (c) 2014年 fly. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol HomeViewDelegate <NSObject>

@optional

-(void)homeViewLogin;

-(void)homeViewSetting;

-(void)homeViewAbout;

@end

@interface HomeView : UIView

@property (nonatomic,assign) id<HomeViewDelegate> delegate;

-(instancetype)initWithPicCount:(int) count;

@end


