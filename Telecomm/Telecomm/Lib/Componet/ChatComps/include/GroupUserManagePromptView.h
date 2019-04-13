//
//  GroupUserManagePromptView.h
//  ESPChatComps
//
//  Created by 于仁汇 on 17/1/13.
//  Copyright © 2017年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PersonModel.h"

@class GroupUserManagePromptView;
@protocol GroupUserManagePromptViewDelegate <NSObject>

/// 点击事件
- (void)tapViewActionWithTapInView:(UIView *)view thisGroupUserManagePromptView:(GroupUserManagePromptView *)groupUserManagePromptView;

@end

@interface GroupUserManagePromptView : UIView

/// 需要显示的文字数组
@property (nonatomic, strong) NSArray *titleArray;
/// label上文字的颜色
@property (nonatomic, strong) UIColor *textColor;

@property (nonatomic, strong) UIFont  *textfont;

/// 点击cell的 PersonModel
@property (nonatomic, strong) PersonModel *selectModel;

@property (nonatomic, weak) id<GroupUserManagePromptViewDelegate> delegate;

//- (instancetype)initWithTitleArray:(NSArray *)array;
/// 初始化方法，frame给（0，0，0，0）会用默认的
- (instancetype)initWithFrame:(CGRect)frame titleArray:(NSArray *)array textColor:(UIColor *)textColor textFont:(UIFont *)textFont;

/// 存放数据
- (void)promptViewSetInfoWithValue:(id)value forKey:(NSString *)key;

/// 取数据
- (id)promptViewGetInfoWithKey:(NSString *)key defaultValue:(NSString *)defaultValue;

@end

@interface TapLabel : UILabel

/// label的indexPath
@property (nonatomic, copy) NSString *tapLabelIndexPath;

@end
