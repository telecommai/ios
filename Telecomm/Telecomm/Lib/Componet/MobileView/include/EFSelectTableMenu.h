//
//  EFSelectTableMenu.h
//  MyCollectionView
//
//  Created by xinqing on 15/9/14.
//  Copyright (c) 2015年 pansoft. All rights reserved.
//

#import <UIKit/UIKit.h>
//#import <ToolsLibraryFramework/ToolsLibraryFramework.h>
#import "StubObject.h"
#import "PlistUtil.h"
#import "EFSelectTableMenuCell.h"

@interface EFSelectTableMenu : UIView <UITableViewDataSource,UITableViewDelegate,EFSelectTableMenuDelegate>

///保存按钮
@property(nullable, nonatomic,readonly,strong) UIButton *saveButton;
///!!!数据 重写set方法
@property(nullable,nonatomic,strong) NSMutableArray *items;

///1 init
-(instancetype)initWithData:(NSMutableArray *)stubObjects;
-(instancetype)initWithFrame:(CGRect)frame datas:(NSMutableArray *) stubObjects;

/////选择所有
//-(void)selectAll;
/////取消所有选择
//-(void)deselectAll;
///重新加载（数据发生变化时调用）
-(void)reloadData;
@end
