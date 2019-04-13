//
//  EFNewsCommentAlertView.h
//  ESPChatComps
//
//  Created by 虎 谢 on 2017/11/27.
//  Copyright © 2017年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EFNewsWebviewController.h"
@protocol  EFNewsCommentAlertViewDelegate<NSObject>

-(void)commontAlertDidClose;

-(void)changeCommentWith:(NSDictionary *)commentDict addNewComment:(BOOL) isAddNewComment;

@end


@interface EFNewsCommentAlertView : UIView<EFNewsWebviewDelegate>

@property(nonatomic,strong) UIView              *titleView;
@property(nonatomic,strong) UITableView         *contentTableView;
@property(nonatomic,strong) UIView              *toolView;
@property(nonatomic,strong) NSDictionary        *headerData;
@property(nonatomic,strong) NSMutableArray      *commentDataList;
@property(nonatomic,copy)   NSString            *shareImageUrl;
@property (nonatomic,copy)  NSString            *newsContent;       //新闻正文(截取一部分用于分享展示)
@property (nonatomic,copy)  NSString            *newsUrl;           //新闻Url
@property (nonatomic,copy)  NSString            *newsTitle;         //新闻标题
@property (nonatomic,copy)  NSString            *newsId;            //新闻Id


@property(nonatomic, weak) id<EFNewsCommentAlertViewDelegate>delegate;

@end
