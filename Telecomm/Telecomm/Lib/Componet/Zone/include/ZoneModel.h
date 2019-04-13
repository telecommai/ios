//
//  ZoneModel.h
//  Zone
//
//  Created by 王胜利 on 2018/5/3.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class ZoneObjModel;
@class ZoneContentModel;
@class ZoneLikeModel;
@class ZoneCommentModel;
@class ZoneUserModel;
@class ZoneContentWebModel;
@class ZoneAboutMeModel;
@class ZoneGoodModel;

@interface ZoneModel : NSObject

/// 引力波内容
@property (nonatomic, strong) ZoneObjModel *obj;
/// 引力波类型（0:日志，5:相册，2:引力波）
@property (nonatomic, assign) NSInteger objType;
/// 点赞数组
@property (nonatomic, strong) NSArray <ZoneLikeModel *>*likes;
/// 评论数组
@property (nonatomic, strong) NSArray <ZoneCommentModel *>*comment;
/// 与我相关
@property (nonatomic, strong) ZoneAboutMeModel *aboutMe;
@end

@interface ZoneObjModel : NSObject

/// 引力波Id
@property (nonatomic, assign) NSInteger ID;
/// 浏览次数
@property (nonatomic, assign) NSInteger readCount;
/// 点赞人数
@property (nonatomic, assign) NSInteger likeCount;
/// 评论人数
@property (nonatomic, assign) NSInteger commentCount;
/// 设备名称
@property (nonatomic, copy) NSString *device;
/// 创建时间
@property (nonatomic, copy) NSString *postCreatetime;
/// 创建时间字符串(本地生成的)
@property (nonatomic, copy) NSString *postCreatetimeString;
/// 更新时间
@property (nonatomic, copy) NSString *postUpdatetime;
/// 引力波内容模型
@property (nonatomic, strong) ZoneContentModel *contentModel;
/// 是否点赞
@property (nonatomic, assign) BOOL isLike;
/// 奖励银钻数量
@property (nonatomic, assign) NSInteger coinCount;
/// 发布者用户
@property (nonatomic, strong) ZoneUserModel *postUser;


/// 是否转发（1：是 0：不是）
@property (nonatomic, assign) NSInteger transmitStatus;
/// 转发理由
@property (nonatomic, copy) NSString *transmitContent;
/// 转发原引力波Id
@property (nonatomic, copy) NSString *transmitSourceId;
/// 转发用户
@property (nonatomic, strong) ZoneUserModel *transmitUser;

@end


@interface ZoneContentModel :NSObject

/// 引力波内容类型(1：纯文本 2：文本+图片 3：文本+视频 4:文本+webView 5:文字+商品)
@property (nonatomic, assign) NSInteger type;
/// 引力波内容
@property (nonatomic, copy) NSString *text;
/// 引力波内容是否展开折叠
@property (nonatomic, assign) BOOL isTextOpen;
/// 引力波图片
@property (nonatomic, strong) NSArray *images;
/// 引力波视频
@property (nonatomic, copy) NSString *video;
/// 视频封面
@property (nonatomic, copy) UIImage *videoCover;
/// 引力波web
@property (nonatomic, strong) ZoneContentWebModel *web;
/// 商品
@property (nonatomic, strong) ZoneGoodModel *goods;

@property (nonatomic, copy) NSString *width;
@property (nonatomic, copy) NSString *height;



@end

@interface ZoneContentWebModel :NSObject

/// 网页高度
@property (nonatomic, strong) NSNumber *height;
/// 网页地址
@property (nonatomic, copy) NSString *url;

@property (nonatomic, strong) UIImage *webScreenshot;

// 网页html内容
@property (nonatomic, strong) NSString *webContent;

@end



@interface ZoneLikeModel : NSObject

/// 赞Id
@property (nonatomic, assign) NSInteger ID;
/// 点赞时间
@property (nonatomic, copy) NSString *createtime;
/// 点赞人
@property (nonatomic, strong) ZoneUserModel *user;
/// 对应的引力波Id
@property (nonatomic, assign) NSInteger objectId;
/// 对应的引力波类型
@property (nonatomic, assign) NSInteger objectType;

@end

@interface ZoneCommentModel : NSObject

/// 评论ID
@property (nonatomic, assign) NSInteger ID;
/// 评论内容
@property (nonatomic, copy) NSString *content;
/// 评论图片
@property (nonatomic, strong) NSArray <UIImage *>* images;
/// 评论时间
@property (nonatomic, copy) NSString *createtime;
/// 评论时间字符串
@property (nonatomic, copy) NSString *createtimeString;
/// 评论人
@property (nonatomic, strong) ZoneUserModel *commentUser;
/// 评论回复
@property (nonatomic, strong) NSArray <ZoneCommentModel *> *childComments;
/// 父评论Id
@property (nonatomic, assign) NSInteger  parentId;
/// 回复人
@property (nonatomic, strong) ZoneUserModel *replyUser;
/// 对应的引力波Id
@property (nonatomic, assign) NSInteger objectId;
/// 对应的引力波类型
@property (nonatomic, assign) NSInteger objectType;

@end

@interface ZoneAboutMeModel :NSObject

/// 用户ID
@property (nonatomic, assign) NSInteger userId;
/// 时间(与我相关)
@property (nonatomic, copy) NSString *creatime;
/// 1:点赞， 2:评论， 3.评论回复，4.转发
@property (nonatomic, assign) NSInteger aboutType;

@end

@interface ZoneUserModel :NSObject

/// 用户ID
@property (nonatomic, assign) NSInteger userId;
/// 用户昵称
@property (nonatomic, copy) NSString *nickName;
/// 用户头像
@property (nonatomic, copy) NSString *avatar;
/// 是否关注
@property (nonatomic, assign) BOOL isFollow;

@end

@interface ZoneGoodModel:NSObject

/// 商品类型
@property(nonatomic,copy) NSString *type;
/// 商品ID
@property(nonatomic,copy) NSString *goodId;
/// 分享到引力场的商品的图像
@property(nonatomic,copy) NSString *goodCover;
/// 分享到引力场的商品的标题
@property(nonatomic,copy) NSString *title;
/// 分享到引力场的商品的副标题
@property(nonatomic,copy) NSString *content;
/// 分享的商品的来源
@property(nonatomic,copy) NSString *from;
/// 分享的商品的价格
@property(nonatomic,copy) NSString *price;
/// 店铺的图标
@property(nonatomic,copy) NSString *shopIcon;

@end


