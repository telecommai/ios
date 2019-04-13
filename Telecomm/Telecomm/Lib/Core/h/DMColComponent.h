//
//  DMColComponent.h
//  IOSESPBase
//
//  Created by JavorFeng on 14-1-5.
//  Copyright (c) 2014年 JavorFeng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DataSetComponent.h"

@protocol DMColComponent <NSObject>

@property(nonatomic, retain, getter = getDataSetComponent, setter = setDataSetComponent:) id<DataSetComponent> dataSetComponent;
@property(nonatomic, copy) NSString *dataSetID;
@property(nonatomic, copy) NSString *dataSetColID;
@property(nonatomic, copy) NSString *dataSetNameColID;
@property(nonatomic, copy) NSString *internalDataSetID;
@property(nonatomic, copy) NSString *viewDataSetID;
@property(nonatomic, copy) NSString *viewDataSetColID;
@property(nonatomic, copy) NSString *valueDataSetID;
@property(nonatomic, copy) NSString *valueDataSetColID;
@property(nonatomic, copy) NSString *identifier;
@property(nonatomic, copy) NSString *columnType;
@property(nonatomic, copy) NSString *editorType;
@property(nonatomic, copy) NSString *dateFormat;
@property(nonatomic, copy) NSString *formulaOne;
@property(nonatomic, copy) NSString *editMask;
@property(nonatomic, copy) NSString *fkeyID;
@property(nonatomic, copy) NSString *rlglID;
@property(nonatomic, assign) BOOL isUserInternalDataSetID;
@property(nonatomic, retain) NSMutableDictionary *propertyMap;
@property(nonatomic, assign) int numberPrecision;

-(id)getPropertyWithKey:(NSString *)key andDefaultValue:(id)defVal;
-(void)setPropertyMap:(id)value forKey:(NSString *)key;


@end
