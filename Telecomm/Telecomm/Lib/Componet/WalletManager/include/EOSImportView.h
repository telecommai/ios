//
//  EOSImportView.h
//  WalletManager
//
//  Created by 王胜利 on 2018/7/28.
//  Copyright © 2018年 pansoft. All rights reserved.
//  导入EOS钱包
//

#import <UIKit/UIKit.h>

@interface EOSImportView : UIView

@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, strong) UITextView *ownerPrivateKeyTextView;
@property (nonatomic, strong) UITextView *activePrivateKeyTextView;
@property (nonatomic, strong) UIButton *nextButton;

@end
