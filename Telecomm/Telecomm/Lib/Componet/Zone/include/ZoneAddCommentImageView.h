//
//  ZoneAddCommentImageView.h
//  Zone
//
//  Created by 王胜利 on 2018/5/16.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZoneAddCommentImageView : UIView

- (void)viewWithImages:(NSArray *)images;

@property (nonatomic,copy) void(^deleteImage)(UIImage *image);

@end
