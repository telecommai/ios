//
//  PopMenuView.h
//  ToolsLibrary
//
//  Created by 王胜利 on 2018/10/11.
//  Copyright © 2018 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PopMenuModel;
NS_ASSUME_NONNULL_BEGIN

@interface PopMenuView : UIView

+ (instancetype)viewWithDatas:(NSArray <PopMenuModel *>*)datas itemHeight:(CGFloat)itemHeight;

@property (nonatomic, assign) NSUInteger selectIndex;

@end

NS_ASSUME_NONNULL_END
