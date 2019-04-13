//
//  JFChainConsultListCell.h
//  WalletManager
//
//  Created by 董艳武 on 2018/12/11.
//  Copyright © 2018 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JFChainConsultModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFChainConsultListCell : UITableViewCell

@property(nonatomic,assign) BOOL isProcessing;
@property(nonatomic,strong) ProcesseModel *model;

@end

NS_ASSUME_NONNULL_END
