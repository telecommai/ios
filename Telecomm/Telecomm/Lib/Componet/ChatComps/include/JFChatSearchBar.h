//
//  JFChatSearchBar.h
//  ChatComps
//
//  Created by 董艳武 on 2018/11/5.
//  Copyright © 2018 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFChatSearchBar : UISearchBar

/// 输入框的圆角
@property(nonatomic,assign) CGFloat     textFieldCornerRadius;
/// 输入框的文字颜色
@property(nonatomic,strong) UIColor    *searchTextColor;
/// 输入框的背景颜色
@property(nonatomic,strong) UIColor    *searchTextFieldBackgroundColor;
/// 输入框placeHolder的颜色
@property(nonatomic,strong) UIColor    *placeHolderColor;

-(instancetype)initWithFrame:(CGRect)frame isAddToNavgationBar:(BOOL)isAddToNavgationBar;

@end

NS_ASSUME_NONNULL_END
