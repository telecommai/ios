//
//  EFSegmentItem+Theme.h
//  ThemeKit
//
//  Created by 董艳武 on 2019/1/22.
//  Copyright © 2019 Javor Feng. All rights reserved.
//

#import "EFSegmentItem.h"
#import "UIColor+Theme.h"

NS_ASSUME_NONNULL_BEGIN

@interface EFSegmentItem (Theme)

@property (nonatomic, copy) ThemeColorPicker theme_norColor;
@property (nonatomic, copy) ThemeColorPicker theme_selColor;


@end

NS_ASSUME_NONNULL_END
