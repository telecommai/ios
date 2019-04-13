//
//  JsonUtil.h
//  ESPChatComps
//
//  Created by 虎 谢 on 2018/4/8.
//  Copyright © 2018年 Pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JsonUtil : NSObject

///根据路径读取json
+(id)jsonWithPath:(NSString *)jsonPath;

@end
