//
//  JFGroupDetailHeaderModel.h
//  ChatComps
//
//  Created by 董艳武 on 2018/8/27.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JFGroupDetailHeaderModel : NSObject

/// 头像的URL
@property(nonatomic,copy)       NSString    *headerUrl;

/// 群ID
@property(nonatomic,copy)       NSString    *groupId;

/// 占位图
@property(nonatomic,strong)     UIImage     *palceHolderImage;

/// 头像
@property(nonatomic,strong)     UIImage     *iconImage;


@end
