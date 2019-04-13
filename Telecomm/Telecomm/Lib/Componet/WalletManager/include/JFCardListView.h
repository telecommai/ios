//
//  JFCardListView.h
//  WalletManager
//
//  Created by 董艳武 on 2018/9/12.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JFCardListView : UICollectionView

-(instancetype)initWithFrame:(CGRect)frame
                    itemSize:(CGSize)itemSize
                layoutMargin:(UIEdgeInsets)layoutMargin
                contentInset:(UIEdgeInsets)contentInset;

@end
