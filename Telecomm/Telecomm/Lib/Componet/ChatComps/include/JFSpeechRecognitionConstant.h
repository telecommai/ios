//
//  JFSpeechRecognitionConstant.h
//  ChatComps
//
//  Created by StarLord on 2018/9/7.
//  Copyright © 2018年 Javor Feng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JFSpeechRecognitionConstant : NSObject

/// 本地存储文件夹名字
+ (NSString *)speechRecognizerLocalFolderName;
/// 本地相对路径
+ (NSString *)speechRecognizerLocalRelativePath;
/// 创建存储录音文件的文件夹
+ (void)createAudioLocalFolder;

@end
