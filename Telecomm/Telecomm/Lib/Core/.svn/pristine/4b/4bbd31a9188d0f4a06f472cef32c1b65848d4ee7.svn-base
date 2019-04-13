//
//  DataComponent.h
//  IOSFormBuider
//
//  Created by JavorFeng on 13-12-13.
//  Copyright (c) 2013年 JavorFeng. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "EFDataSet.h"
#import "IComponent.h"
#import "DataSetComponent.h"

//#import "DataContainer.h"

@interface DataComponent : NSObject<IComponent,DataSetComponent>

@property(nonatomic, copy  ) NSString *label;
@property(nonatomic, copy  ) NSString *dataSetID;
@property(nonatomic, copy  ) NSString *nextDataSetID;
@property(nonatomic, retain) EFDataSet *dataSet;
@property(nonatomic, retain) DataComponent *parent;
@property(nonatomic, retain) NSMutableArray *children;

-(void)insertChild:(DataComponent *)dc atIndex:(int)index;
-(void)insertChild:(DataComponent *)dc;
-(void)removeChild:(DataComponent *)dc;
-(void)removeAllChild;

@end
