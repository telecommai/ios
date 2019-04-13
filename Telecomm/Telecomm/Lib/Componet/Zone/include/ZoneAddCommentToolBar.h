//
//  ZoneAddCommentToolBar.h
//  Zone
//
//  Created by 王胜利 on 2018/5/8.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface ZoneAddCommentToolBarModel:NSObject

/// 图片
@property (nonatomic, strong) NSString *imageName;
/// 标记
@property (nonatomic, strong) NSString *tag;

@end

@interface ZoneAddCommentToolBar : UIView

/// 赋值评论组件
- (void)barWithToolBarModels:(NSArray <ZoneAddCommentToolBarModel*> *)models touch:(void(^)(ZoneAddCommentToolBarModel *model))touchBlock;

@end
