//
//  UICollectionView+Category.h
//  ToolsLibrary
//
//  Created by 王胜利 on 2018/10/10.
//  Copyright © 2018 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UICollectionView (Category)

/// 此方法和下面方法配套使用
/// 1.注册cell(点语法注册Cell)
@property (nonatomic, readonly) UICollectionView *(^registerReusableCell)(Class aClass);
/// 2.从缓存池获取cell
- (__kindof UICollectionViewCell *)dequeueReusableCellWithCellClass:(Class)aClass forIndexPath:(NSIndexPath *)indexPath;

@end

NS_ASSUME_NONNULL_END
