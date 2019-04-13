//
//  JFAssetsHomeScrollView.h
//  WalletManager
//
//  Created by 夏祥可 on 2019/1/28.
//  Copyright © 2019 pansoft. All rights reserved.
//  资产首页内容ScrollView

#import <UIKit/UIKit.h>
#import "Constant.h"
#import "JFAssetsHeader.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFAssetsHomeScrollView : UIScrollView

@property (nonatomic,copy) FloatBlock contentOffsetBlock;
@property (nonatomic,copy) IdBlock    clickMenuAction;

@end

NS_ASSUME_NONNULL_END
