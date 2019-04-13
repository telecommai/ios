//
//  JFUserSelectCell.h
//  ChatComps
//
//  Created by 虎 谢 on 2019/3/1.
//  Copyright © 2019年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PersonModel.h"
//#import "JFFriendModel.h"
//#import "JFUserModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFUserSelectCell : UITableViewCell
///是否选中button
@property (nonatomic, strong) UIButton      *selButton;
///用户名称
@property (nonatomic, strong) UILabel       *nameLabel;
///用户头像
@property (nonatomic, strong) UIImageView   *headerImage;

@property (nonatomic, strong) PersonModel *model;
@end

NS_ASSUME_NONNULL_END
