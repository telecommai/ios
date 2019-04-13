//
//  JFTransferWorkPayView.h
//  ChatComps
//
//  Created by 夏祥可 on 2018/8/11.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^ShowSliderBlock)(void);

@interface JFTransferWorkPayView : UIView

@property (nonatomic, copy)ShowSliderBlock block;

///矿工费用
@property (nonatomic,copy) NSString *currentFare;
//单位
@property (nonatomic,copy)   NSString  *coinName;
@end
