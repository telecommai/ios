//
//  ToolBarItem.h
//  KeyboardForChat

//  Company：     SunEee
//  Blog:        devcai.com
//  Communicate: 2581502433@qq.com

//  Created by caipeng on 16/4/1.
//  Copyright © 2016年 ruofei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^IsSelectedCompletionHandle)(id object);
typedef void(^IsUnSelectedCompletionHandle)(id object);

@interface ChatToolBarItemModel : NSObject

@property (nonatomic, strong) UIImage *normalImage;
@property (nonatomic, strong) UIImage *highlightedImage;
@property (nonatomic, strong) UIImage *selectedImage;
@property (nonatomic, copy) IsSelectedCompletionHandle isSelectedCallBack;
@property (nonatomic, copy) IsUnSelectedCompletionHandle isUnSelectedCallBack;

@property (nonatomic, copy) NSString *normalStr;
@property (nonatomic, copy) NSString *highLStr;
@property (nonatomic, copy) NSString *selectStr;

+ (instancetype)barItemNormalImage:(UIImage *)normalImage highlightImage:(UIImage *)highlightImage selectImage:(UIImage *)selectImage;

@end
