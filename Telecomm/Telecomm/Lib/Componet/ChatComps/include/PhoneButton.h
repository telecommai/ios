//
//  PhoneButton.h
//  ESPChatComps
//
//  Created by 沈得举 on 16/11/1.
//  Copyright © 2016年 Pansoft. All rights reserved.
//  拨打电话按钮

#import <UIKit/UIKit.h>

@interface PhoneButton : UIButton
-(void)setNametitle:(NSString *)title underline:(BOOL)underline titleColor:(UIColor*)titleColor fontSize:(CGFloat)size target:(id)target;
@property(nonatomic,strong) NSString *phoneNumber;
@end
