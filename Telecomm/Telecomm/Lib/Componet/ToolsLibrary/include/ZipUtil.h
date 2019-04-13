//
//  EFZipImageSizeUtil.h
//  Zone
//
//  Created by 高建飞 on 2018/5/14.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/// 视频压缩质量
typedef NS_ENUM(NSUInteger, ZipVideoQuality) {
    ZipVideoQualityLow,
    ZipVideoQualityMiddle,
    ZipVideoQualityHigh,
};

@interface ZipUtil : NSObject

/// 图片压缩{data, width, height}
+ (NSDictionary *)zipNSDataWithImage:(UIImage *)sourceImage;

/// 视频压缩
+ (void)zipVideoWithUrl:(NSURL *)url zipQuality:(ZipVideoQuality)zipQuality outVideoName:(NSString *)outVideoName complete:(void(^)(BOOL isSuccess,NSURL *resultUrl))complete;

@end
