//
//  ZoneCellVideoView.h
//  Zone
//
//  Created by 王胜利 on 2018/5/11.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Zone.h"

@interface ZoneCellVideoView : UIView

- (void)contentViewWithModel:(ZoneModel *)model;
/// view高度
- (CGFloat)viewHeight;
/// 本地视频展示
- (void)contentViewWithLocalPath:(NSString *)path WithCoverImage:(UIImage *)image;


@end
