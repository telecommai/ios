//
//  JFChatSearchResultListController.h
//  ChatComps
//
//  Created by 董艳武 on 2018/11/5.
//  Copyright © 2018 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum {
    JFChatSearchTypeFriend, /// 只搜索好友
    JFChatSearchTypeGroup,  /// 只搜索群组
    JFChatSearchTypeAll     /// 好友和群组都搜索
} JFChatSearchType;

@interface JFChatSearchResultListController : UIViewController

-(instancetype)initWithSearchType:(JFChatSearchType)type;

@property(nonatomic,assign) BOOL isShareImage;

@property (nonatomic, copy) void(^groupSelectBlock)(NSString *groupId);

@end

NS_ASSUME_NONNULL_END
