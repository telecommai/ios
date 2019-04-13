//
//  JFChangeNickNameController.h
//  ChatComps
//
//  Created by 谢虎 on 2019/2/19.
//  Copyright © 2019 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol NickNameDelegate <NSObject>

- (void)changeNickName:(NSString *)nickname;

@end

@interface JFChangeNickNameController : UIViewController

@property(nonatomic,strong)NSString *nickName;

@property(nonatomic,assign)id<NickNameDelegate> delegate;

@end
