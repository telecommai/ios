//
//  JFWalletMoreTableViewCell.h
//  WalletManager
//
//  Created by 赵洪壮 on 2019/2/13.
//  Copyright © 2019 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AssetsMenuManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFWalletMoreTableViewCell : UITableViewCell

@property (nonatomic, strong) AssetsGroupModel *groupModel;
@property (nonatomic, strong) NSMutableArray <NSString *>*selectedKeysArray;
// 两边间距
@property (nonatomic, assign) CGFloat edge;
// cell 宽高
@property (nonatomic, assign) CGFloat cellWidth;
@property (nonatomic, assign) CGFloat cellHeight;
// 是否处于编辑状态
@property (nonatomic, assign) BOOL isBeingEdit;
@property (nonatomic, copy) void(^JFMoreCellRefreshBlock)(AssetsMenuModel *model);
@property (nonatomic, copy) void(^JFMoreCellJumpBlock)(AssetsMenuModel *model);

@end

NS_ASSUME_NONNULL_END
