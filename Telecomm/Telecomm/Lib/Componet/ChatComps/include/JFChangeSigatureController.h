//
//  JFChangeSigatureController.h
//  ChatComps
//
//  Created by 谢虎 on 2019/2/19.
//  Copyright © 2019 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SigNatureDelegate <NSObject>

- (void)changeSigNature:(NSString *)sign;

@end

@interface JFChangeSigatureController : UIViewController

@property(nonatomic,strong)NSString *sigNature;

@property(nonatomic,assign)id<SigNatureDelegate> delegate;

@end
