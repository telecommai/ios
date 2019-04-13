//
//  JFSecretImageSendManager.h
//  ESPChatComps
//
//  Created by farby on 2018/5/7.
//  Copyright © 2018年 Pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PansoftUpDwonload.h"
#import "JFMessageManager.h"
#import "IMStructMessage.h"
#import "EnvironmentVariable.h"
#import "Constant.h"
#import "AESUtil.h"
@interface JFSecretImageSendManager : NSObject

//上传下载管理类
@property(nonatomic,strong) PansoftUpDwonload       *psUpDownload;
@property(nonatomic,strong) JFMessageManager        *messageManager;
@property(nonatomic,assign) BOOL                    isOrin;
@property(nonatomic,strong) NSString               *isRawPic;//json是否原图字段
//发送图片方法(包含发送跟上传) password原密码 secretPassword加密密码
- (void)sendImageWithImage:(UIImage *)image isOrin:(BOOL)isOrin passWord:(NSString *)passWord secretPassword:(NSString *)secretPassword;


// 消息重发
//- (void)secretImageResendMessage:(IMStructMessage *)oldMessage;
@end
