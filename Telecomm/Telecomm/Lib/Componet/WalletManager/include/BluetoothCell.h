//
//  BluetoothCell.h
//  WalletManager
//
//  Created by 王胜利 on 2019/2/27.
//  Copyright © 2019 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>

NS_ASSUME_NONNULL_BEGIN

@interface BluetoothCell : UITableViewCell

@property (nonatomic,strong) CBPeripheral *peripheral;

@end

NS_ASSUME_NONNULL_END
