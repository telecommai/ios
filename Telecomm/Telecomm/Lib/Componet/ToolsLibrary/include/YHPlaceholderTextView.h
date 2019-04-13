//
//  YHPlaceholderTextView.h
//  LGIDExchangeMobile
//
//  Created by YRH on 2017/11/11.
//  Copyright © 2017年 YRH. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YHPlaceholderTextView : UITextView
/** 占位文字 */
@property (nonatomic, copy) NSString *placeholder;
/** 占位文字颜色 */
@property (nonatomic, strong) UIColor *placeholderColor;

@end
