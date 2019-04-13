//
//  PhotoGettingManager.h
//  ESPChatComps
//
//  Created by 虎 谢 on 2018/3/26.
//  Copyright © 2018年 Pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Photos/Photos.h>
#import "TZImageManager.h"
#import "TZAssetModel.h"

typedef void(^cameraResource)(NSMutableArray *array);
typedef void(^photoPicklock)(UIImage *image, NSData *imageData, BOOL isGif);
typedef void(^VideoInfoCallBack)(AVAsset *avasset, NSDictionary *videoInfo);

@interface PhotoGettingManager : NSObject

+(void)photoWithAsset:(PHAsset *)asset  width:(CGFloat)width photoPickBlock:(photoPicklock)ppBlock;

+(void)imageWithAsset:(PHAsset *)asset photoPickBlock:(photoPicklock)ppBlock;

+(void)getCameraRollAlbum:(BOOL)allowPickingVideo allowPickingImage:(BOOL)allowPickingImage completion:(void (^)(NSMutableArray *))completion;

+(void)videoWithAsset:(PHAsset *)asset videoInfoBacllBack:(VideoInfoCallBack)videoInfoBacllBack;

@end
