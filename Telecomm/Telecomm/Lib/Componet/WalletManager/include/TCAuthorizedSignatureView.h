//
//  TCAuthorizedSignatureView.h
//  OpenPlanet
//
//  Created by 高建飞 on 2018/6/19.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Constant.h"

@interface TCAuthorizedSignatureView : UIView

/// 二维码
@property (nonatomic, strong) UIImageView *qrCodeImageView;
/// 提示
@property (nonatomic, strong) UILabel *tipLabel;
/// 下一步
@property (nonatomic, strong) UIButton *nextButton;
@property (nonatomic, copy) VoidBlock nextActionBlock;
/// 数据
@property (nonatomic, strong) NSDictionary *data;

/// 数据赋值
- (void) viewDataWithDictionary:(NSDictionary *) dictionary;

@end
