//
//  ZoneImageCollectionView.h
//  ESPChatComps
//
//  Created by 高建飞 on 2017/12/12.
//  Copyright © 2017年 Pansoft. All rights reserved.
//  发表引力波界面
//

#import <UIKit/UIKit.h>
#import "Zone.h"

@interface ZoneImageCollectionView : UIView

@property (nonatomic, strong) NSMutableArray *dataArray;
@property (nonatomic, copy) VoidBlock selectFinish; // 选择完成
@property (nonatomic, copy) ArrayBlock uploadSuccessBlock; // 上传云盘完成回调
@property (nonatomic, copy) VoidBlock uploadFailBlock; // 上传云盘失败回调
@property (nonatomic, copy) VoidBlock deleteImageBlock; // 删除图片


/// 图片上传云盘
- (void)uploadImageToSever;
/// 进入相册选择图片
- (void)insertImageAction;
/// 清除数据
- (void) clearData;


@end
