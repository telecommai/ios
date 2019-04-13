//
//  SegmentView.h
//  Mtime
//
//  Created by Mac on 15/8/3.
//  Copyright (c) 2015年 wxk. All rights reserved.
//

#import <UIKit/UIKit.h>

//1.声明一个block
typedef void(^SegBlock)(NSInteger index);
@interface SegmentView : UIView
{

    //2.提供一个block的属性名
    SegBlock _segBlock;

}

@property (nonatomic, copy)NSArray *titles;

@property (nonatomic, copy)NSString *selectImageName;

@property (nonatomic, assign)int selectedIndex;//默认选中的位置


//3.提供一个block的调用方法
- (void)addBlcok:(SegBlock)block;


- (id)initWithFrame:(CGRect)frame WithTitiles:(NSArray *)titles;

- (void)changeSegButtonItem:(NSArray *)titles;

@end
