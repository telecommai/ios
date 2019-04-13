//
//  ZoneTextView.h
//  Zone
//
//  Created by 王胜利 on 2018/5/4.
//  Copyright © 2018年 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RespondUrlLabel.h"

@interface ZoneCellTextView : UIView

@property (nonatomic, strong) RespondUrlLabel *textView;

- (void)text:(NSString *)text;

-(NSMutableAttributedString*)subString:(NSString *)string;

@end
