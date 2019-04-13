//
//  EFShowSmailVideoViewController.h
//  ESPChatComps
//
//  Created by 于仁汇 on 16/12/22.
//  Copyright © 2016年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EFShowSmailVideoViewController : UIViewController

/// json里面有两个路径 都传进来
/// 网络的
@property (nonatomic, copy) NSString *urlPath;
/// 本地的
@property (nonatomic, copy) NSString *localPath;

@end
