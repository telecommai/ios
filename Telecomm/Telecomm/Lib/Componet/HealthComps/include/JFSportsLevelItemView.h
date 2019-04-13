//
//  JFSportsLevelItemView.h
//  JFHealthComps
//
//  Created by YRH on 2019/1/28.
//  Copyright © 2019 SpiderMan. All rights reserved.
//

#import <UIKit/UIKit.h>

@class JFSportsLevelItemModel;
@interface JFSportsLevelItemView : UIView

@property (nonatomic, strong) JFSportsLevelItemModel *itemModel;

@end

@interface JFSportsLevelItemModel : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, assign) CGFloat progress;

@end
