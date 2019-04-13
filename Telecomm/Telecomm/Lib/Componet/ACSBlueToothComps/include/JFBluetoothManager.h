//
//  JFBluetoothManager.h
//  ACSBlueToothComps
//
//  Created by 王胜利 on 2019/2/22.
//  Copyright © 2019 董艳武. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "ACSBluetooth.h"
#import "ABDHex.h"

typedef void(^BluetoothStateBlock)(CBManagerState state);
typedef void(^ConnectBlock)(ABTBluetoothReader *reader,CBPeripheral *peripheral,NSError *error);
typedef void(^ScanBlock)(NSMutableArray<CBPeripheral *> *peripherals);



NS_ASSUME_NONNULL_BEGIN

@interface JFBluetoothManager : NSObject
/// 蓝牙状态
@property (nonatomic,copy) BluetoothStateBlock bluetoothStateBlock;
/// 蓝牙设备变化
@property (nonatomic,copy) ScanBlock peripheralChangedBlock;
/// 扫描设备
- (void)scan;
/// 停止扫描
- (void)stopScan;
/// 连接设备
- (void)connectPeripheral:(CBPeripheral *)peripheral result:(ConnectBlock)result;
/// 取消设备连接
- (void)cancelPeripheral:(CBPeripheral *)peripheral result:(ConnectBlock)result;


@end

NS_ASSUME_NONNULL_END
