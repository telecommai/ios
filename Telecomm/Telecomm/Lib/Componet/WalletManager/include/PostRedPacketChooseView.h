//
//  PostRedPacketChooseView.h
//  ChatComps
//
//  Created by 夏祥可 on 2018/8/8.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^ChooseViewBlock)(NSInteger);

@interface PostRedPacketChooseView : UIView

@property (nonatomic, copy)ChooseViewBlock block;

///设置右侧的币种名称
@property (nonatomic, copy)NSString       *rightTitle;

///设置类型内容、提示内容（提示内容为空时，隐藏）
- (void)setTypeName:(NSString *)type trip:(NSString *)trip swichBtn:(NSString *)swich;



@end
