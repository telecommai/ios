//
//  EFAlertView.h
//  EFHintComponent.h EFHintComponent
//
//  Created by YRH on 2018/4/26.
//  Copyright © 2018年 SunJim. All rights reserved.
//

/*
 自定义弹出框
 1.根据文字显示内容。
 2.可展示自定义内容视图。
 3.可添加、删除按钮（目前横向叠加）
 */

#import <UIKit/UIKit.h>

/// 弹窗样式
typedef NS_ENUM(NSUInteger, YHAlertViewStyle) {
    /// 默认样式，中间是文字
    YHAlertViewStyleNormal,
    /// 自定义中间图层
    YHAlertViewStyleCustom
};

@protocol EFAlertViewDelegate <NSObject>

/**
 点击按钮事件
 
 @param button 按钮
 @param buttonTitle 点击按钮标题
 @param index 点击按钮下标
 */
- (void)alertViewButtonTouchAction:(UIButton *)button buttonTitle:(NSString *)buttonTitle index:(NSInteger)index;

/**
 点击“x”按钮代理
 
 @param cancelButton “x”按钮
 */
- (void)alertCancelAction:(UIButton *)cancelButton;


///////////////////////////新加的///////////////////////////
/**
 点击中间视图的代理
 
 @param centerView 中间的视图
 */
- (void)alertCenterClickActionView:(UIView *)centerView;


/**
 点击中间视图的图片


 @param centerImage 中间的图片
 */
- (void)alertCenterClickActionImage:(UIImage *)centerImage;


/**
 点击图片的item

 @param index 图片的索引
 */
- (void)alertDidClickItem:(NSInteger)index;

@end

@interface EFAlertView : UIView

/// 遮罩颜色
@property (nonatomic, strong) UIColor *maskColor;
/// alertView的背景图
@property (nonatomic, strong) UIImage *backgroundImage;
/// 边框颜色
@property (nonatomic, strong) UIColor *alertBorderColor;
/// 标题颜色
@property (nonatomic, strong) UIColor *titleColor;
/// 标题文字
@property (nonatomic, copy) NSString *alertViewTitle;
/// 内容颜色
@property (nonatomic, strong) UIColor *contentColor;
/// 内容文字font
@property (nonatomic, strong) UIFont *contentTextFont;
/// 按钮颜色
@property (nonatomic, strong) UIColor *buttonColor;
/// 内容文字(只在 YHAlertViewStyleNormal 下有用)
@property (nonatomic, copy) NSString *messageString;
/// 自定义内容视图(只在 YHAlertViewStyleCustom 下有用)
@property (nonatomic, strong) UIView *customContentView;

@property (nonatomic, weak) id<EFAlertViewDelegate> delegate;

/// 中间是文字样式的初始化
- (instancetype)initAlertViewWithTitle:(NSString *)title message:(NSString *)message buttonTitleArray:(NSMutableArray *)buttonTitleArray showDismissButton:(BOOL)isShow;

/**
 初始化方法
 
 @param title 标题
 @param message 内容
 @param buttonTitleArray 按钮标题数组
 @param isShow 是否显示“x”按钮
 @param alertViewStyle alertView样式
 @param customContentView 自定义视图
 @return alertVeiw
 */
- (instancetype)initAlertViewWithTitle:(NSString *)title message:(NSString *)message buttonTitleArray:(NSMutableArray *)buttonTitleArray showDismissButton:(BOOL)isShow alertViewStyle:(YHAlertViewStyle)alertViewStyle customContentView:(UIView *)customContentView;


/// 显示
- (void)showAlert;
/// 隐藏
- (void)hiddenAlert;

/// 显示 “x” 按钮
- (void)showDismissButton;
/// 隐藏 “x” 按钮
- (void)hiddenDismissButton;

/**
 删除底部按钮
 */
- (void)removeAllBottomButton;

/**
 创建底部按钮
 
 @param buttonTitleArray 按钮名字数组
 */
- (void)createButtonWithButtonTitleArray:(NSMutableArray *)buttonTitleArray;

/**
 更新内容
 
 @param message 新内容
 */
- (void)updateContentMessageWithMessage:(NSString *)message;

/**
 更新标题
 
 @param title 新标题
 */
- (void)updateTitle:(NSString *)title;

//////////////////////////////////////新加的//////////////////////////////////////
/**
 初始化（一组图片）
 
 @param title 标题
 @param images 图片数组
 @param frame frame
 @return alertView
 */
-(instancetype)initWithTitle:(NSString *)title imagesArray:(NSArray<UIImage *> *)images frame:(CGRect)frame;

/**
 初始化（一组图片）中间位置
 
 @param title 标题
 @param images 图片数组
 @return alertView
 */
-(instancetype)initWithTitle:(NSString *)title imagesArray:(NSArray<UIImage *> *)images;


/**
 初始化（一张图片）
 
 @param title 标题
 @param image 图片
 @param frame frame
 @return alertView
 */
-(instancetype)initWithTitle:(NSString *)title image:(UIImage *)image frame:(CGRect)frame;


/**
 初始化（一张图片）中间位置
 
 @param title 标题
 @param image image 图片
 @return alertView
 */
-(instancetype)initWithTitle:(NSString *)title image:(UIImage *)image;


/**
 初始化（控件）
 @param title 标题
 @param view 控件
 @return alertView
 */
-(instancetype)initWithTitle:(NSString *)title view:(UIView *)view;

/**
 初始化（控件）
 @param title 标题
 @param urlString url地址
 @return alertView
 */
-(instancetype)initWithTitle:(NSString *)title urlString:(NSString *)urlString;

@property (nonatomic, assign) BOOL isShowTitle;

@property (nonatomic, strong) UIView *centerView;

@property (nonatomic, strong) UIImage *centerImage;

@property (nonatomic, strong) NSArray <UIImage *>* images;

-(void)showClearAlert;

@end
