//
//  TCFinishAuthorizedSignatureView.h
//  OpenPlanet
//
//  Created by 高建飞 on 2018/6/19.
//  Copyright © 2018年 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Constant.h"

@interface TCFinishAuthorizedSignatureView : UIView

/// 扫描
@property (nonatomic, strong) UIButton *qrCodeButton;
/// 提示
@property (nonatomic, strong) UILabel *tipLabel;
/// 下一步
@property (nonatomic, strong) UIButton *nextButton;
/// 密钥
@property (nonatomic, strong) UITextView *textView;
@property (nonatomic, copy) VoidBlock scanActionBlock;
@property (nonatomic, copy) VoidBlock nextActionBlock;
/// 数据
@property (nonatomic, strong) NSDictionary *data;

- (void)textViewDataWithDictionary:(NSDictionary *)data;

@end
