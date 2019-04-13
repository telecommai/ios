//
//  EFDataSet.h
//  ViewItems
//
//  Created by wangyanming on 13-12-4.
//  Copyright (c) 2013年 pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DataSetEvent.h"
@class EFRowSet;

//DataSet类型
/// line:34
#define _DATA_SET_MAP_   0x0000  // 数据映射，啥也不管
/// line:38
#define _DATA_SET_VIEW_  0x0001 // 数据视图，只监听事件，不管理事件
/// line:42
#define _DATA_SET_CONT_  0x0002 // 数据容器，啥也管


@interface EFDataSet : NSObject<NSCoding>

/// line:22
@property (nonatomic, retain, getter = getUserObject) NSMutableDictionary *userObject;
/// line:47
@property (nonatomic, assign) int dataSetType;
/// line:119
@property (nonatomic, assign) id master;
/// line:142
@property (nonatomic, retain, getter = getHierarchyDataSet) EFDataSet *hierarchyDataSet;
///表名或是对象名 line:157
@property (nonatomic, copy  ) NSString *tableName;
/// 上级表名 line:161
@property (nonatomic, copy  ) NSString *parentTableName;
/// 上级行 line:165
@property (nonatomic, retain) EFRowSet *parentRowSet;
/// 已删除行的记录<key:主键, value:EFRowSet> line:169
@property (nonatomic, retain) NSMutableDictionary *deleteRowsMap;
/// 主键数组 line:176
@property (nonatomic, retain, getter = getPrimeKey) NSMutableArray *primeKey;
/// line:195
//@property (nonatomic, retain, getter = getRowSetArray) NSMutableArray *rowSetArray;
/// 主键影射对象Map line:494
@property(nonatomic, retain) NSMutableDictionary *primeKeyRowSetMap;
/// 多主键的情况下，记录多个主键之间的关系 line:507
@property(nonatomic, retain) NSMutableDictionary *primeKeyKeyMap;
@property(nonatomic ) int currentRowIndex;
/// 子数据集映射表,格式：{数据集标志:EFDataSet} line:622
@property(nonatomic, retain) NSMutableDictionary *dataSetMap;
/// 2013-12-06 11:08:20 增加
@property (nonatomic, retain) NSMutableArray *rowSetList;
@property (nonatomic, retain) NSMutableDictionary *deletedRowsMap;
@property (nonatomic, assign) BOOL isExpanded;


#pragma mark- 内存释放方法
//-(void)destorySelf;
-(void)deallocSubModel;

#pragma mark- 逻辑功能方法

/**
 * 获取dataset实例
 * line:73
 * @param tableName String 数据集标志
 * @param dataSetType 数据集类型
 */
+ (EFDataSet *)getInstanceWithTableName:(NSString *)tableName dataSetType:(int)dataSetType;

/**
 * 获取类型为_DATA_SET_MAP_的实例
 * line:86
 * @param tableName String
 * @return EFDataSet
 */
+ (EFDataSet *)getInstance2WithTableName:(NSString *)tableName;

/**
 * 获取DataSet数据集实例
 * line:96
 * @param dataArrayCollection
 * @param tableName
 */
+ (EFDataSet *)getDataSetInstanceWithDataArrayCollection:(NSMutableArray *)dataArrayCollection tableName:(NSString *)tableName;

/// line:121
-(void)setMasterKey:(id)value;
/// line:125
-(id)getMasterKey;
/// line:173
- (EFDataSet *)parent;
/// line:231
-(NSMutableArray *)getDataProvider;
/// line:240
-(int)getRowCount;
/// line:249
- (void)appendRowSet:(EFRowSet *)rowSet;

/// line:257
///派发事件
- (void)insertRowset:(EFRowSet *)rowSet;
///不派发事件
- (void)insertRow:(EFRowSet *)rowSet;
///派发事件
- (void)insertRowset:(EFRowSet *)rowSet atIndex:(int)index;
///不派发事件
- (void)insertRow:(EFRowSet *)rowSet atIndex:(int)index;


/// line:278
- (void)reBuildPrimeKeyIndex;

/// line:292
-(void)buildPrimeKeyIndex:(EFRowSet *)rowSet;

/// line:302
-(void)buildPrimeKeyKeyIndex:(EFRowSet *)rowSet;

/// line:329
- (NSMutableDictionary *)getPrimeKeyKeyMap:(NSString *)primeKey;

/**
 * 删除行
 * line:342
 */
- (void)removeRowSet:(EFRowSet *)rowSet;

/**
 * 根据行索引删除行
 * line:352
 */
-(void)removeRowSetAt:(int)index;

/**
 * 清除所有的rowset
 * line:362
 */
- (void)removeAllRowSet;

/**
 * 根据索引查找指定行
 * line:374
 * @param index int 行的索引
 */
-(EFRowSet *)getRowSet:(int)index;

/**
 * 获取当前选择行的数据，行索引为currentRowIndex
 * line:386
 * @return EFRowSet 当前选择的行
 */
- (EFRowSet *)getRowSet0;

/**
 * 获取当前选择的行，行索引为currentRowIndex
 * line:397
 * @return EFRowSet 当前选择的行
 */
- (EFRowSet *)getCurrentRowSet;

/**
 * 当前数据集中被选择的行，放到数据集中
 * line: 406
 * @return 返回选中行的
 */
- (EFDataSet *)getSelectedDataSet;

/**
 * 根据主键获取rowset
 * line:427
 * @param keyValue String[]
 * @return RowSet
 */
- (EFRowSet *)getRowSetByKey:(NSString *)keyValue;

/**
 * 根据数值数组，组织主键获取rowset
 * line:438
 * @param keyValue String[]
 * @return RowSet
 */

-(EFRowSet *)getRowSetByArray:(NSMutableArray *)keyValue;

/**
 * 根据主键值（值用逗号,分隔的字符串）字符串获取rowset
 * line:448
 * @return
 */
-(EFRowSet *)getRowSetByString:(NSString *)keyValue;

/**
 * 获取行的索引值
 * line:458
 * @param rowSet 要获取索引的行
 */
- (int)getIndexByRowSet:(EFRowSet *)rowSet;

/**
 * 根据数值数组组织主键
 * line:470
 * @param keyValue String[]
 * @return String
 */
- (NSString *)getPrimeKeyValue:(NSMutableArray *)keyValue;

/**
 * line:485
 * @param rowSet RowSet
 * @return String
 */
- (NSString *)getPrimeKeyValueByRowSet:(EFRowSet *)rowSet;

///521------620

/**
 * 根据dataSet类型获取dataSet
 * line:638
 */
- (EFDataSet *)getDataSet:(NSString *)dsType;

/**
 * 设置DataSet
 * line:647
 */
- (void)setDataSet:(EFDataSet *)dataSet forDsType:(NSString *)dsType;

-(void)dispatchDataSetEvent:(DataSetEvent *)dataSetEvent;
-(void)dispatchDataSetChangedEvent;

///游标相关
-(void)activeDataSet;
-(int)first;
-(int)last;
-(int)goToRowAtIndex:(int)rowIndex andEnableCursorEvent:(bool)enableCursorEvent;


@end
