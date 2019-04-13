//
//  EFRowSet.h
//  PanEFRowDataSet
//
//  Created by wangzhanfeng on 13-12-4.
//  Copyright (c) 2013年 wang zhanFeng. All rights reserved.
//

#import <Foundation/Foundation.h>
@class EFDataSet;

/// 正常状态
#define _DATA_STATUS_NORMAL_  0x0000
/// 更新状态
#define _DATA_STATUS_UPDATE_  0x0001
/// 插入状态
#define _DATA_STATUS_INSERT_  0x0002
/// 子数据集有修改
#define _DATA_STATUS_CHILD_   0x0004


#define _FORM_STATSU_VIEW_    0x0000
#define _FORM_EDIT_STATUS_    0x0000
#define _FORM_EDIT_CREATE_    0x0001
#define _FORM_EDIT_CHANGE_    0x0002
#define _FORM_EDIT_LOCK_      0x0004


@interface EFRowSet : NSObject<NSCoding>

/**
 * 编号转名称映射表，从后台传来的。
 * line:37
 */
@property (nonatomic, retain) NSMutableDictionary *backID2NameMap;

@property (nonatomic, retain) NSMutableDictionary *rowColFormulaMap;

/// line:66
@property (nonatomic, copy  ) NSString *rowFormula;
/// 前台的id2Name映射对象 line:81
@property (nonatomic, retain) NSMutableDictionary *frontID2NameMap;
/// line:99
@property (nonatomic, retain, getter = getChildren) NSMutableDictionary *children;
/// line:115
@property (nonatomic, assign) EFDataSet *ownerDataSet;
/// line:128
@property (nonatomic, retain,setter = setDataMap:) NSMutableDictionary *dataMap;
/// line:350
@property (nonatomic, retain) NSMutableArray *dataSetContList;
/// line:370
@property (nonatomic, retain) NSMutableDictionary *dataSetMap;
/// line:386
@property (nonatomic, assign,getter = getMasterKey,setter = setMasterKey:) id master;
/// line:400
@property (nonatomic, copy  ) NSString *customDataSetID;
/// line:413
@property (nonatomic, copy  ,setter = setMasterTableName:) NSString *masterTableName;
/// line:445
@property (nonatomic, assign) int dataStatus;
/// line:445
@property (nonatomic, retain) NSMutableDictionary *extProperty;
/// line:455
@property (nonatomic, assign) int rowSetAppType;
/// line:461
@property (nonatomic, retain) NSMutableDictionary *rowSetAddInfo;
/// line:587
@property (nonatomic, retain) NSMutableDictionary *extPropertys;
/// line:609
@property (nonatomic, assign,getter = getSelected,setter = setSelected:) BOOL selected;
/// line:633
//@property (nonatomic, assign) BOOL expanded;
/// line:650
@property (nonatomic, assign) int level;
/// line:659
@property (nonatomic, assign) BOOL isNew;
/// line:673
@property (nonatomic, copy  ) NSString *ldapDN;
/// line:684
@property (nonatomic, copy  ) NSString *ldapRDN;
@property (nonatomic, copy  ) NSString *tableName;

#pragma mark- 内存释放方法
//-(void)destorySelf;
-(void)deallocSubModel;

#pragma mark- 逻辑功能方法



/// line:55
-(NSString *)getRowColFormula:(NSString *)col;

/// line:60
-(void)setRowColFormula:(NSString *)value forKey:(NSString *)key;
/**
 * 当前行的下一级数据级（ArrayCollection）
 * line:86
 */
-(id)getNextLevel;

/**
 * 存储数据，此方法执行时不派发事件
 * line:147
 * @param key
 * @param value
 */
-(void)put:(id)value forKey:(NSString *)key;

/**
 * 以键值对的形式添加数据
 * line:166
 * @param key 键
 * @param value 值
 */
-(void)putObject:(id)value forKey:(NSString *)keyName;

/**
 * 以键值对的形式添加数据
 * line:180
 * @param key String 键
 * @param value String 值
 */
-(void)putString:(NSString *)value forKey:(NSString *)keyName;

/**
 * 存储整数
 * line:190
 * @param key 键
 * @param value 整数
 */
-(void)putInt:(int)value forKey:(NSString *)key;

/**
 * 存储浮点浮点数
 * @param key 键
 * @param value 浮点数
 */
-(void)putFloat:(float)value forKey:(NSString *)key;

/**
 * 添加一行数据，派发事件
 * @param value 一行数据的键值对
 */
-(void)putAllObject:(NSMutableDictionary *)value;

/**
 * 添加一行数据，不派发事件
 * @param value 一行数据的键值对
 */
-(void)putAll:(NSMutableDictionary *)value;

/**
 * 根据键的名称从行数据中获取对应的值
 * @param keyName String
 * @param defValue Object 默认值
 * @return Object
 */
-(id)getObjectForKey:(NSString *)keyName withDefaultValue:(id)defValue;
-(id)getObjectForKey:(NSString *)keyName;


