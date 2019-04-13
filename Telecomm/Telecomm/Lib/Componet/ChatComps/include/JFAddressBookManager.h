//
//  JFAddressBookManager.h
//  ChatComps
//
//  Created by 夏祥可 on 2018/8/24.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JFAddressBookManager : NSObject


///获取通讯录初始化数据
- (NSMutableArray *)getAddressBookContents;

///获取通讯录分组内容
- (NSDictionary *)getSortAddressBookContentsWithArr:(NSMutableArray *)dataArr stubID:(NSString *)stubID;


@end
