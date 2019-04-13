//
//  NewsBaseTableViewCell.h
//  ESPChatComps
//
//  Created by 吴鹏 on 17/9/30.
//  Copyright © 2017年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol NewsBaseCellDelegate <NSObject>

- (void)cellDidDelete:(NSDictionary *)subViewInfo;

@end

@interface NewsBaseTableViewCell : UITableViewCell

@property(nonatomic, weak)id<NewsBaseCellDelegate> delegate;

- (void)setNewsDictionary:(NSDictionary *)dic;

- (void)changeBaseSubViewFrame;

@end
