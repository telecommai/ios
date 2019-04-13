//
//  UMShareView.h
//  ShareComps
//
//  Created by 夏祥可 on 2018/12/5.
//  Copyright © 2018 childs. All rights reserved.
//  自定义分享视图

#import <UIKit/UIKit.h>
#import "Constant.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMShareView : UIView

///要分享的图片
@property (nonatomic, strong) UIImage *shareImage;

///点击分享给联系人
@property (nonatomic, copy) NumberBlock shareToFriend;

/*
 初始化
 @prama plantforms 分享的平台
 */
- (instancetype)initWithSize:(CGSize)size Platforms:(NSArray <NSNumber *>*)plantforms;


@end

NS_ASSUME_NONNULL_END
