//
//  EFNewsCommentCell.h
//  ESPChatComps
//
//  Created by 虎 谢 on 2017/11/22.
//  Copyright © 2017年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EFNewsReplyCommentView.h"
#import "NewsIntegralView.h"

@class EFNewsCommentCell;

@protocol EFNewsCommentCellDelegate <NSObject>

///头像点击事件代理
- (void)onSignViewAction:(EFNewsCommentCell *)cell;

@end

@interface EFNewsCommentCell : UITableViewCell

@property(nonatomic,weak)  id<EFNewsCommentCellDelegate>delegate;

@property(nonatomic,strong) UIImageView         *userAvatar;

@property(nonatomic,strong) UILabel             *userName;

@property(nonatomic,strong) UILabel             *contentLabel;

@property(nonatomic,strong) UIImageView         *signView;

@property(nonatomic,strong) UILabel             *signTimes;

@property(nonatomic,strong) UILabel             *timeLabel;

@property(nonatomic,strong) UILabel             *replyLabel;

@property(nonatomic,strong) NSDictionary        *dataDic;

@property(nonatomic,strong) UILabel             *dianLabel;

@property(nonatomic,strong) EFNewsReplyCommentView *replyComment;

@property(nonatomic,strong) NewsIntegralView                *integralView;

@property(nonatomic,assign) BOOL                             isAlert;

-(instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier;

-(void)changeIntegralWithDict:(NSDictionary *)dict;

@end
