//
//  EShopAddEvaluateCell.h
//  EShopComps
//
//  Created by 赵洪壮 on 2018/10/11.
//  Copyright © 2018 谢虎. All rights reserved.
//  商品评价

#import <UIKit/UIKit.h>

@class EShopAddEvaluateCell;

NS_ASSUME_NONNULL_BEGIN

@protocol EShopAddEvaluateViewDelegate <NSObject>

@required

/// 刷新Cell
- (void)reloadWithCell:(EShopAddEvaluateCell *)cell entity:(EShopEvaluateEntity *)entity;
/// 提交评价将要上传图片
- (void)submitWillUploadImageWithCell:(EShopAddEvaluateCell *)cell entity:(EShopEvaluateEntity *)entity;
/// 提交评价已经上传图片
- (void)submitDidUploadImageWithCell:(EShopAddEvaluateCell *)cell entity:(EShopEvaluateEntity *)entity;
/// 提交评论上传图片失败
- (void)submitUploadImageFailWithCell:(EShopAddEvaluateCell *)cell entity:(EShopEvaluateEntity *)entity;
/// 弹出提示窗口
- (void)showAlertWithString:(NSString *)message;
/// cell开始编辑
- (void)cellTextViewShouldBeginEditing:(UITextView *)textView;

@end

@interface EShopAddEvaluateCell : UITableViewCell

@property (nonatomic, strong) EShopEvaluateEntity *evaluatrEntity;
@property (nonatomic, weak) id <EShopAddEvaluateViewDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
