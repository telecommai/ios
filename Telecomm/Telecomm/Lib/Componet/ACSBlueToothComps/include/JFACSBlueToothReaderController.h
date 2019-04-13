//
//  JFACSBlueToothReaderController.h
//  ACSBlueToothComps
//
//  Created by 董艳武 on 2019/2/20.
//  Copyright © 2019 董艳武. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "ACSBluetooth.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFACSBlueToothReaderController : UIViewController

@property(nonatomic,strong) CBPeripheral *peripheral;
@property(nonatomic,strong) ABTBluetoothReader *reader;

@end

NS_ASSUME_NONNULL_END
