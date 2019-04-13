//
//  LoginTipView.h
//  ChatComps
//
//  Created by 高建飞 on 2018/7/6.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol LoginTipDelegate <NSObject>

-(void)loginTipViewDidSelect;

@end

@interface LoginTipView : UIView

@property(nonatomic,weak)  id<LoginTipDelegate>delegate;

- (void)viewWithImage:(UIImage *)icon title:(NSString *) title;

@end
