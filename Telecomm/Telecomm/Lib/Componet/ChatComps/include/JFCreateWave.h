//
//  JFCreateWave.h
//  ChatComps
//
//  Created by StarLord on 2018/9/14.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "IMStructMessage.h"

@interface JFCreateWave : NSObject

+ (void)createWaveWithAudioURL:(NSURL *)audioURL size:(CGSize)size message:(IMStructMessage *)currentMessage waveImage:(void(^)(UIImage *image, IMStructMessage *currentMessage))waveImage;

@end
