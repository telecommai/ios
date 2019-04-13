//
//  EFNewsWebviewController.h
//  ESPChatComps
//
//  Created by 虎 谢 on 2017/11/8.
//  Copyright © 2017年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EFUIViewController.h"
#import "StubObject.h"

@protocol  EFNewsWebviewDelegate<NSObject>

-(void)reloadData:(NSDictionary *)dic withCellData:(NSMutableArray *)array;

-(void)loadDataWithNewsId:(NSString *)newsId WithHeaderData:(NSDictionary *)headerData;

@end

@interface EFNewsWebviewController : EFUIViewController


@property(nonatomic,weak) id<EFNewsWebviewDelegate>delegate;

-(instancetype)initWithNewsId:(NSString *)newsId;

@end
