//
//  JFUploadImageViewController.h
//  ChatComps
//
//  Created by farby on 2018/9/3.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JFUploadImageViewController : UIViewController
@property (nonatomic,copy) NSString *serialNumber; //单据编号
@property (nonatomic,copy) NSString *type;         //单据类型
@property (nonatomic,copy) NSString *makerId;      //制单人id

@end
