//
//  PhotoViewController.h
//  点击图片放大效果
//
//  Created by Amydom on 17/1/9.
//  Copyright © 2017年 Amydom. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PhotoViewController : UIViewController

//保存图片的数组
@property (nonatomic, strong)NSMutableArray *photoArr;
//图片 tag
@property (nonatomic, assign)NSInteger imageTag;

@end
