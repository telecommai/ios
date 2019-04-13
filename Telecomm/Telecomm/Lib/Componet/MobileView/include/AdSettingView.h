//
//  SettingView.h
//  YTAutoLayout
//
//  Created by fly on 14/12/12.
//  Copyright (c) 2014年 fly. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AdSettingViewDelegate <NSObject>

@optional

-(void)doSave;

@end

@interface AdSettingView : UIView

@property(nonatomic ,weak) UITextField *textAddress;

@property(nonatomic ,weak) UITextField *textProt;

@property(nonatomic ,weak) UITextField *textPath;

@property(nonatomic ,weak) UITextField *textName;

@property(nonatomic ,weak) UITextField *textData;

@property(nonatomic ,weak) UITextField *textMark;

@property (nonatomic ,weak) UIScrollView *scrollView;

@property (nonatomic,weak) UISwitch *isAd;

@property (nonatomic, assign) id<AdSettingViewDelegate> delegate;

@end
