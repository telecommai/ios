//
//  EFSegmentItem.h
//  MobileView
//
//  Created by 董艳武 on 2018/11/9.
//  Copyright © 2018 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "StubObject.h"
#import "TagView.h"
#import "IBadgeView.h"

#define kDefaultTintColor   RGB(190, 116, 255)
#define kLeftMargin         15
#define kItemHeight         30
#define kBorderLineWidth    1.5
#define kBaseTag            1000

@class EFSegmentItem;
@protocol EFSegmentItemDelegate <NSObject>


/**
 item选中

 @param item item对象
 @param index 索引
 @param isSelected 是否选中
 @param stubObject stu对象
 */
- (void)ItemStateChanged:(EFSegmentItem*) item
                   index: (NSInteger)index
              isSelected:(BOOL)isSelected
              stubObject:(StubObject *)stubObject;


/**
 更多x

 @param index 索引
 @param stubObject stu对象
 @param segmentFrame 位置
 */
- (void)segmentMoreMenuDidSelectWithIndex:(NSInteger)index
                               stubobject:(StubObject *)stubObject
                             segmentFrame:(CGRect)segmentFrame;

@end

@interface EFSegmentItem : UIView<IBadgeView>

@property (nonatomic, strong) UIColor       *norColor;    // 正常状态下的颜色
@property (nonatomic, strong) UIColor       *selColor;    // 选中状态下的颜色
@property (nonatomic, strong) UILabel       *titleLabel;
@property (nonatomic, strong) StubObject    *stubObject;
@property (nonatomic)         NSInteger     index;
@property (nonatomic)         BOOL          isSelected;
@property (nonatomic)         id            delegate;
@property (nonatomic, strong) TagView       *badgeView;
@property (nonatomic, strong) UIImageView   *moreImage;
@property (nonatomic, strong) CALayer       *redPointLayer; // 红点layer


/**
 初始化

 @param frame 位置
 @param index 序号
 @param stu stu
 @param norColor 未选中的颜色
 @param selColor 选中的颜色
 @param isSelected 是否选中
 @return 实例化对象
 */
- (id)initWithFrame:(CGRect)frame
              index:(NSInteger)index
                stu:(StubObject *)stu
           norColor:(UIColor *)norColor
           selColor:(UIColor *)selColor
         isSelected:(BOOL)isSelected;

@end

