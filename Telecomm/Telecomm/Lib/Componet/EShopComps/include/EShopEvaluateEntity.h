//
//  EShopEvaluateEntity.h
//  EShopComps
//
//  Created by 王胜利 on 2018/2/7.
//  Copyright © 2018年 谢虎. All rights reserved.
//  商品评价相关实体模型

#import <Foundation/Foundation.h>

@class EShopEvaluateImageEntity;
@class EShopEvaluateEntity;

#pragma mark - 商品评价实体
@interface EShopEvaluateResultEntity : NSObject

@property (nonatomic, assign) NSInteger commentCount;
@property (nonatomic, copy) NSString * commentPercent;
@property (nonatomic, strong) NSArray <EShopEvaluateEntity *>* comments;
@property (nonatomic, copy) NSString * result;

@end

#pragma mark - 商品评价实体
@interface EShopEvaluateEntity : NSObject

/// 评论Id
@property (nonatomic, assign) NSInteger commentId;
/// 评论商品编号
@property (nonatomic, copy) NSString * goodBh;
/// 用户Id
@property (nonatomic, copy) NSString * userId;
/// 用户名
@property (nonatomic, copy) NSString * userName;
/// 用户头像
@property (nonatomic, copy) NSString * userAvatar;
/// 评论内容
@property (nonatomic, copy) NSString * content;
/// 评论图片
@property (nonatomic, strong) NSMutableArray <EShopEvaluateImageEntity *>* commentPics;
/// 评论时间
@property (nonatomic, assign) NSInteger time;
/// 评分
@property (nonatomic, assign) NSInteger grade;
/// 评论商品缩略图
@property (nonatomic, copy) NSString *goodcover;

@property (nonatomic, assign) BOOL isZan;
@property (nonatomic, assign) NSUInteger zanNum;

/// 本地发表评价
@property (nonatomic, strong) NSMutableArray *sendCommentPics;


@end

#pragma mark - 商品评价图片实体
@interface EShopEvaluateImageEntity : NSObject

/// 评价Id
@property (nonatomic, assign) NSInteger commentId;
/// 评价图片
@property (nonatomic, copy) NSString * commentPicUrl;
/// 图片id
@property (nonatomic, assign) NSInteger idField;

@end

