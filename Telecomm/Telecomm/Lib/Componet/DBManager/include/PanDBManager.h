//
//  PanDBManager.h
//  DBManager
//
//  Created by pansoft_mac on 13-7-17.
//  Copyright (c) 2013年 pansoft_mac. All rights reserved.
//

#import <Foundation/Foundation.h>

enum eSQlType {
    eSQLType_create = 0,
    eSQLType_drop,
    eSQLType_insert,
    eSQLType_delete,
    eSQLType_update,
    eSQLType_select,
};


///***************     ======================================     ***************///
///***************     *****         sqlite_basic       *****     ***************///
///***************     ======================================     ***************///
#pragma mark- SQL语句表操作
@interface PanDBManager : NSObject
/**
 * 执行SQL语句完成对表的insert update delete drop操作
 *
 * @param SQL SQL语句
 * @param dbName db名称
 * @param dbPath db所在路径
 * @param error  错误信息
 *
 * @return YES:执行成功; NO:执行失败
 */
+ (BOOL)executeUpdateWithSQL:(NSString *)SQL toDB:(NSString *)dbName atPath:(NSString *)dbPath error:(NSError **)error;
+ (BOOL)executeUpdateWithSQLS:(NSArray *)SQLS toDB:(NSString *)dbName atPath:(NSString *)dbPath error:(NSError **)error;

/**
 * 执行SQL语句完成对表的select操作
 *
 * @param SQL SQL语句
 * @param dbName db名称
 * @param dbPath db所在路径
 * @param error  错误信息
 *
 * @return NSDictionary的数组
 */
+ (NSMutableArray *)queryWithSQL:(NSString *)SQL fromDB:(NSString *)dbName atPath:(NSString *)dbPath error:(NSError **)error;

/**
 * 执行SQL语句完成对表的select操作
 *
 * @param SQL       SQL语句
 * @param dbName    db名称
 * @param dbPath    db所在路径
 * @param error     错误信息
 * @param primeKey  主键信息
 *
 * @return NSDictionary的数组
 */
+ (NSMutableArray *)queryWithSQL:(NSString *)SQL fromDB:(NSString *)dbName atPath:(NSString *)dbPath error:(NSError **)error storePrimeKey:(NSArray **)primeKey;

/**
 * 执行SQL语句完成对表的select操作
 *
 * @param tableName 表名
 * @param SQL       SQL语句
 * @param dbName    db名称
 * @param dbPath    db所在路径
 * @param error     错误信息
 * @param primeKey  主键信息
 *
 * @return NSDictionary的数组
 */
+ (NSMutableArray *)queryTable:(NSString *)tableName withSQL:(NSString *)SQL fromDB:(NSString *)dbName atPath:(NSString *)dbPath error:(NSError **)error storePrimeKey:(NSArray **)primeKey;

/**
 * 获得table的PK
 *
 * @param tableName 表名
 * @param dbName db名称
 * @param dbPath db所在路径
 * @param error  错误信息
 *
 * @return NSDictionary的数组
 */
+ (NSMutableArray *)primeKeysInTable:(NSString *)tableName fromDB:(NSString *)dbName atPath:(NSString *)dbPath error:(NSError **)error;

@end

///***************     ======================================     ***************///
///***************     *****          sqlite_DB         *****     ***************///
///***************     ======================================     ***************///
#pragma mark- DB操作
@interface PanDBManager (sqlite_DB)
/**
 * 检查数据库是否存在
 *
 * 用到PanFileManager中的判断文件是否存在的方法
 *
 * @param dbName db名称
 * @param dbPath db所在路径
 * @param error  错误信息
 *
 * @return YES:存在; NO:不存在
 */
+ (BOOL)existDB:(NSString *)dbName atPath:(NSString *)dbPath error:(NSError **)error;

/**
 * 创建数据库
 *
 * @param dbName db名称
 * @param dbPath db所在路径
 * @param error  错误信息
 *
 * @return YES:创建成功; NO:创建失败
 */
+ (BOOL)createDB:(NSString *)dbName atPath:(NSString *)dbPath error:(NSError **)error;

/**
 * 删除数据库
 *
 * 用到PanFileManager中的删除文件的方法
 *
 * @param dbName db名称
 * @param dbPath db所在路径
 * @param error  错误信息
 *
 * @return YES:删除成功; NO:删除失败
 */
+ (BOOL)dropDB:(NSString *)dbName atPath:(NSString *)dbPath error:(NSError **)error;

@end

////////////////////////////////////////////////////////////////////////////////////
////////// ***** *****         sqlite_table      ***** *****  //////////////////////
////////////////////////////////////////////////////////////////////////////////////
@interface PanDBManager(sqlite_table)
/**
 * 检查数据库是否存在
 *
 * 用到PanFileManager中的判断文件是否存在的方法
 *
 * @param tableName table名称
 * @param dbName db名称
 * @param dbPath db所在路径
 * @param error  错误信息
 *
 * @return YES:存在; NO:不存在
 */
+ (BOOL)existTable:(NSString *)tableName withinDB:(NSString *)dbName atPath:(NSString *)dbPath error:(NSError **)error;

/**
 * 插入数据
 *
 * 用到PanFileManager中的判断文件是否存在的方法
 *
 * @param tableName table名称
 * @param dbName db名称
 * @param dbPath db所在路径
 * @param error  错误信息
 *
 * @return YES:存在; NO:不存在
 */
+ (BOOL)insertData:(NSArray *)dataArray toTable:(NSString *)tableName withinDB:(NSString *)dbName atPath:(NSString *)dbPath error:(NSError **)error;

@end;
