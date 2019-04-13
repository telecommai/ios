//
//  EShopLuckNumManager.h
//  EShopComps
//
//  Created by 夏祥可 on 2018/11/2.
//  Copyright © 2018 谢虎. All rights reserved.
//  夺宝 本期幸运号码Manager

#import <Foundation/Foundation.h>
#import "EShopLuckNumModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface EShopLuckNumManager : NSObject

///获取本地列表数据
+ (NSMutableArray *)getKeyListData;
///获取服务器数据
+ (void)getServerDataWithGoodID:(NSString *)goodID success:(SuccessBlock)successBlock failure:(FailBlock)failureBlock;

@end

NS_ASSUME_NONNULL_END
