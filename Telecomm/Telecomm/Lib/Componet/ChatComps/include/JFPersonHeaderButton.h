//
//  JFPersonHeaderButton.h
//  ChatComps
//
//  Created by 谢虎 on 2019/2/19.
//  Copyright © 2019 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TalkChainHeader.h"

@interface JFPersonHeaderButton : UIView
- (void)buttonWithNum:(NSString *)num title:(NSString *)title touch:(VoidBlock)touchBlock;
- (void)refreshButtonWithNum:(NSString *)num title:(NSString *)title;
@end
