//
//  FormViewContainer.h
//  IOSFormBuider
//
//  Created by wangzhanfeng on 13-12-20.
//  Copyright (c) 2013年 wang zhanFeng. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "FormContainer.h"

#import "OSPBaseView.h"
#import "IComponent.h"

@interface FormViewContainer : OSPBaseView<FormContainer,IComponent>{
    NSString *prototype;
    NSMutableDictionary *scriptContext;
}

@property(nonatomic, retain,getter = getScriptContext,setter = setScriptContext:) NSMutableDictionary *scriptObject;


@property (nonatomic, retain) NSMutableDictionary *childrenComps;
@property (nonatomic, retain) UIView *childView;
@property (nonatomic, retain, setter = setViewFrame:) NSValue *viewFrame;

@end
