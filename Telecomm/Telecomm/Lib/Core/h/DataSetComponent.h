//
//  DataSetComponent.h
//  IOSESPBase
//
//  Created by JavorFeng on 13-12-13.
//  Copyright (c) 2013年 JavorFeng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EFDataSet.h"
#import "DMComponent.h"
#import "EFRowSet.h"
//#import "JParamObject.h"

//@class DMComponent;

@protocol DataSetComponent <NSObject>

/** 与此组件(如formModel)关联的所有组件集合 */
-(NSMutableArray *)getDMCompList;
-(void)setDMCompList:(NSMutableArray *)list;

/** 获取 "(<DMComponent>)关联组件.dataSetID" 相关的dataSet*/
-(EFDataSet *)getDataSetForKey:(NSString *)key;
-(NSMutableArray *)getDataSetKey;
-(NSMutableArray *)getDOMetaDataForKey:(NSString *)obj_id;

/** 关联组件的增加/删除 */
-(void)insertDMComponent:(id<DMComponent>)dmComponent;
-(void)removeDMComponent:(id<DMComponent>)dmComponent;

/** 数据处理相关 */
-(id)load;
//-(id)loadByParam:(JParamObject *)param;
//-(id)save;
//-(id)saveByParam:(JParamObject *)param;
//-(id)first;
//-(id)firstByParam:(JParamObject *)param;
//-(id)prior;
//-(id)priorByParam:(JParamObject *)param;
//-(id)next;
//-(id)nextByParam:(JParamObject *)param;
//-(id)last;
//-(id)lastByParam:(JParamObject *)param;
//-(id)searchWithRowSet:(EFRowSet *)rowSet;
//-(id)create;

-(EFRowSet *)createItemWithItemContentID:(NSString *)itemContentID isAppend:(BOOL *)isAppend;
-(EFRowSet *)createItemWithItemContentID:(NSString *)itemContentID isAppend:(BOOL *)isAppend customDataSetID:(NSString *)customDataSetID;
-(BOOL)removeItemWithItemContentID:(NSString *)itemContentID;
-(BOOL)removeParyWithItemContentID:(NSString *)itemContentID;

/** 状态控制 */
-(BOOL)isModified;
-(BOOL)canEdit;
-(BOOL)startEdit;
-(BOOL)cancelEdit;
-(BOOL)stopEdit;
-(BOOL)isEditing;

@end
