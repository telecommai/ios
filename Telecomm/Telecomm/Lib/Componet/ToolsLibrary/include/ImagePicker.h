//
//  ImagePicker.h
//  ToolsLibrary
//
//  Created by 王胜利 on 2018/6/14.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Constant.h"

typedef void(^ImagePickerBlock)(BOOL isCancel, UIImage *image, NSDictionary *info);

@interface ImagePicker : UIImagePickerController

/// 选择图片(相册和相机)
+ (void)showImagePickerWithVc:(UIViewController *)vc
                 allowEditing:(BOOL)allowEditing
                     complete:(ImagePickerBlock)complete;

/// 选择图片(相机)
+ (void)showCameraWithVc:(UIViewController *)vc
                 allowEditing:(BOOL)allowEditing
                     complete:(ImagePickerBlock)complete;

/// 选择图片(相册)
+ (void)showPhotoLibraryWithVc:(UIViewController *)vc
                  allowEditing:(BOOL)allowEditing
                      complete:(ImagePickerBlock)complete;


@end
