//
//  ZoneSectionFooterView.h
//  Zone
//
//  Created by 王胜利 on 2018/10/22.
//  Copyright © 2018 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Constant.h"

NS_ASSUME_NONNULL_BEGIN

@interface ZoneSectionFooterView : UITableViewHeaderFooterView

@property (nonatomic,copy) void(^addCommentBlock)();
@property (nonatomic,copy) void(^touchBlock)();

@end

NS_ASSUME_NONNULL_END
