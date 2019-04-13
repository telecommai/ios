//
//  UILabel+Category.h
//  EShop
//
//  Created by 王胜利 on 2018/3/6.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XLRichTextModel : NSObject

@property (nonatomic, copy) NSString *string;
@property (nonatomic, assign) NSRange range;

@end

@interface UILabel (SpaceLine)

///是否显示点击效果，默认是打开
@property (nonatomic, assign) BOOL isShowTagEffect;

///TagArray  点击的字符串数组
- (void)onTapRangeActionWithString:(NSArray <NSString *> *)TagArray tapClicked:(void (^) (NSString *string , NSRange range , NSInteger index))tapClick;

/// 设置行距
- (void)setText:(NSString*)text lineSpacing:(CGFloat)lineSpacing;

/// 左上侧对齐
- (void) textLeftTopAlign;

/// 设置首行缩进
- (void)setHeadIndent:(CGFloat)indent;

@end


