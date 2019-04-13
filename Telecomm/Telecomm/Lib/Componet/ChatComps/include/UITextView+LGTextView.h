//
//  UITextView+LGTextView.h
//  LGIDExchangeMobile
//
//  Created by Sunjimin on 2017/10/31.
//  Copyright © 2017年 YRH. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextView (LGTextView)

/*  ！！！！！！！ 特殊说明。如果你想对textView.text直接赋值  ！！！！！！！！
 *       请务必在对textView.placehoulder和textView.limitLength之前进行
 *       格式：      textView.text = @"请务必写在placeholder和limitLength之前";
 *                  textView.placeholder = @"喜欢";
 *                  textView.limitLength = @20;//如果赋值长度大于此长度会被自动截断！
 */
@property (nonatomic,strong) NSString *placeholder;//占位符
@property (copy, nonatomic) NSNumber *limitLength;//限制字数

@end
