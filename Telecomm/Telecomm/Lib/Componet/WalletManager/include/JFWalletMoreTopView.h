//
//  JFWalletMoreTopView.h
//  WalletManager
//
//  Created by 赵洪壮 on 2019/1/26.
//  Copyright © 2019 pansoft. All rights reserved.
//  钱包应用更多页面顶部视图

#import <UIKit/UIKit.h>
#import "AssetsMenuManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFWalletMoreTopView : UIView

@property (nonatomic, copy) void(^JFWalletMoreTopViewOpenBlock)(void);
@property (nonatomic, copy) void(^JFWalletMoreTopViewHandleDataBlock)(AssetsMenuModel *model);

@property (nonatomic, strong) NSMutableArray <AssetsMenuModel *>*applicationArray;
@property (nonatomic, strong) NSMutableArray <NSString *>*selectedKeysArray;

@property (nonatomic, assign) BOOL isOpen;
// 间距
@property (nonatomic, assign) CGFloat edge;
// cell 宽高
@property (nonatomic, assign) CGFloat cellWidth;
@property (nonatomic, assign) CGFloat cellHeight;
@property (nonatomic, assign) CGFloat collectionViewHeight;


@end

NS_ASSUME_NONNULL_END
