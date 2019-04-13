//
//  JFInputController.h
//  ChatComps
//
//  Created by 谢虎 on 2018/7/31.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol JFInputDelegate <NSObject>

-(void)jFInputControllerDidFinishEdit:(NSString *)introdctuon;

@end

@interface JFInputController : UIViewController

@property(nonatomic,weak) id<JFInputDelegate> delegate;

-(instancetype)initWithGroupId:(NSString *)groupId groupIntro:(NSString *)groupIntro isEdit:(BOOL)isEdit;

@end
