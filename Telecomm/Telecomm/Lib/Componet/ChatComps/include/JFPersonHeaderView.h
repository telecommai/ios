//
//  JFPersonHeaderView.h
//  ChatComps
//
//  Created by 谢虎 on 2019/2/19.
//  Copyright © 2019 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TalkChainHeader.h"
#import "JFPersonHeaderButtomModel.h"

typedef void(^TCMeItemBlock)(JFPersonHeaderButtomModel *model);

@interface JFPersonHeaderView : UIView

- (void)headerWithPlanet:(NSString *)planet
                   items:(NSArray<JFPersonHeaderButtomModel *> *)items;

- (void)reloadPlanet:(NSString *)planet;

- (void)reloadItems:(NSArray<JFPersonHeaderButtomModel *> *)items;


@property (copy, nonatomic) VoidBlock copyAccountBlock;
@property (copy, nonatomic) VoidBlock userInfoBlock;
@property (copy, nonatomic) TCMeItemBlock itemBlock;
@property (copy, nonatomic) VoidBlock changeNameBlock;
@end

