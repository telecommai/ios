//
//  SLBadgeButton.h
//  OSPMobile
//
//  Created by 王胜利 on 2017/12/20.
//  Copyright © 2017年 Pansoft. All rights reserved.
//  Page标题栏带Badge按钮
//

#import <UIKit/UIKit.h>
#import "Masonry.h"

@class SLPageEntity;

@interface SLBadgeButton : UIButton

@property (nonatomic, strong) NSString *badge;

@property (nonatomic, assign) BOOL isShowRedPoint;

@property (nonatomic, strong) SLPageEntity *pageEntity;

@end
