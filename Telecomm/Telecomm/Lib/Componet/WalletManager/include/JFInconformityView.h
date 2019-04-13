//
//  JFInconformityView.h
//  WalletManager
//
//  Created by 夏祥可 on 2018/12/12.
//  Copyright © 2018 pansoft. All rights reserved.
//  不相符 view

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^InconformityBlock)(NSString *);

@interface JFInconformityView : UIView

@property (nonatomic, copy) InconformityBlock agreeBlock;

- (void)show;
- (void)hiden;

@end

NS_ASSUME_NONNULL_END
