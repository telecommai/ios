//
//  EFTagButton.h
//  ESPMobileView
//
//  Created by 虎 谢 on 2017/12/11.
//  Copyright © 2017年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TagView.h"
#import "StubObject.h"
#import "IBadgeView.h"

@interface EFTagButton : UIButton<IBadgeView>

@property(nonatomic,strong) TagView *tagView;

@property(nonatomic,strong) StubObject *stub;

@property(nonatomic,assign) BOOL    isShow;

@end
