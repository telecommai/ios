//
//  MenuRootUtil.h
//  ESPChatComps
//
//  Created by 虎 谢 on 2017/6/5.
//  Copyright © 2017年 Pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "StubObject.h"
@interface MenuRootUtil : NSObject

@property (nonatomic,strong) NSMutableDictionary *finalDic;

@property (nonatomic,strong) NSMutableDictionary *keyArray;
//返回 key:count 字典
-(NSMutableDictionary *)appArrayWithMenuRoot;

-(NSMutableDictionary *)appkeysArrayWithMenuRoot;


@end
