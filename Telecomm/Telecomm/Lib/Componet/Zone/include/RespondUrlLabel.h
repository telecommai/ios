//
//  RespondUrlLabel.h
//  Zone
//
//  Created by StarLord on 2018/8/6.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface XLRichModel : NSObject

@property (nonatomic, copy) NSString *string;
@property (nonatomic, assign) NSRange range;

@end

typedef void(^HitTestCompletionHandle)(void);
typedef void(^TapBlock)(NSString *string, NSRange range, NSInteger index);
@interface RespondUrlLabel : UILabel

/// 开始事件传递
@property (nonatomic, copy) HitTestCompletionHandle hitTestCompletionHandle;
@property (nonatomic, copy) TapBlock tapBlock;
@property (nonatomic, assign) BOOL isTapAction;
@property (nonatomic, assign) BOOL isTapEffect;

@end
