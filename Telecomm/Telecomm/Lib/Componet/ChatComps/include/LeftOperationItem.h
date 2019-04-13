//
//  LeftOperationItem.h
//  ChatComps
//
//  Created by 王胜利 on 2019/4/11.
//  Copyright © 2019 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, LeftOperationType) {
    LeftOperationTypeArrow,
    LeftOperationTypeTextArrow,
    LeftOperationTypeSwitch,
};

NS_ASSUME_NONNULL_BEGIN

@interface LeftOperationItem : UIView

@property(nonatomic,strong) UIImageView             *leftImage;
@property(nonatomic,strong) UILabel                 *titleLabel;
@property(nonatomic,strong) UISwitch                *mySwitch;
@property(nonatomic,strong) UIImageView             *arrowImage;
@property(nonatomic,strong) UILabel                 *textLabel;

+ (instancetype)viewWithIcon:(NSString *)icon title:(NSString *)title type:(LeftOperationType)type;

@property (nonatomic, strong) void(^itemTapBlock)(LeftOperationItem *item);
@property (nonatomic, strong) void(^itemSwitchBlock)(UISwitch *itemSwitch);


@end

NS_ASSUME_NONNULL_END
