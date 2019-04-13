//
//  HDWalletDeviceCell.h
//  WalletManager
//
//  Created by 王胜利 on 2019/3/20.
//  Copyright © 2019 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, BottomViewType) {
    BottomViewTypeNormal,
    BottomViewTypeSuccess,
    BottomViewTypeWarn,
};

@interface HDWalletDeviceCell : UITableViewCell

- (void)cellWithIcon:(UIImage *)icon title:(NSString *)title sel:(BOOL)sel type:(BottomViewType)type tip:(NSString *)tip disabled:(BOOL)disabled;

@end

NS_ASSUME_NONNULL_END
