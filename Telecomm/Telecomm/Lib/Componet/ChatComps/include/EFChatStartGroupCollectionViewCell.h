//
//  EFChatStartGroupCollectionViewCell.h
//  ESPChatComps
//
//  Created by 于仁汇 on 16/8/10.
//  Copyright © 2016年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PersonModel.h"

/// 选中联系人之后，用于在UICollectionView显示的Item
@interface EFChatStartGroupCollectionViewCell : UICollectionViewCell

@property (nonatomic,strong) PersonModel *model;

@end
