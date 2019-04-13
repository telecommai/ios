//
//  EFSelectTableMenuCell.h
//  change
//
//  Created by 苏友龙 on 16/11/18.
//  Copyright © 2016年 Pulian. All rights reserved.
//

#import <UIKit/UIKit.h>

@class EFSelectTableMenuCell;

@protocol EFSelectTableMenuDelegate <NSObject>

- (void)clickAddOrRemoveButton:(EFSelectTableMenuCell *)cell;

@end

@interface EFSelectTableMenuCell : UITableViewCell

@property(nonatomic,strong)UILabel  *title;

@property(nonatomic,strong)UIButton *addOrRemove;

@property(nonatomic,strong)UIImageView *titleImage;

@property(nonatomic,assign)id<EFSelectTableMenuDelegate>delegate;

- (void)titleImagePath:(NSString *)str;

@end
