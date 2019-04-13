//
//  JFHorizFormItem.h
//  WalletManager
//
//  Created by YRH on 2018/12/11.
//  Copyright © 2018 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFHorizFormItem : UICollectionViewCell

@property (nonatomic, copy) NSString *string;

@property (nonatomic, strong) UIFont *stringFont;

@property (nonatomic, strong) UIColor *stringColor;

@end

NS_ASSUME_NONNULL_END
