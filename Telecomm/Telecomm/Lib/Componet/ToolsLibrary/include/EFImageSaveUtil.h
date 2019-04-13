//
//  EFImageSaveUtil.h
//  Zone
//
//  Created by 虎 谢 on 2018/5/9.
//  Copyright © 2018年 pansoft. All rights reserved.
//  保存图片到相册

#import <Foundation/Foundation.h>
#import <Photos/Photos.h>
#import <UIKit/UIKit.h>

typedef void(^saveSuccess)(NSString *success);
typedef void(^saveFail)(NSString *fail);

@interface EFImageSaveUtil : NSObject

+(void)saveImageWithImage:(UIImage *)image success:(saveSuccess)saveSuccess fail:(saveFail)saveFail;

@end
