//
//  XHProgressView.h
//  XHProgressView
//
//  Created by 虎 谢 on 2017/8/9.
//  Copyright © 2017年 ZJNY. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XHProgressView : UIView

@property (nonatomic, assign) CGFloat progress;

@property (nonatomic,assign) NSInteger  allDJ;

@property (nonatomic,assign) NSInteger  uploadedNum;

@property(nonatomic,assign) NSInteger   uploadSucNum;

@property(nonatomic,assign)NSInteger    uploadFailNum;

@end
