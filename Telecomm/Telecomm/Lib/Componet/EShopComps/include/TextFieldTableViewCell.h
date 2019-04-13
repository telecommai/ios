//
//  TextFieldTableViewCell.h
//  EShopComps
//
//  Created by YRH on 2018/1/18.
//  Copyright © 2018年 谢虎. All rights reserved.
//

/*
 输入框cell
 */

#import <UIKit/UIKit.h>
#import "YHPlaceholderTextView.h"

typedef enum : NSUInteger {
    /// 普通输入
    TextFieldTableViewCellNormal,
    /// 数字输入
    TextFieldTableViewCellNumber,
    /// 不能输入
    TextFieldTableViewCellNuInput,
    /// textView
    TextFieldTableViewCellTextView,
} TextFieldTableViewCellType;

@protocol TextFieldTableViewCellDelegate <NSObject>

/**
 输入完文字

 @param textField textField
 */
- (void)inputTextTextFieldDidEndEditing:(UITextField *)textField;

/**
 输入完文字

 @param textView textView
 */
- (void)inputTextTextViewDidEndEditing:(YHPlaceholderTextView *)textView;

/**
 不输入文字的样式，点击的代理

 @param sender sender 
 */
- (void)touchThisViewAction:(UITapGestureRecognizer *)sender;

@end


@interface TextFieldTableViewCell : UITableViewCell

@property (nonatomic, weak) id<TextFieldTableViewCellDelegate> delegate;

/**
 数据字典
 @"placehold" : @"收货人姓名（请使用真实姓名）", @"text" : @"", @"style" : @"textField", @"type" :  @"TextFieldTableViewCellNormal"
 */
@property (nonatomic, strong, readonly) NSMutableDictionary *cellInfoDic;

/**
 赋值

 @param placeholdString placeholdString
 @param contentString contentString
 @param type type
 */
- (void)textFieldWithPlaceholdString:(NSString *)placeholdString contentString:(NSString *)contentString cellType:(TextFieldTableViewCellType)type cellInfoDic:(NSMutableDictionary *)cellInfoDic;

/**
 把枚举变成字符串

 @param type 枚举
 @return 字符串
 */
- (NSString *)cellTypeEnumStringWithType:(TextFieldTableViewCellType)type;

/**
 把字符串变成对应的枚举

 @param string 字符串
 @return 枚举
 */
- (TextFieldTableViewCellType)cellTypeEnumWithString:(NSString *)string;

@end

