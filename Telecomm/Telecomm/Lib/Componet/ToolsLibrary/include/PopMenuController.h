//
//  PopMenuController.h
//  ToolsLibrary
//
//  Created by 王胜利 on 2018/10/11.
//  Copyright © 2018 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PopMenuModel : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *iconPath;

+ (instancetype)modelWithTitle:(NSString *)title iconPath:(NSString *)iconPath;

@end

NS_ASSUME_NONNULL_BEGIN

@interface PopMenuController : UIViewController

+ (void)pop:(NSArray <PopMenuModel *>*)datas barButtonItem:(UIBarButtonItem *)barButtonItem point:(CGPoint)point itemSize:(CGSize)itemSize select:(void(^)(PopMenuModel *menuModel,NSInteger idx))selectBlock;
+ (void)pop:(NSArray <PopMenuModel *>*)datas barButtonItem:(UIBarButtonItem *)barButtonItem point:(CGPoint)point itemSize:(CGSize)itemSize showMaxCount:(NSInteger)showMaxCount select:(void(^)(PopMenuModel *menuModel,NSInteger idx))selectBlock;

@end

NS_ASSUME_NONNULL_END
