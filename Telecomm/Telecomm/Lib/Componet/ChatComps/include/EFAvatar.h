//
//  EFHeadImage.h
//  ESPChatComps
//
//  Created by 苏友龙 on 16/12/3.
//  Copyright © 2016年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
@class EFAvatar;

@protocol EFAvatarDelegate <NSObject>

- (void)onAvatarDidLoadImage:(EFAvatar *)avatar;

@end

@interface EFAvatar : UIImageView

- (void)setAvatarWithUserId:(NSString *)userid groupId:(NSString *)groupid avatarUrl:(NSString *)url;

@property(nonatomic, assign)id<EFAvatarDelegate> delegate;

@end
