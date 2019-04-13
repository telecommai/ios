//
//  EFNewsCommentHeader.h
//  ESPChatComps
//
//  Created by farby on 2017/11/30.
//  Copyright © 2017年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NewsIntegralView.h"

@protocol EFNewsCommentHeaderDelegate <NSObject>


@end

@interface EFNewsCommentHeader : UIView

@property(nonatomic,weak)  id<EFNewsCommentHeaderDelegate>  delegate;

@property(nonatomic,strong) UIImageView                     *userAvatar;

@property(nonatomic,strong) UILabel                         *userName;

@property(nonatomic,strong) UILabel                         *contentLabel;

@property(nonatomic,strong) UIImageView                     *signView;

@property(nonatomic,strong) UILabel                         *signTimes;

@property(nonatomic,strong) UILabel                         *timeLabel;

@property(nonatomic,strong) UIButton                        *replyButton;

@property(nonatomic,strong) NSDictionary                    *dataDic;

@property(nonatomic,strong) NewsIntegralView                *integralView;

-(void)changeIntegralWithDict:(NSDictionary *)dict;

@end
