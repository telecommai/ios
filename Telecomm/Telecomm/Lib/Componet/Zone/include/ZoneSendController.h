//
//  ZoneSendController.h
//  Zone
//
//  Created by 王胜利 on 2018/5/16.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Zone.h"

@interface ZoneSendController : UIViewController

@property (nonatomic, copy) DictionaryBlock sendSuccessBlock;
@property (nonatomic, copy) postShortIdBlock updatePostShortId;

@end
