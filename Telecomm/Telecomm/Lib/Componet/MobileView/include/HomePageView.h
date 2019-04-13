//
//  HomePageView.h
//  ESPMobile
//
//  Created by Javor on 15/7/22.
//  Copyright (c) 2015年 Javor. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EFPageCollectionMenu.h"

@interface HomePageView : UIView<UITableViewDataSource, UITableViewDelegate,EFPageCollectionMenuDelegate>

- (instancetype)initWithFrame:(CGRect)frame stubObject:(StubObject *)stubObject;

@end
