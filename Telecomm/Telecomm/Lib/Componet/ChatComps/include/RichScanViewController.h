//
//  RichScanViewController.h
//  ESPChatComps
//
//  Created by 苏友龙 on 16/9/10.
//  Copyright © 2016年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Constant.h"

typedef NS_ENUM(NSUInteger, JumpStype) {
    PushStyle,
    PresentStyle,
};

@interface RichScanViewController : UIViewController

/// 跳转方式
@property (nonatomic, assign) JumpStype jumpStype;
/// 扫描回调
@property (nonatomic, copy) DictionaryBlock scanInfoBlock;
- (void)dealWithUserInfor:(NSString *)userInfor;
@end
