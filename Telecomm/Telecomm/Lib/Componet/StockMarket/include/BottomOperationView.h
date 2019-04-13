//
//  BottomOperationView.h
//  StockMarket
//
//  Created by YRH on 2018/11/15.
//  Copyright © 2018 SpiderMan. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class BarOperationModel;
@class BarChildModel;

typedef void(^ButtonTouchCallback)(UIButton *button, BarOperationModel *model);

@interface BottomOperationView : UIView

@property (nonatomic, copy) ButtonTouchCallback touchCallBack;
@property (nonatomic, copy) void(^touchChildCallback)(BarChildModel *model);

- (void)buildData;

@end

typedef enum : NSUInteger {
    ForeignEvents,
    InternalEvents
} EventsType;

@interface BarOperationModel : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *imagePath;
@property (nonatomic, assign) EventsType eventsType;
@property (nonatomic, strong) NSArray *childArray;

@end

@interface BarChildModel : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *imagePath;

@end

NS_ASSUME_NONNULL_END
