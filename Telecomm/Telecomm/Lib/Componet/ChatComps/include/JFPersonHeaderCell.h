//
//  JFPersonHeaderCell.h
//  ChatComps
//
//  Created by 谢虎 on 2019/2/19.
//  Copyright © 2019 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JFPersonHeaderCell : UITableViewCell

- (void)setHeadTitle:(NSString *)title headImage:(NSString *)url;

@property(nonatomic,strong) NSDictionary *data;

@end
