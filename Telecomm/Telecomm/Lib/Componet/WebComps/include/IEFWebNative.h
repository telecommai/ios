//
//  IEFWebNative.h
//  WebSystem
//
//  Created by Javor on 17/1/11.
//  Copyright © 2017年 Pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WKWebViewJavascriptBridge.h"

@protocol IEFWebNative <NSObject>

- (void)webNativeHandler:(id)data responseCallback:(EFJBResponseCallback)responseCallback;

@end
 
