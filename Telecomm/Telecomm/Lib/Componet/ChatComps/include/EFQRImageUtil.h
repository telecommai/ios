//
//  EFQRImageUtil.h
//  ESPChatComps
//
//  Created by 虎 谢 on 2018/4/27.
//  Copyright © 2018年 Pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface EFQRImageUtil : NSObject
+ (UIImage *)creatCIQRCodeImageWithMessage:(NSString *)message;
@end
