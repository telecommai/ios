//
//  PostRedPacketWriteView.h
//  ChatComps
//
//  Created by 夏祥可 on 2018/8/8.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^WriteViewBlock)(void);
@interface PostRedPacketWriteView : UIView

@property (nonatomic, copy)WriteViewBlock block;

///输入框
@property (nonatomic,strong) UITextField *textField;

///金额 单位
@property (nonatomic, copy) NSString *fareUnit;

///当前是否为拼手气红包
@property (nonatomic,assign) BOOL isLucky;

///设置 拼图标显示、类型内容、单位、提示内容、切换按钮
- (void)setShowPin:(BOOL)show typeName:(NSString *)type unit:(NSString *)unit trip:(NSString *)trip swichBtn:(NSString *)swich;

@end
