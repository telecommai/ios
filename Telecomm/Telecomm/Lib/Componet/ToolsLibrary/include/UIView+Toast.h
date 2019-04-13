#import <UIKit/UIKit.h>

extern NSString * const JKToastPositionTop;
extern NSString * const JKToastPositionCenter;
extern NSString * const JKToastPositionBottom;

@interface UIView (Toast)

// each makeToast method creates a view and displays it as toast
- (void)jk_makeToast:(NSString *)message;
- (void)jk_makeToast:(NSString *)message duration:(NSTimeInterval)interval position:(id)position;
- (void)jk_makeToast:(NSString *)message duration:(NSTimeInterval)interval position:(id)position image:(UIImage *)image;
- (void)jk_makeToast:(NSString *)message duration:(NSTimeInterval)interval position:(id)position title:(NSString *)title;
- (void)jk_makeToast:(NSString *)message duration:(NSTimeInterval)interval position:(id)position title:(NSString *)title image:(UIImage *)image;

// displays toast with an activity spinner
- (void)jk_makeToastActivity;
- (void)jk_makeToastActivity:(id)position;
- (void)jk_hideToastActivity;

// the showToast methods display any view as toast
- (void)jk_showToast:(UIView *)toast;
- (void)jk_showToast:(UIView *)toast duration:(NSTimeInterval)interval position:(id)point;
- (void)jk_showToast:(UIView *)toast duration:(NSTimeInterval)interval position:(id)point
      tapCallback:(void(^)(void))tapCallback;

@end
