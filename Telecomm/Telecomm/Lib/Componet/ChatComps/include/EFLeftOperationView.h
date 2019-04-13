//
//  EFLeftOperationView.h
//  ESPChatComps
//
//  Created by 虎 谢 on 16/12/2.
//  Copyright © 2016年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TagView.h"
@class EFLeftOperationView;
@protocol EFLeftOperationViewDelegate <NSObject>

/// 点击视图时候的代理事件
- (void)whenTapViewToDo:(EFLeftOperationView *)view;

@end


@interface EFLeftOperationView : UIView

typedef enum {
    TypeSwitch   = (Byte)0,
    TypeButton   = (Byte)1,
    TypeTextAndArrow = (Byte)2,
    TypeArrow    = (Byte)3
}type;

@property(nonatomic,assign) Byte type;
@property(nonatomic,strong) UIImageView             *leftImage;
@property(nonatomic,strong) UIImageView             *arrowImage;
@property(nonatomic,strong) UILabel                 *titleLabel;
@property(nonatomic,strong) UIButton                *circularButton;
@property(nonatomic,strong) UIButton                *squareButton;
@property(nonatomic,strong) UISwitch                *mySwitch;
@property(nonatomic,strong) UILabel                 *textLabel;
@property(nonatomic,strong) UITapGestureRecognizer  *tapRecognizer;
@property(nonatomic,strong) TagView                 *tagV;

/// key : value, dataDic[@"font"] 字体大小， @"text"，文字，@"img"，图片
@property(nonatomic,strong) NSDictionary            *dataDic;
@property(nonatomic,weak) id<EFLeftOperationViewDelegate> delegate;

-(instancetype)initWithType:(Byte)type;
-(instancetype)initWithFrame:(CGRect)frame withType:(Byte)type;

@end
