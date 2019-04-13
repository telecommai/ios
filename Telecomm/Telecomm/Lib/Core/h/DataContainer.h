//
//  DataContainer.h
//  IOSFormBuider
//
//  Created by JavorFeng on 13-12-13.
//  Copyright (c) 2013年 wang zhanFeng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "StubObject.h"
#import "DataComponent.h"

@interface DataContainer : DataComponent

@property(nonatomic,retain) StubObject *nodeContext;

-(void)setValueToStub:(id)value forKey:(NSString *)key;
-(id)getValueForKey:(NSString *)key defValue:(id) defValue;

@end
