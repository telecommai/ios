//
//  CNLabel.h
//  CNLabelDemo
//

#import <UIKit/UIKit.h>
#import "IMStructMessage.h"

@class CNLabel;
@protocol CNLabelDelegate <NSObject>
@optional
-(void)labelIneract:(CNLabel*)cnLabel urlString:(NSString *)urlStr;
@end

@class CNTextView;
typedef void(^ViewSize)(CGSize size);
@interface CNLabel : UIView<UITextViewDelegate>
{
    //       CNTextView *_textView;
}

@property (nonatomic, strong) CNTextView *textView;
@property (nonatomic, copy) NSDictionary *textAttributes;
@property (nonatomic, weak) id<CNLabelDelegate> delegate;
@property (nonatomic, strong) IMStructMessage *message;
@property (nonatomic, strong) UIColor *cnLabeltextColor;
/// 视图size回调
@property (nonatomic, copy) ViewSize viewSize;

/// 赋值内容，内容字体颜色
- (void)textString:(NSString *)text textColor:(UIColor *)color;
/// 调整视图尺寸
- (void)adjustViewSize:(CGSize)size;
/// 计算视图尺寸
- (void)computedViewSize:(void(^)(CGSize size))completion;

@end

@interface CNAttachment : NSTextAttachment

@end

@interface CNTextView : UITextView

@property (nonatomic, strong) IMStructMessage *currentMessage;


@end

