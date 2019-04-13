//
//  NSAttributedString+Category.h
//  ToolsLibrary
//
//  Created by YRH on 2018/10/16.
//  Copyright © 2018 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSAttributedString (Category)

/// 变成可变的富文本
+ (NSMutableAttributedString *)mutableAttributedString:(NSAttributedString *)attributedString;

@end

