//
//  TCplanetCell.m
//  
//
//  Created by YRH on 2018/4/20.
//  Copyright © 2018年 YRH. All rights reserved.
//

#import "TCPlanetCell.h"
#import "Masonry.h"

@implementation TCPlanetCell

// 星球
- (UIImageView *)planetImageView {
    if (!_planetImageView) {
        _planetImageView = [[UIImageView alloc] init];
        [self.contentView addSubview:_planetImageView];
        [_planetImageView mas_makeConstraints:^(MASConstraintMaker *make) {
            make.edges.equalTo(self.contentView);
        }];
    }
    return _planetImageView;
}

@end
