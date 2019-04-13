//
//  JFPersonDetailController.h
//  ChatComps
//
//  Created by 谢虎 on 2019/2/19.
//  Copyright © 2019 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol MineInforDelegate <NSObject>

- (void)backChangeData:(NSDictionary *)dic;

@end

@interface JFPersonDetailController : UIViewController

@property(nonatomic,strong)NSMutableDictionary *dataDic;

@property(nonatomic,weak)id<MineInforDelegate> delegate;

@end
