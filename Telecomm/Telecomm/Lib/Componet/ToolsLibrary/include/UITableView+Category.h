//
//  UITableView+Category.h
//  ToolsLibrary
//
//  Created by 王胜利 on 2018/9/26.
//  Copyright © 2018 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITableView (Category)

/// 此方法和下面方法配套使用
/// 1.1.链式语法注册tableView复用Cell
@property (nonatomic, readonly) UITableView *(^registerReusableCell)(Class aClass);
/// 1.2.从重用池获取cell
- (__kindof UITableViewCell *)dequeueReusableCellWithCellClass:(Class)Class forIndexPath:(NSIndexPath *)indexPath;

/// 2.1.链式语法注册tableView复用分组Header和Footer
@property (nonatomic, readonly) UITableView *(^registerReusableHeaderFooter)(Class aClass);
/// 2.2.从重用池获取分组Header和fFooter
- (__kindof UITableViewHeaderFooterView *)dequeueReusableHeaderFooterWithCellClass:(Class)Class;


@end

NS_ASSUME_NONNULL_END
