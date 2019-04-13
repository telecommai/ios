//
//  GridImageView.h
//  EShopComps
//
//  Created by 王胜利 on 2018/10/10.
//  Copyright © 2018 pansoft. All rights reserved.
//  九宫格图片组件
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface GridImageView : UIView

/// 初始化九宫格组件（通过layout控制item的大小间距）
+ (instancetype)viewWithItemSize:(CGSize)itemSize sectionEdge:(UIEdgeInsets)sectionEdge itemMiniSpace:(CGFloat)itemMiniSpace;

/// 赋值九宫格图片组件
- (void)viewWithImageUrls:(NSArray <NSString *>*)imageUrls;

@end


@interface GridImageCell : UICollectionViewCell

@property (nonatomic, strong) UIImageView *imageView;

@end

NS_ASSUME_NONNULL_END
