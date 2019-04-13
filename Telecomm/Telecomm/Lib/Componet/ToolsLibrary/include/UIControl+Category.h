//
//  UIControl+Category.h
//  TalkChain
//
//  Created by 王胜利 on 2018/3/20.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//


#import <UIKit/UIKit.h>

@interface UIControl (Action)

- (void)ex_touchDown:(void (^)(void))eventBlock;
- (void)ex_touchDownRepeat:(void (^)(void))eventBlock;
- (void)ex_touchDragInside:(void (^)(void))eventBlock;
- (void)ex_touchDragOutside:(void (^)(void))eventBlock;
- (void)ex_touchDragEnter:(void (^)(void))eventBlock;
- (void)ex_touchDragExit:(void (^)(void))eventBlock;
- (void)ex_touchUpInside:(void (^)(void))eventBlock;
- (void)ex_touchUpOutside:(void (^)(void))eventBlock;
- (void)ex_touchCancel:(void (^)(void))eventBlock;
- (void)ex_valueChanged:(void (^)(void))eventBlock;
- (void)ex_editingDidBegin:(void (^)(void))eventBlock;
- (void)ex_editingChanged:(void (^)(void))eventBlock;
- (void)ex_editingDidEnd:(void (^)(void))eventBlock;
- (void)ex_editingDidEndOnExit:(void (^)(void))eventBlock;

@end

