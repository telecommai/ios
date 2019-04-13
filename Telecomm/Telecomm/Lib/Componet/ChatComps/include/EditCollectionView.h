//
//  EditCollectionView.h
//  ESPChatComps
//
//  Created by YRH on 2017/12/14.
//  Copyright © 2017年 Pansoft. All rights reserved.
//

// 可以编辑的 collection

#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    // 默认样式
    CustomCollectionStyleNormal,
    // 移动加删除
    CustomCollectionStyleEditMoveAndDelete,
} CustomCollectionStyle;

@protocol EditCollectionViewDelegate <NSObject>

@required

/**
 可以移动的cell

 @param collectionView collectionView description
 @param indexPath indexPath description
 @return return value description
 */
- (BOOL)editCollectionView:(UICollectionView *)collectionView canMoveItemAtIndexPath:(NSIndexPath *)indexPath;

/**
 section数目

 @param collectionView collectionView description
 @return NSInteger
 */
- (NSInteger)editCollectionNumberOfSectionsInCollectionView:(UICollectionView *)collectionView;

/**
 每个section下面的item个数

 @param collectionView collectionView description
 @param section section description
 @return NSInteger
 */
- (NSInteger)editCollectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section;

/**
 返回每个cell

 @param collectionView collectionView description
 @param indexPath indexPath description
 @return UICollectionViewCell
 */
- (UICollectionViewCell *)editCollectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath;

/**
 点击item

 @param collectionView collectionView description
 @param indexPath indexPath description
 */
- (void)editCollectionView:(UICollectionView *)collectionView didSelectItemAtIndexPath:(NSIndexPath *)indexPath;

@optional
/**
 返回增补视图

 @param collectionView collectionView description
 @param kind kind description
 @param indexPath indexPath description
 @return UICollectionReusableView
 */
- (UICollectionReusableView *)editCollectionView:(UICollectionView *)collectionView viewForSupplementaryElementOfKind:(NSString *)kind atIndexPath:(NSIndexPath *)indexPath;

/**
 将要渲染cell

 @param collectionView collectionView description
 @param cell cell description
 @param indexPath indexPath description
 */
- (void)editCollectionView:(UICollectionView *)collectionView willDisplayCell:(UICollectionViewCell *)cell forItemAtIndexPath:(NSIndexPath *)indexPath;

/**
 将要渲染增补视图

 @param collectionView collectionView description
 @param view view description
 @param elementKind elementKind description
 @param indexPath indexPath description
 */
- (void)editCollectionView:(UICollectionView *)collectionView willDisplaySupplementaryView:(UICollectionReusableView *)view forElementKind:(NSString *)elementKind atIndexPath:(NSIndexPath *)indexPath;

@end

@interface EditCollectionView : UIView

@property (nonatomic, weak) id<EditCollectionViewDelegate> editCollectionViewDelegate;

@property (nonatomic, readonly, assign) CustomCollectionStyle customCollectionStyleState;

- (instancetype)initWithFrame:(CGRect)frame collectionViewLayout:(UICollectionViewLayout *)layout dataSource:(NSMutableArray *)dataSource;

#pragma mark - 注册cell
/**
 注册cell

 @param cell cell
 @param identifier 标识符
 */
- (void)collectionRegisterClass:(Class)cell forCellWithReuseIdentifier:(NSString *)identifier;

#pragma mark - 注册增补视图
/**
 注册增补视图

 @param cell 增补视图
 @param kind 类型 UICollectionElementKindSectionFooter| UICollectionElementKindSectionHeader
 @param identifier 标识符
 */
- (void)collectionRegisterClass:(Class)cell forSupplementaryViewOfKind:(NSString *)kind withReuseIdentifier:(NSString *)identifier;

#pragma mark - 刷新数据
/**
 刷新collectionView
 */
- (void)collectionReloadDatas;

#pragma mark - 删除item
/**
 删除item

 @param indexPaths indexPaths description
 */
- (void)deleteItemWithIndexPaths:(NSArray<NSIndexPath *> *)indexPaths;

#pragma mark - 设置collectionview的模式
/// 设置collectionview的模式
- (void)editCollectionStyle:(CustomCollectionStyle)collectionStyle;

#pragma mark - 获得此刻的数据源
/// 获得此刻的数据源
- (NSMutableArray *)getEditCollectionViewDataSources;

#pragma mark - 更改数据源
/// 更改数据源
- (void)updateDataSource:(NSMutableArray *)dataSource;

@property (nonatomic, strong) UICollectionView *collectionView;

/// 用于确定移动的时候最后一个数据源的index
@property (nonatomic, assign) BOOL dataSourceNeedMinusOne;

@end