/**
 * 根据键的名称从行数据中获取对应的值字符串
 * @param keyName String
 * @param defValue String 默认值
 * @return String
 */
-(NSString *)getStringForKey:(NSString *)keyName withDefaultValue:(NSString *)defValue;
-(NSString *)getStringForKey:(NSString *)keyName;

-(NSNumber *)getNumberForKey:(NSString *)keyName withDefaultValue:(NSNumber *)defValue;
-(NSNumber *)getNumberForKey:(NSString *)keyName;

-(int)getIntForKey:(NSString *)keyName withDefaultValue:(int)defValue;
//-(int)getIntForKey:(NSString *)keyName;

/**
 * 派发行更新事件
 * @param keyName
 * @param oldValue
 * @param newValue
 * @param alwaysFire 不转值是否发生了变化，否要派发事件，默认为false，值不发生变化就不派发事件
 */
//fireDataSetUpdateEvent

/**
 * 当前行插入下一级数据
 *
 * @param dataSet EFDataSet
 * @param dsType String dataSet的类型，默认为children，既当前行的下一级数据
 */
-(void)insertDataSet:(EFDataSet *)dataSet forDSType:(NSString *)dsType;
-(void)insertDataSet:(EFDataSet *)dataSet;

/**
 * 获取当前行的下一级数据<br>
 * @param dsType String dataSet的类型，默认为children，既当前行的下一级数据
 */
-(EFDataSet *)getDataSetForDSType:(NSString *)dsType;


/**
 * 当前行插入下一级数据
 * @param dataSet EFDataSet
 * @param dsType String dataSet的类型，默认为children，既当前行的下一级数据
 **/
-(void)setDataSet:(EFDataSet *)dataSet forDSType:(NSString *)dsType;

/**
 * 存放引用当前行的DataSet
 */
-(void)insertDataSetCont:(EFDataSet *)dataSet;

/**
 * 所属数据集
 */
-(EFDataSet *)getMasterDataSet;

/// line:465
-(id)getAddInfoForKey:(NSString *)key;

/// line:472
-(void)putAddInfo:(id)value forKey:(NSString *)key;

/** 根据字典名称和列id获取对应的名称
 * line:485
 * @param DCT_ID String 字典名称
 * @param COL_ID String 编号F_ID
 * @param defName String 默认名称
 * @return String
 */
-(NSString *)getID2NameWithDCT_ID:(NSString *)aDCT_ID COL_ID:(NSString *)aCOL_ID defaultValue:(NSString *)defaultValue;

/**
 * 根据字典名称和列id设置对应的名称
 * @param DCT_ID String 字典名称
 * @param COL_ID String 编号F_ID
 * @param name String 名称
 */
-(void)setID2NameWithDCT_ID:(NSString *)aDCT_ID COL_ID:(NSString *)aCOL_ID name:(NSString *)aName;


/**
 * 获取指定字段的的名称，适用不存在外键的情况，仅在前段使用
 * line:515
 * @param COL_ID
 * @param defName
 */
-(NSString *)getNameWithCOL_ID:(NSString *)aCOL_ID defaultName:(NSString *)defName;

/**
 * 设置指定字段的的名称，仅在前段使用
 * line:528
 * @param COL_ID 事实表列ID
 * @param name COL_ID的名称
 */
-(void)setName:(NSString *)name forCOL_ID:(NSString *)aCOL_ID;

/**
 * 根据字典名称和列id获取包含名称列数据行
 * line:542
 * @param DCT_ID String
 * @param COL_ID String
 * @return ESPRowSet
 */
-(EFRowSet *)getID2RowSetWithDCT_ID:(NSString *)aDCT_ID COL_ID:(NSString *)aCOL_ID ;

/**
 * 根据字典名称和列id设置包含名称列数据行
 * line:563
 * @param DCT_ID String
 * @param COL_ID String
 * @param rowSet EFRowSet
 */
-(void)setID2RowSet:(EFRowSet *)rowSet withDCT_ID:(NSString *)aDCT_ID COL_ID:(NSString *)aCOL_ID ;

/**
 * 获取当前行下的所有dataSet的tableName数组
 * line:576
 * @return Array 所有dataSet名称字符串数组
 */
//-(NSMutableArray *)getDSTypes;

/// line:588
-(void)setExtProperty:(id)value forKey:(NSString *)key;
/// line:603
-(id)getExtPropertyForKey:(NSString *)key defaultObject:(id)def;

/**
 * 设置权限数据集
 * line:700
 * @param F_Gn int
 * @param dataSet EFDataSet
 */
-(void)setLimitDataSet:(EFDataSet *)dataSet forKey:(int)F_Gn;

/**
 * 获取特定权限的数据集
 * line:706
 * @param F_Gn int
 * @return EFDataSet
 */
-(EFDataSet *)getLimitDataSet:(int)F_Gn;
@end
