//
//  SureShareFriendController.h
//  ChatComps
//
//  Created by 王胜利 on 2018/10/15.
//  Copyright © 2018 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Constant.h"

NS_ASSUME_NONNULL_BEGIN

@interface SureShareFriendController : UIViewController



@property (nonatomic, copy) NSString *ttitle;
@property (nonatomic, strong) UIView *alertConetentView;

@property (nonatomic, copy) VoidBlock sureActionBlock;


@end

NS_ASSUME_NONNULL_END
