//
//  SendLocationSelectCell.h
//  ESPChatComps
//
//  Created by 苏友龙 on 2017/6/2.
//  Copyright © 2017年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SendLocationSelectCell : UITableViewCell

- (void)setNameLabel:(NSString *)name withSpecificLabel:(NSString *)specific;

@property (nonatomic, strong)UILabel *nameLabel;
@property (nonatomic, strong)UILabel *specificLabel;
@property (nonatomic, strong)UIImageView *selectedImage;

@end
