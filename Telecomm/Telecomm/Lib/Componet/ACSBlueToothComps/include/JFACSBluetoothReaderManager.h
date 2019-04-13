//
//  JFACSBluetoothReaderManager.h
//  ACSBlueToothComps
//
//  Created by 董艳武 on 2019/2/21.
//  Copyright © 2019 董艳武. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "ACSBluetooth.h"
#import "ABDHex.h"

NS_ASSUME_NONNULL_BEGIN

#define LOAD_AUTHENTICATEKEY            @"FF 82 00 00h 06 FF FF FF FF FF FF"
#define AUTHENTICATE_DATABLOCK(No)      [NSString stringWithFormat:@"FF 86 00 00 05 01 00 %@ 60 00",No]
#define READ_DATABLOCK(No,Length)       [NSString stringWithFormat:@"FF B0 00 %@ %@",No,Length]
#define WRITE_DATABLOCK(No,Length,Data) [NSString stringWithFormat:@"FF D6 00 %@ %@ %@",No,Length,Data]
#define ALLZEROBLOCKSDATA               @"00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00"

#define RESULTCODE_UNSUPPORT       @"6A 81" /// 不支持此功能
#define RESULTCODE_SUCCESS         @"90 00" /// 操作成功
#define RESULTCODE_FAILURE         @"63 00" /// 操作失败

typedef enum  {
    /// 验证读卡器
    ReaderCardStepAuthenticateReader,
    /// 加载认证秘钥
    ReaderCardStepLoadAuthenticateKey,
    /// 开启卡片
    ReaderCardStepPowerOnCard,
    /// 认证数据块
    ReaderCardStepAuthenticateDataBlock,
    /// 读取数据块
    ReaderCardStepReadDataBlock,
    /// 写入数据块
    ReaderCardStepWriteDataBlock,
    
} ReaderCardStep ;

typedef void (^LoadAuthenticateKeyCompletion)(BOOL);
typedef void (^AttachPeripheralCompletion)(BOOL);
typedef void (^AuthenticateReaderCompletion)(BOOL);
typedef void (^PowerOnCardCompletion)(BOOL);
typedef void (^AttachReaderDeviceCompletion)(BOOL,NSString *);
typedef void (^AuthenticateCardCompletion)(BOOL,NSString *);
typedef void (^ReaderCardDataCompletion)(BOOL,NSString *);
typedef void (^WriteDataCompletion)(BOOL,NSString *);

typedef void (^WriteDatasCompletion)(BOOL);
typedef void (^ReadDatasCompletion)(BOOL,NSArray<NSString *> *);

static NSString *MasterKeyString = @"41 43 52 31 32 35 35 55 2D 4A 31 20 41 75 74 68";

@interface JFACSBluetoothReaderManager : NSObject

/// 设备对象
@property(nonatomic,strong) CBPeripheral *peripheral;
/// 读卡器对象
@property(nonatomic,strong) ABTBluetoothReader *reader;
/// 开启卡片的回调
@property(nonatomic,copy)   PowerOnCardCompletion powerOnCardCompletion;
/// 是否开启卡片
@property(nonatomic,assign) BOOL                isPowerOn;

/**
 初始化管理器

 @param peripheral 设备对象
 @param reader 读卡器对象
 @return 实例化对象
 */
-(instancetype)initWithPeripheral:(CBPeripheral *)peripheral reader:(ABTBluetoothReader *)reader;


/// 连接读卡器
-(void)attachPeripheralWithCompletion:(AttachPeripheralCompletion)completion;
/// 认证读卡器
-(void)authenticateReaderWithCompletion:(AuthenticateReaderCompletion)completion;
/// 检测通电状态
-(void)powerOnCardWithCompletion:(PowerOnCardCompletion)completion;

/**
 认证数据块（操作之前，必须isPowerOn==YES）

@param blockNo 数据块
@param completion 回调事件 YES 认证成功 NO 认证失败
 */
-(void)authenticateCardWithBlockNo:(NSString *)blockNo completion:(AuthenticateCardCompletion)completion;


/**
 读取数据块
 
 @param blockNo 数据块
 @param dataLength 数据长度（1-10） 16进制
 @param completion 回调事件（读取成功 YES 读取失败 NO 数据）
 */
-(void)readCardWithDataBlockNo:(NSString *)blockNo dataLength:(NSString *)dataLength completion:(ReaderCardDataCompletion)completion;


/**
 写入写数据

 @param blockNo 数据块
 @param dataLength 数据长度（不足0补齐）
 @param dataString 存储的数据
 @param completion 回调事件
 */
-(void)writeCardWithDataBlockNo:(NSString *)blockNo dataLength:(NSString *)dataLength dataString:(NSString *)dataString completion:(WriteDataCompletion)completion;

/**
 连接并认证读卡器

 @param complete 结果
 */
- (void)connentAndAuthReaderWithComplete:(AttachReaderDeviceCompletion)complete;

/**
 读卡

 @param blockNo 数据块
 @param completion 回调事件（读取成功 YES 读取失败 NO 数据）
 */
- (void)readCardWithDataBlockNo:(NSString *)blockNo completion:(ReaderCardDataCompletion)completion;

/**
 写卡

 @param blockNo 数据块
 @param dataString 存储的数据
 @param completion 回调事件
 */
-(void)writeCardWithDataBlockNo:(NSString *)blockNo dataString:(NSString *)dataString completion:(WriteDataCompletion)completion;

/**
 写卡

 @param blocks 数据块（一组）
 @param datas 数据（一组）
 @param failRepeatCount 失败重写次数
 @param completion 完成的回调
 */
-(void)writeWithBlocks:(NSArray *)blocks datas:(NSArray *)datas failRepeatCount:(NSInteger)failRepeatCount completion:(WriteDatasCompletion)completion;

-(void)readWithBlocks:(NSArray *)blocks failRepeatCount:(NSInteger)failRepeatCount completion:(ReadDatasCompletion)completion;

/// 读取全部数据块
-(void)readAllBlocksCompletion:(ReadDatasCompletion)completion;

/// 读取第一扇区数据块
-(void)readFristBlocksCompletion:(ReadDatasCompletion)completion;

/// 写入全部数据块（不足的用零补齐）
-(void)writeAllBlocksWith:(NSArray<NSString *> *)datas completion:(WriteDatasCompletion)completion;

/// 写入第一扇区数据块（不足的用零补齐）
-(void)writeFristBlocksWith:(NSArray<NSString *> *)datas completion:(WriteDatasCompletion)completion;

@end

NS_ASSUME_NONNULL_END
