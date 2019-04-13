//
//  RecenFilesCell.h
//  ESPChatComps
//
//  Created by 吴鹏 on 17/7/3.
//  Copyright © 2017年 Pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
    /**正常*/
    cellcolorType_normal = 0,
    /**正常*/
    cellcolorType_night  = 1,
    
}cellcolorType;

typedef void(^TouchImageIconAction)(NSDictionary *dataDic);

@interface RecenFilesCell : UITableViewCell

///主题颜色类型
@property (nonatomic, assign) Byte cellcolorType;

@property (nonatomic, copy) TouchImageIconAction touchImageIconAciton;

///设置显示文件信息
- (void)setFileInfo:(NSDictionary *)dataDic;
///被点击
- (void)cellDidSelected;

@end
