//
//  NewsCellSubView.h
//  ESPChatComps
//
//  Created by 吴鹏 on 17/9/27.
//  Copyright © 2017年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol NewsCellSubViewDelegate <NSObject>

- (void)deleteNewsCell;

@end

@interface NewsCellSubView : UIView

@property (nonatomic, weak)id<NewsCellSubViewDelegate> delegate;

- (void)setInfos:(NSDictionary *)dic;

@end
