//
//  IComponent.h
//  IOSESPBase
//
//  Created by JavorFeng on 14-1-7.
//  Copyright (c) 2014年 JavorFeng. All rights reserved.
//

#import <Foundation/Foundation.h>


///所有可视，不可视组件都要实现这个接口 实现Flex CREATION_COMPLETE的机制
@protocol IComponent <NSObject>
@property (nonatomic, copy  , getter = getId, setter = setId:) NSString *uId;


/** 给组件属性赋值 */
-(void)setParamValue:(id)value forElementKey:(NSString *)eKey;

/** */
-(void)creationComplete;
@end
