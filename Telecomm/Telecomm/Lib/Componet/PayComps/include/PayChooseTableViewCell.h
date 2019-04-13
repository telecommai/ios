//
//  PayChooseTableViewCell.h
//  PayComps
//
//  Created by YRH on 2017/12/5.
//  Copyright © 2017年 YRH. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PayChooseTableViewCell : UITableViewCell

/**
 数据源，@{@"title" : @"文字", @"iconImage" : @"图片（UIImage）", @"isSelect" : @"1", @"selectImg" : @"选中时候的图片（UIImage）", @"unSelectImg" : @"未选中时候的图片（UIImage）"}; 1选中状态，0未选中状态
 */
@property (nonatomic, strong) NSDictionary *cellInfoDic;

@end
