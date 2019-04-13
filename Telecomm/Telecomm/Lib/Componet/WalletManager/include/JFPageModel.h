//
//  JFPageModel.h
//  ChatComps
//
//  Created by 董艳武 on 2018/8/16.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JFPageModel : NSObject

@property (nonatomic, strong) NSNumber             * currentPage;
@property (nonatomic, strong) NSNumber             * allRow;
@property (nonatomic, strong) NSNumber             * pageSize;
@property (nonatomic, strong) NSNumber             * totalPage;

@end
