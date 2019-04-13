//
//  ThemeSelectCell.h
//  ThemeKit
//
//  Created by farby on 2019/2/26.
//  Copyright © 2019年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ThemeKit.h"

NS_ASSUME_NONNULL_BEGIN

@protocol  ThemeSelectCellDelegate<NSObject>

- (void)selectTheme:(NSIndexPath *)indexPath;

@end

@interface ThemeSelectCell : UICollectionViewCell
@property (nonatomic,strong) ThemeModel *model;
@property (nonatomic,weak) id<ThemeSelectCellDelegate>delegate;
@property (nonatomic,strong) NSIndexPath *indexPath;
@property (nonatomic,strong) UIImage     *image;
@end

NS_ASSUME_NONNULL_END
