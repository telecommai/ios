//
//  JFChainConsultListHeaderView.h
//  WalletManager
//
//  Created by 董艳武 on 2018/12/11.
//  Copyright © 2018 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class JFChainConsultListHeaderView;
@protocol JFChainConsultListHeaderViewDelegate<NSObject>
/**
 左右切换

 @param headView headerView本身
 @param option 0 为显示未处理 1为显示已处理 默认显示未处理
 */
-(void)headerView:(JFChainConsultListHeaderView *)headView
           option:(NSInteger)option;

@end

@interface JFChainConsultListHeaderView : UIView

@property(nonatomic,weak) id<JFChainConsultListHeaderViewDelegate> delegate;

-(void)selectOption:(NSInteger)option;

@end

NS_ASSUME_NONNULL_END
