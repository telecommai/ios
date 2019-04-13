//
//  SecondMenuView.h
//  LoveBB
//
//  Created by AngelLL on 15/10/22.
//  Copyright © 2015年 Daniel_Li. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol JHCustomMenuDelegate <NSObject>

- (void)jhCustomMenu:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath;

@end

typedef void(^Dismiss)(void);
@interface JHCustomMenu : UIView<UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, strong) UITableView *tableView;
@property (nonatomic, assign) id<JHCustomMenuDelegate> delegate;
@property (nonatomic, strong) NSArray *arrData;
@property (nonatomic, strong) NSArray *arrImgName;
@property (nonatomic, assign) NSInteger showSelectStatusIndex; // 是否显示选中状态的行数
@property (nonatomic, copy) Dismiss dismiss;
@property (nonatomic, assign) BOOL   isTrangleHidden;
- (instancetype)initWithDataArr:(NSArray *)dataArr menuOrigin:(CGPoint)origin menuWidth:(CGFloat)width menuRowHeight:(CGFloat)rowHeight thisViewOrigin:(CGPoint)viewOrigin thisViewWidth:(CGFloat)viewWidth thisViewHeight:(CGFloat)viewHeight;

- (void)dismissWithCompletion:(void (^)(JHCustomMenu *object))completion;

@end
