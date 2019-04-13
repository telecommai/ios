//
//  ZoneUploadUtil.h
//  Zone
//
//  Created by 王胜利 on 2018/5/15.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Zone.h"


@interface ZoneUploadUtil : NSObject

+ (void)uploadImages:(NSArray <UIImage *>*)images complete:(void(^)(NSArray <NSString *>*successImageUrls, NSArray <UIImage *>*failImages))complete;

+ (void)uploadImagesWithFiles:(NSArray<UIImage *> *)imageFiles complete:(void (^)(NSArray<NSString *> *, NSArray<UIImage *> *))complete;

+ (void)uploadImageWithData:(NSData *)data imageName:(NSString *)imageName progress:(void(^)(NSProgress *progress))progressBlock success:(void(^)(NSDictionary *result))successBlock fail:(void(^)(NSString *error))failBlock;

+ (void)uploadImagesWithUrls:(NSArray <NSString *>*)imageUrls complete:(void(^)(NSArray <NSString *>*successImageUrls, NSArray <UIImage *>*failImages))complete;

@end
