//
//  DropCell.h
//  WalletManager
//
//  Created by StarLord on 2018/7/26.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol DropCellDelegate <NSObject>

- (void)touchButtonAction:(UIButton *)sender tableViewCell:(UITableViewCell *)cell;

@end

@interface DropCell : UITableViewCell

@property (nonatomic, weak) id<DropCellDelegate> delegate;

@property (nonatomic, strong) NSMutableDictionary *cellDic;

@end
