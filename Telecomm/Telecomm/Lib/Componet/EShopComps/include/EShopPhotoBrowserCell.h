//
//  EShopPhotoBrowserCell.h
//  EShopComps
//
//  Created by 王胜利 on 2018/3/5.
//  Copyright © 2018年 谢虎. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EShopPhotoBrowserCell : UICollectionViewCell

@property (nonatomic, strong) NSString *photoUrl;

@property (nonatomic, copy)VoidBlock singleTapBlock;

@end
