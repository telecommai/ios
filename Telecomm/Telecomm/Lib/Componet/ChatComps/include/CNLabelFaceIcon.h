//
//  CNLabelFaceIcon.h
//  ESPChatComps
//
//  Created by 于仁汇 on 16/12/26.
//  Copyright © 2016年 Pansoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CNLabelFaceIcon : NSObject

+ (CNLabelFaceIcon *)shadeCNLabelFaceIcon;

/// 获得 icon 的 String
- (NSString *)obtainIconStr:(NSString *)key;

@end
