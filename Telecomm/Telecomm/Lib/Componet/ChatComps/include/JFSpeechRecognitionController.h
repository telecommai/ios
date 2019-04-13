//
//  JFSpeechRecognitionController.h
//  ChatComps
//
//  Created by YRH on 2018/9/4.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^DismissCompletion)(id obj);
@interface JFSpeechRecognitionController : UIViewController

+ (void)presentSpeechRecognitionControllerWithSourceView:(UIView *)sourceView sourceRect:(CGRect)sourceRect popoverWidth:(CGFloat)popoverWidth animated:(BOOL)animated permittedArrowDirections:(UIPopoverArrowDirection)permittedArrowDirections dismissCompletion:(DismissCompletion)completion;

@end
