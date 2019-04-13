//
//  UISearchBar+Category.h
//  ToolsLibrary
//
//  Created by 董艳武 on 2018/8/21.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UISearchBar (Category)

@property (nonatomic,strong) UIColor *textColor;

@property (nonatomic,strong) UIColor *textFieldBackgroundColor;

-(UITextField *)getTextField;

@end
