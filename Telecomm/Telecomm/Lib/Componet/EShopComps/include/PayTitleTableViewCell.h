//
//  PayTitleTableViewCell.h
//  ESPChatComps
//
//  Created by YRH on 2017/12/8.
//  Copyright © 2017年 Pansoft. All rights reserved.
//

// title + 金额

#import <UIKit/UIKit.h>

@interface PayTitleTableViewCell : UITableViewCell

- (void)setCellTitle:(NSString *)title price:(CGFloat)price;

@property (nonatomic, strong) NSMutableDictionary *cellInfoDic;

@end
