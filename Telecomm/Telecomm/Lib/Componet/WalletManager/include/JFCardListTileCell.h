//
//  JFCardListTileCell.h
//  WalletManager
//
//  Created by 董艳武 on 2018/9/12.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^SelectCardCallBack)(void);
@interface JFCardListTileCell : UICollectionViewCell

@property(nonatomic,copy)SelectCardCallBack cb;

@property(nonatomic,assign,getter=isChoosen) BOOL choosen;

@end
