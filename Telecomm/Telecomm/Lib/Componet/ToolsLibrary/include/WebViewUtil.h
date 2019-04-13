//
//  WebViewUtil.h
//  ToolsLibrary
//
//  Created by 谢虎 on 2018/11/28.
//  Copyright © 2018 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "StubObject.h"
NS_ASSUME_NONNULL_BEGIN

@interface WebViewUtil : NSObject
//通过StubObject获取URL
+(NSString *)urlFromStubObject:(StubObject *)stubObject;
//通过URL，param，value返回最终URL
+(NSString *)urlWithOriginalUrl:(NSString *)url param:(NSString *)param value:(NSString *)value;
//根据param，value返回json
+(NSString *)jsonWithParam:(NSString *)param value:(NSString *)value;
@end

NS_ASSUME_NONNULL_END
