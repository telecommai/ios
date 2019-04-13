//
//  JFHorizSlidingFormCell.h
//  WalletManager
//
//  Created by YRH on 2018/12/11.
//  Copyright © 2018 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFHorizSlidingFormRowView.h"

@protocol JFHorizSlidingFormCellDelegate <JFHorizSlidingFormRowViewDelegate>

@end

@interface JFHorizSlidingFormCell : UITableViewCell

@property (nonatomic, strong) UICollectionView *collectionView;

@property (nonatomic, weak) id<JFHorizSlidingFormCellDelegate> delegate;

@property (nonatomic, strong) NSArray <NSString *> *itemArray;

@property (nonatomic, strong) UIColor *textColor;

@property (nonatomic, strong) UIFont *font;

@property (nonatomic, strong) UIColor *rowBackgroundColor;

@end

