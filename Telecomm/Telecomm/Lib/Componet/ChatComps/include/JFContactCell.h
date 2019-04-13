//
//  JFContactCell.h
//  ChatComps
//
//  Created by 虎 谢 on 2019/3/22.
//  Copyright © 2019年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PersonModel.h"
#import "TagView.h"
#import "StubObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFContactCell : UITableViewCell

/// 数据模型
@property (nonatomic, strong) StubObject    *stubobject;

@property (nonatomic, strong) PersonModel   *model;

@end

NS_ASSUME_NONNULL_END
