//
//  EFMessageListCell.h
//  ESPChatComps
//
//  Created by 虎 谢 on 16/8/3.
//  Copyright © 2016年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TagView.h"
#import "EFChatListModel.h"
#import "JWaveFormView.h"
#import "KYCuteView.h"

@class EFMessageListCell;
@protocol EFMessageListCellDelegate <NSObject>

- (void)didselectMessageListCell:(EFMessageListCell *)cell view:(UIView *)view index:(NSInteger)index;

- (void)didselectPlayOfMessageListCell:(EFMessageListCell *)cell;

- (void)dragCuteViewToClearUnReadCount:(EFMessageListCell *)cell;

@end

@interface EFMessageListCell : UITableViewCell

@property (nonatomic,strong)  UIImageView           *headImg;             // 头像
@property (nonatomic,strong)  KYCuteView            *cuteBadgeView;       // 未读消息条数
@property (nonatomic,strong)  UILabel               *nameLB;              // 名字
@property (nonatomic,strong)  UIImageView           *stateImageView;      // 消息发送中提示图标
@property (nonatomic,strong)  UILabel               *messageLB;           // 显示最新的一条信息
@property (nonatomic,strong)  UILabel               *dateLB;              // 时间
@property (nonatomic,strong)  UIImageView           *doNotDisturbImg;     // 勿扰图标
@property (nonatomic,assign)  BOOL                  isBother;             // 是否免打扰
@property (nonatomic,assign)  BOOL                  isTop;                // 是否置顶
@property (nonatomic,strong)  EFChatListModel       *dataModel;           // 数据源
@property (nonatomic,copy)    NSString              *headerShape;         // 头像形状
//@property (nonatomic, strong) JWaveFormView         *waveFormView;
@property (nonatomic, strong) UIView                *waveFormView;
@property (nonatomic, strong) UIView                *waveBackGroundView;
@property (nonatomic, strong) UIButton              *voice;
@property (nonatomic, strong) UIView                *waveformBackView;
@property (nonatomic, assign) BOOL   isPlay;
@property (nonatomic, strong) UIImageView *play;

- (void)loadMessageListCellWithModel:(EFChatListModel *)model audioQueueShow:(BOOL)show;

@property (nonatomic, weak) id <EFMessageListCellDelegate> delegate;
- (void)cellChangePlaying;
- (void)cellChangeEndPlay;
@end
