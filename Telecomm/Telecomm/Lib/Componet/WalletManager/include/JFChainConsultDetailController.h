//
//  JFChainConsultDetailController.h
//  WalletManager
//
//  Created by 夏祥可 on 2018/12/11.
//  Copyright © 2018 pansoft. All rights reserved.
//  询证详情界面

#import <UIKit/UIKit.h>
#import "JFChainConsultModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFChainConsultDetailController : UIViewController

///列表数据
@property (nonatomic, strong) ProcesseModel *listModel;
///用户身份 1:审计机构 2:企业 3:银行
@property(nonatomic,assign) NSInteger userType;

@end

NS_ASSUME_NONNULL_END
