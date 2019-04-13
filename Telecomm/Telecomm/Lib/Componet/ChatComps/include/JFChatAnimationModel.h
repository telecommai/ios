//
//  AnimationModel.h
//  ChatComps
//
//  Created by Javor on 2018/4/2.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JFChatAnimationModel : NSObject

@property(nonatomic, copy)   NSString *type;
@property(nonatomic, copy)   NSString *name;
@property(nonatomic, copy)   NSString *no;
@property(nonatomic, assign) NSInteger count;
@property(nonatomic, assign) NSTimeInterval duration;
@property(nonatomic, assign) NSInteger repeat;
@property(nonatomic, copy)   NSString *holder;
@property(nonatomic, strong) NSMutableArray *animationArray;
@property(nonatomic, copy)   NSString  *incoming;
@property(nonatomic, copy)   NSString  *outgoing;
@end

