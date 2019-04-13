//
//  RedPacketView.h
//  ChatComps
//
//  Created by 谢虎 on 2018/8/15.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol RedPacketDelegate <NSObject>
///点击关闭按钮
-(void)redPacketViewDidSelectCloseButton;
///点击发送按钮
-(void)redPacketViewDidSelectSendButton;
///点击生成红包海报
-(void)redPacketPictureCreateAction;

@end

@interface RedPacketView : UIView

@property(nonatomic,weak) id<RedPacketDelegate> delegate;

/**
 赋值

 @param title title
 @param content content
 */
-(void)viewWithTitle:(NSString *)title content:(NSString *)content;

@end
