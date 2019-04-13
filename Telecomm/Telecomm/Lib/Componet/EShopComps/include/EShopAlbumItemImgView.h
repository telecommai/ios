//
//  EShopAlbumItemImgView.h
//  EShopComps
//
//  Created by 王胜利 on 2018/1/9.
//  Copyright © 2018年 谢虎. All rights reserved.
//  专辑图片组件图片封装组件支持小标签

#import <UIKit/UIKit.h>

@interface EShopAlbumItemImgView : UIView


/**
 Cell中的图片组件，支持设置左下、右中标签

 @param imgUrlStr 图片地址
 @param rightTip 右中标签文字
 @param bottomTip 左下标签文字
 */
- (void)viewImgUrlStr:(NSString *)imgUrlStr
             rightTip:(NSString *)rightTip
            bottomTip:(NSString *)bottomTip;


@end
