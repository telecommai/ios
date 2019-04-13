//
//  DataSetEvent.h
//  IOSESPBase
//
//  Created by JavorFeng on 14-2-20.
//  Copyright (c) 2014年 JavorFeng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EFRowSet.h"

#define DATASET_DEFAULT @"default"
#define DATASET_CURSOR  @"cursor"
#define DATASET_INSERT  @"insert"
#define DATASET_UPDATE  @"update"
#define DATASET_DELETE  @"delete"
#define DATASET_EVENT   @"dataSetEvent"
#define DATASET_CHANGED @"dataSetChanged"

@interface DataSetEvent : NSObject
@property(nonatomic, copy  ) NSString *eventType;
@property(nonatomic, retain) EFRowSet *eventRowSet;
@property(nonatomic ,retain) EFDataSet *eventDataSet;

@end
