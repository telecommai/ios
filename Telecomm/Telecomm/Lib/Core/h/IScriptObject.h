//
//  IScriptObject.h
//  IOSFormBuider
//
//  Created by JavorFeng on 14-1-6.
//  Copyright (c) 2014年 wang zhanFeng. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol IScriptObject <NSObject>

-(NSMutableDictionary *)getScriptObject;
-(void)setScriptObject:(NSMutableDictionary *)aScriptObject;

-(NSString *)getEventScriptForKey:(NSString *)aKey;
-(void)setEventScript:(NSString *)script forKey:(NSString *)aKey;

-(NSMutableDictionary *)getScriptContext;
-(void)setScriptContext:(NSMutableDictionary *)aContext;

@end
