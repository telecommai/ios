//
//  Constant.h
//  ESPTablet
//
//  Created by Javor on 14-8-5.
//  Copyright (c) 2014年 Javor. All rights reserved.
//

#import "EnvironmentVariable.h"

#define APPName [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleDisplayName"]

#ifdef __OBJC__
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#endif

/// 过期提醒
#define Deprecated(instead) NS_DEPRECATED_IOS(2_0, 2_0,instead)

////////////////////////////字体相关////////////////////////////
#define EF_FONT_SYSTEM(fontSize)         [UIFont fontWithName:@"helvetica Neue" size:fontSize]
/// 系统字体
#define FONT(size) [UIFont systemFontOfSize:size]
/// 粗体
#define BOLD_FONT(size) [UIFont boldSystemFontOfSize:size]
////////////////////////////字体相关////////////////////////////

////////////////////////////通用-frame相关///////////////////////////////
#define EF_STATUS                [[UIApplication sharedApplication] statusBarFrame].size.height
//#define EF_TITLEVIEW             self.navigationController.navigationBar.frame.size.height
//#define EF_STATUS                20
#define EF_TITLEVIEW             44
#define EF_TABBAR                49
#define EF_TABBAR_MENU           30
#define EF_X_FOOTERHEIGHT        34
#define EF_X_HEADERHEIGHT        44
////////////////////////////通用-frame相关///////////////////////////////

////////////////////////////tablet-frame相关////////////////////////////
#define EF_SCREEN_HEIGHT                 768
#define EF_SCREEN_WIDTH                  1024
#define EF_MENU_WIDTH                    320
#define EF_MAIN_WIDTH                    (EF_SCREEN_WIDTH - EF_MENU_WIDTH)
#define EF_TRAY_HEIGHT                   100  //托盘区域
#define EF_MENU_FRAME                    CGRectMake(0, 0, EF_MENU_WIDTH, EF_SCREEN_HEIGHT)//0,0,320,768
#define EF_MAIN_FRAME                    CGRectMake(EF_MENU_WIDTH, 0, EF_MAIN_WIDTH, EF_SCREEN_HEIGHT)//320,0,704,768
////////////////////////////tablet-frame相关////////////////////////////

////////////////////////////mobile-frame相关////////////////////////////
#define EF_SCREEN_X_MOBLIE               0
#define EF_SCREEN_Y_MOBLIE               (EF_STATUS + EF_TITLEVIEW)
#define EF_SCREEN_HEIGHT_MOBLIE          ([UIScreen mainScreen].bounds.size.height - EF_STATUS - EF_TITLEVIEW - EF_TABBAR)
#define EF_SCREEN_WIDTH_MOBLIE           [UIScreen mainScreen].bounds.size.width
#define EF_SCREEN_FULL_HEIGHT_MOBLIE     [[UIScreen mainScreen] bounds].size.height - 49
#define EF_SCREEN_NO_TABBAR_HEIGHT_MOBLIE EF_SCREEN_FULL_HEIGHT_MOBLIE - EF_TABBAR
#define EF_SCREEN_SIZE                   [UIScreen mainScreen].bounds.size
/// 手机屏幕高
#define EF_SCREEN_ALL_HEIGHT_MOBLIE      [UIScreen mainScreen].bounds.size.height
////////////////////////////mobile-frame相关////////////////////////////

////////////////////////////颜色相关////////////////////////////
/// RGB颜色
#define RGB(r, g, b)  RGBA(r, g, b, 1.0f)
#define RGBA(r, g, b, a)  [UIColor colorWithRed:r/255.f green:g/255.f blue:b/255.f alpha:a]
/// 十六进制颜色
#define HEX_COLOR(rgbValue) \
[UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16)) / 255.0 \
green:((float)((rgbValue & 0xFF00) >> 8)) / 255.0 \
blue:((float)(rgbValue & 0xFF)) / 255.0 alpha:1.0]
/// 随机色
#define cRandomColor RGB(arc4random_uniform(256),arc4random_uniform(256),arc4random_uniform(256))
/// 随机亮色
#define cRandomLightColor RGB(arc4random()%128+128,arc4random()%128+128,arc4random()%128+128)
/// 常用颜色
#define cWhiteColor [UIColor whiteColor]
#define cBlackColor [UIColor blackColor]
#define cDarkGrayColor [UIColor darkGrayColor]
#define cLightGrayColor [UIColor lightGrayColor]
#define cGrayColor [UIColor grayColor]
#define cRedColor [UIColor redColor]
#define cGreenColor [UIColor greenColor]
#define cBlueColor [UIColor blueColor]
#define cCyanColor [UIColor cyanColor]
#define cYellowColor [UIColor yellowColor]
#define cMagentaColor [UIColor magentaColor]
#define cOrangeColor [UIColor orangeColor]
#define cPurpleColor [UIColor purpleColor]
#define cBrownColor [UIColor brownColor]
#define cClearColor [UIColor clearColor]
#define cGroupTableViewBackgroundColor [UIColor groupTableViewBackgroundColor]
#define cCommonGrayTextColor [UIColor colorWithRed:0.63f green:0.63f blue:0.63f alpha:1.00f]
#define cCommonRedColor [UIColor colorWithRed:0.91f green:0.33f blue:0.33f alpha:1.00f]
#define cBgColor RGB(243,245,247)
#define cLineBgColor [UIColor colorWithRed:0.86f green:0.88f blue:0.89f alpha:1.00f]
#define cTextColor [UIColor colorWithRed:0.32f green:0.36f blue:0.40f alpha:1.00f]
#define cCommonBlackColor [UIColor colorWithRed:0.17f green:0.23f blue:0.28f alpha:1.00f]
#define cSeperatorColor RGB(234,237,240)
#define cDetailTextColor [UIColor colorWithRed:0.56f green:0.60f blue:0.62f alpha:1.00f]
#define cCommonTintColor [UIColor colorWithRed:0.42f green:0.33f blue:0.27f alpha:1.00f]
#define cCommonBgColor [UIColor colorWithRed:0.86f green:0.85f blue:0.80f alpha:1.00f]
#define cCommonHighLightRedColor [UIColor colorWithRed:1.00f green:0.49f blue:0.65f alpha:1.00f]

//红色
//#define EF_OLD_RED_COLOR                RGB(202,48,50)
//蓝色
#define EF_OLD_RED_COLOR                  RGB(88,104,166)
#define EF_GRAY_COLOR                     RGB(200, 200, 200)
/// 绿色
#define EF_GREEN_COLOR                    RGB(63,184,56)


//RN相关颜色
//蓝色
//#define EF_RN_CUSTOM_NAVCOLOR           @"rgba(88,104,166,1)"
//红色
#define EF_RN_CUSTOM_NAVCOLOR           @"rgba(202,48,50,1)"
#define rgba(r, g, b, a)                [NSString stringWithFormat:@"rgba(%@%@%@%@)",r,g,b,a]
#define EF_RN_NAVCOLOR  EF_RN_CUSTOM_NAVCOLOR ? EF_RN_CUSTOM_NAVCOLOR : [NSString stringWithFormat:@"rgba(%@)",EF_CUSTOM_COLOR_STRING]
////////////////////////////颜色相关////////////////////////////

////////////////////////////web框架相关////////////////////////////
#define JF_STATUS_BAR_HEIGHT  20
#define JF_TITLE_BAR_HEIGHT   44
#define JF_TAB_BAR_HEIGHT     49
#define JF_TAB_BUTTON_HEIGHT  30
#define JF_TOP_HEIGHT         (JF_STATUS_BAR_HEIGHT + JF_TITLE_BAR_HEIGHT)
////////////////////////////web框架相关////////////////////////////

////////////////////////////按钮相关////////////////////////////
#define BUTTON_NEW                    [UIButton buttonWithType:UIButtonTypeCustom]
#define BUTTON_CLICK(button,function) [button addTarget:self action:@selector(function) forControlEvents:UIControlEventTouchUpInside];
#define BUTTON_TITLE(button,title)    [button setTitle:title forState:UIControlStateNormal]
////////////////////////////按钮相关////////////////////////////

////////////////////////////尺寸相关////////////////////////////
#define SCREEN_SIZE \
([[UIScreen mainScreen] respondsToSelector:@selector(nativeBounds)] ? CGSizeMake([UIScreen mainScreen].nativeBounds.size.width/[UIScreen mainScreen].nativeScale,[UIScreen mainScreen].nativeBounds.size.height/[UIScreen mainScreen].nativeScale) : [UIScreen mainScreen].bounds.size)
//获取屏幕宽度与高度
#define SCREEN_WIDTH SCREEN_SIZE.width
#define SCREEN_HEIGHT SCREEN_SIZE.height
#define SCREEN_BOUNDS [UIScreen mainScreen].bounds

//屏幕等比例缩放 375
#define kScale ([UIScreen mainScreen].bounds.size.width / 375)
#define kNavHeight (SCREEN_HEIGHT == 812.0 ? 88 : 64)
#define kTabbarHeight (SCREEN_HEIGHT == 812.0 ? (34 + 49): 49)

// 系统控件高度
#define STATUS_BAR_HEIGHT APPLICATION.statusBarFrame.size.height
#define NAVIGATION_BAR_HEIGHT 44
#define TOP_BAR_HEIGHT NAVIGATION_BAR_HEIGHT + STATUS_BAR_HEIGHT
#define TOOL_BAR_HEIGHT 44
#define TABBAR_HEIGHT 49
/// 1分辨率线高
#define LINE_HEIGHT (1 / [UIScreen mainScreen].scale)
////////////////////////////尺寸相关////////////////////////////

////////////////////////////// 沙盒路径 ////////////////////////////////
/// 沙盒Document路径
#define DOCUMENT_PATH [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject]
/// 沙盒temp路径
#define TEMP_PATH NSTemporaryDirectory()
/// 沙盒Cache路径
#define CACHE_PATH [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) firstObject]
#define kServerResource             @"res"
#define kBaseVersionName            @"BASE_VERSION_NAME"
#define kUpdateVersionName          @"UPDATE_VERSION_NAME"
#define kLocalResource              @"LOCAL_RESOURCE"
#define kPlisteDirectory            @"PLISTE"
#define kLanguage                   @"language"
#define kExchangeIdentifier         @"ExchangeIdentifier"
#define currentWindow               [[UIApplication sharedApplication] keyWindow]
////////////////////////////// 沙盒路径 ////////////////////////////////

//////////////////////////// 弱引用/强引用 ////////////////////////////
#define WEAK_SELF(weakSelf)    __weak __typeof(&*self)weakSelf = self;
#define WEAK(type)   __weak typeof(type) weak##type = type;
#define STRONG(type) __strong typeof(type) type = weak##type;
//////////////////////////// 弱引用/强引用 ////////////////////////////

////////////////////////////// 开发的时候打印，但是发布的时候不打印的NSLog ///////////////////////////////
#ifdef DEBUG
#define Log(...) printf("************************************************************************************************\n%s 第%d行 \n %s\n\n",__func__,__LINE__,[[NSString stringWithFormat:__VA_ARGS__] UTF8String])
#else
#define Log(...)
#endif
////////////////////////////// 开发的时候打印，但是发布的时候不打印的NSLog ///////////////////////////////

////////////////////////////微信////////////////////////////

/// 控件之间的间距
#define kSpace                  10

/// 抽屉效果偏移的宽度
#define kMenuDisplayedWidth     250

/// GroupDetailHeaderCell
#define kItemSpace              9
#define kItemWidth              (EF_SCREEN_WIDTH_MOBLIE - kItemSpace*8) / 4

/// JHCustomMenu
#define kTopToView              10.0f
#define kLeftToView             10.0f
#define kCellLineEdgeInsets     UIEdgeInsetsMake(0, 10, 0, 10)
#define kScreenWidth            EF_SCREEN_WIDTH_MOBLIE
#define kScreenHeight           EF_SCREEN_ALL_HEIGHT_MOBLIE

/// EFMessageCardItem
#define kMessageCardItemWidth   180
#define kMessageCardItemHeight  160

/// EFMessageVoiceItem
//  语音最大宽度
#define kMessageVoiceMaxWidth   200
//  语音最小宽度
#define kMessageVoiceMinWidth   70
//  语音宽度单位增量
#define kMessageVoiceIncreWidth 5

/// EFMessageVideoItem、EFMessageImageItem
#define kMessageImageMaxWidth   145
#define kMessageImageMaxHeight  145

/// 聊天气泡最大宽度、高度
#define CHATBUBBLE_MAXIMUMWIDTH EF_SCREEN_WIDTH_MOBLIE-130
#define CHATBUBBLE_MAXIMUMHEIGHT 99999.0f

/// 本地存储路径
#define kPath [NSString stringWithFormat:@"%@/%@",[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject],[EnvironmentVariable getIMUserID]]

//免打扰
#define EF_DISTURB [NSString stringWithFormat:@"%@disturb",[EnvironmentVariable getIMUserID]]
#define EF_PLAYSOUND [NSString stringWithFormat:@"%@playSound",[EnvironmentVariable getIMUserID]]
#define EF_PLAYVIBRATE [NSString stringWithFormat:@"%@playVibrate",[EnvironmentVariable getIMUserID]]

//  通知名
#define unreadcountChange       @"unreadcountChange"
#define changeTopBother         @"changeTopBother"
#define deleteFriendGroup       @"deleteFriendGroup"
#define removeFriend            @"removeFriend"
#define changeMySignature       @"changeMySignature"
#define changeMyName            @"changeMyName"
#define changeMySex             @"changeMySex"
#define updateLeftUserInfo      @"updateLeftUserInfo"
#define selfQuitGroup           @"selfQuitGroup"
#define updateGroupName         @"updateGroupName"
#define updateFriendInfor       @"updateFriendInfor"
#define newServiceinfo          @"newServiceinfo"
#define HiddenChatLeftVCHUD     @"HiddenChatLeftVCHUD"
#define taskPostInfoToRN        @"taskPostInfoToRN"
#define CANCEL_CONCERN_APPLICATION      @"CANCEL_CONCERN_APPLICATION"//取消关注应用号


#define RELOAD_DATA             @"reloadData"
#define CHANGE_HEAD_IMAGE_SHAPE @"changeHeadImageShape"
#define ALL_UNREADMESSAGE_READ  @"allUnReadMessage"
#define SEND_PRE_PICTURE_NOTI   @"sendPrePictureNoti"
#define SEND_PRE_VIDEO_NOTI     @"sendPreVideoNoti"

/// 聊天界面的message在item或者cell中发生改变，主动通知界面刷新
#define CHATVIEW_RELOADMESSAGE  @"chatViewReloadMessage"
#define SEND_VIDEO_SIZE_TOO_BIG @"videoSizeOver"
#define kVideoMaxSize           20
//新闻推送通知
#define PUSH_NEWS               @"PUSH_NEWS"
#define NEWS_END_REFRESH        @"NEWS_END_REFRESH"
#define LOAD_NEWS               @"LOAD_NEWS"


//下载资源文件
#define isNeedSyncResource      @"SYNC_RESOURCE"
#define isDownloadBaseVersion   @"DOWNLOAD_BASE_VERSION"
#define isDownloadUpdateVersion @"DOWNLOAD_UPDATE_VERSION"

//加载本地bundle里边的图片
#define ChatImgBundle           @"ChatImgBundle.bundle"
#define ESPEmailBundle          @"ESPEmailBundle.bundle"
#define TaskImageBundle         @"TaskImageBundle.bundle"
#define MeetingSystemResources  @"MeetingSystemResources.bundle"
#define HealthBundle            @"HealthComps.bundle"

#define BundleFile(bundle,path)  [[[NSBundle mainBundle] pathForResource:bundle ofType:nil] stringByAppendingString:path]
#define BundleImage(bundle,path) [UIImage imageWithContentsOfFile:BundleFile(bundle,path)]

//读取bundle文件里边的图片
#define efImageFromBundleWithPathAndType(bundleName,path,type)  [UIImage imageWithContentsOfFile:[[[NSBundle mainBundle] resourcePath] stringByAppendingPathComponent:[NSString stringWithFormat:@"%@%@.%@",bundleName,path,type]]]

#define chatImage(path) efImageFromBundleWithPathAndType([ChatImgBundle stringByAppendingString:@"/"],path,@"png")

//根据名称拼接资源文件中的图片路径
#define IMAGEPATH_FROMRESOURCE(IMAGENAME) [NSString stringWithFormat:@"%@/Documents/%@/Image/%@",NSHomeDirectory(),[EnvironmentVariable getVersionPath],IMAGENAME]

#define EF_CUSTOM_COLOR_STRING [EnvironmentVariable getPropertyForKey:@"customColor" WithDefaultValue:nil]

#define EF_CUSTOM_COLOR_ARRAY [EF_CUSTOM_COLOR_STRING componentsSeparatedByString:@","]

#define EF_RED_COLOR EF_CUSTOM_COLOR_STRING?RGBA([EF_CUSTOM_COLOR_ARRAY[0] integerValue], [EF_CUSTOM_COLOR_ARRAY[1] integerValue], [EF_CUSTOM_COLOR_ARRAY[2] integerValue], [EF_CUSTOM_COLOR_ARRAY[3] floatValue]):EF_OLD_RED_COLOR


////////////////////////////微信////////////////////////////

/////////////////////////// 系统单例(可能非单例)名称简写宏 /////////////////////////
/////////////////////////// 系统单例(可能非单例)名称简写宏 /////////////////////////
#define APPLICATION        [UIApplication sharedApplication]
#define KEYWINDOW          [UIApplication sharedApplication].keyWindow
#define APPDELEGATE        [UIApplication sharedApplication].delegate
#define USERDEFAULT        [NSUserDefaults standardUserDefaults]
#define NOTIFICATIONCENTER [NSNotificationCenter defaultCenter]
#define HTTPCOOKIESTORAGE  [NSHTTPCookieStorage sharedHTTPCookieStorage]
#define MAINBUNDLE         [NSBundle mainBundle]
#define CURRENTDEVICE      [UIDevice currentDevice]
//APP版本号
#define APP_VERSION [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]
//系统版本号
#define SYSTEM_VERSION [[UIDevice currentDevice] systemVersion]
//获取当前语言
#define CURRENT_LANGUAGE ([[NSLocale preferredLanguages] objectAtIndex:0])
//判断是否为iPhone
#define IsIPhone (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
//判断是否为iPad
#define IsIPad (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
/////////////////////////// 系统单例(可能非单例)名称简写宏 /////////////////////////
/////////////////////////// 系统单例(可能非单例)名称简写宏 /////////////////////////

//////////////////////////// 判空处理 ///////////////////////////////
//字符串是否为空
#define StringIsEmpty(str) ([str isKindOfClass:[NSNull class]] || str == nil || [str isEqualToString:@"(null)"] || [str length] < 1 ? YES : NO )
//数组是否为空
#define ArrayIsEmpty(array) (array == nil || [array isKindOfClass:[NSNull class]] || array.count == 0)
//字典是否为空
#define DictionaryIsEmpty(dict) (dict == nil || [dict isKindOfClass:[NSNull class]] || dict.allKeys == 0)
//是否是空对象
#define ObjectIsEmpty(_object) (_object == nil \
|| [_object isKindOfClass:[NSNull class]] \
|| ([_object respondsToSelector:@selector(length)] && [(NSData *)_object length] == 0) \
|| ([_object respondsToSelector:@selector(count)] && [(NSArray *)_object count] == 0))
/// 空字符串
#define EmptyString @""
/// 空数组
#define EmptyArray @[]
/// 空字典
#define EmptyDictionary @{}
/// 安全字符串
#define SafeString(str) StringIsEmpty(str)?EmptyString:str
/// 安全数组
#define SafeArray(array) ArrayIsEmpty(array)?EmptyArray:array
/// 安全字典
#define SafeDictionary(dict) DictionaryIsEmpty(dict)?:EmptyDictionary:dict
/// 数值转字符串
#define NumberToString(i) [@(i) stringValue]
//////////////////////////// 判空处理 ///////////////////////////////


#define IOS8 ([[UIDevice currentDevice].systemVersion doubleValue] >= 8.0 && [[UIDevice currentDevice].systemVersion doubleValue] < 9.0)
#define IOS8_10 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0 && [[UIDevice currentDevice].systemVersion doubleValue] < 10.0)
#define IOS9 ([[UIDevice currentDevice].systemVersion doubleValue] >= 9.0 && [[UIDevice currentDevice].systemVersion doubleValue] < 10.0)
#define IOS10 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 10.0)
#define iOS_VERSION  [[[UIDevice currentDevice] systemVersion] floatValue]

////////////////////////////本机IP////////////////////////////
#define localhost         @"192.168.3.74"
//默认头像  URL
#define defaultAvatar @"https://panserver.solarsource.cn/panserver/files/c64b5061-77dc-45af-b91b-e5e06d401347/download"
//默认头像  图片
#define USER_AVATAR efImageFromBundleWithPathAndType(ChatImgBundle, @"/image_chatDetail/chat_img_CDHeaderTableViewCell_userHeaderImage", @"png")
#define GROUP_AVATAR efImageFromBundleWithPathAndType(ChatImgBundle, @"/image_chatGroup/groupChatHeader", @"png")

//占位图
#define   placeHolderImage     efImageFromBundleWithPathAndType(ChatImgBundle,@"/image_common/placeholder",@"png")
//任务中心消息头像
#define   taskCenterIcon  @"http://11.11.48.15:8081/panserver/files/fb323f11-cbf6-4fd6-94b5-594c080e9ba8/download"

#define kAVATAR_STYLE   @"avatarStyle"
#define kBUBBLE_STYLE   @"bubbleStyle"
#define kINCOMING       @"incoming"
#define kOUTGOING       @"outgoing"

#define kBUBBLE      @"bubble"
#define kAVATAR      @"avatar"
#define kANIMATION   @"animation"
#define kEMOJI       @"emoji"

#define kBarItemContentPanelHeight  216

// 是否是IPhoneX
#define  isIPhoneX [[EnvironmentVariable getPropertyForKey:@"isIpx" WithDefaultValue:@""] boolValue]

// 小屏幕IPhone
#define isSamllScreenIPhone SCREEN_WIDTH <= 320.f
#define valueForScreenSize(smallValue,bigValue) isSamllScreenIPhone?smallValue:bigValue

////////////////////////////常用回调block函数////////////////////////////
typedef void(^VoidBlock)(void);
typedef void(^IdBlock)(id sender);
typedef void(^BoolBlock)(BOOL sender);
typedef void(^FloatBlock)(CGFloat sender);
typedef void(^NumberBlock)(NSInteger sender);
typedef void(^StringBlock)(NSString *sender);
typedef void(^ArrayBlock)(NSArray *sender);
typedef void(^DictionaryBlock)(NSDictionary *sender);
typedef void(^ProgressBlock)(NSProgress *sender);
typedef void(^SuccessBlock)(id result);
typedef void(^FailBlock)(NSString* errorDescription);

/// 聊天界面显示的系统消息的类型
#define TYPE_NOTIFY @"notification" // 通知
#define TYPE_NOTIFY_RECEIVED_FILE @"receivedFile" // 接收文件
#define TYPE_NOTIFY_RECALLMESSAGE @"recallMessage" // 撤回消息


///新闻相关
#define NEWS_MAINURL   [ReadPlistFile readValueFromPlistName:@"OptionSetting.plist" valueKey:@"NewsBaseUrl"]
#define NEWS_CONTENT(contentID)   [NSString stringWithFormat:@"%@/news/%@",NEWS_MAINURL,contentID]
#define NEWS_CONTENTV2(contentID)   [NSString stringWithFormat:@"%@/newsv2/%@",NEWS_MAINURL,contentID]
#define NEWS_PUSH      @"news"

// 接口相关 11
#define API_MALLORDER_APP_ID @"2"
#define API_MALLORDER_APP_KEY @"d80173c2-dd26-4e5a-a352-97fb238d1154"
#define API_MALLORDER_APP_SECRET @"B55FB310A2F66C6D51BBBB4BEFE9914A6E1D1F3B"


//User相关
#define IM_USERID                   [EnvironmentVariable getIMUserID]
#define IM_USERID_INTEGER           [[EnvironmentVariable getIMUserID] integerValue]

#define IM_PASSWORD                 [EnvironmentVariable getIMPassword]
#define IM_PASSWORD_INTEGER         [[EnvironmentVariable getIMPassword]integerValue]

//默认颜色设置
#define defaultColorFor(value,defaultColor) value?value:defaultColor

// 链接正则
#define kLinkRegular @"((ht|f)tp(s?)\\:\\/\\/|[0-9a-zA-Z]+\\.)[0-9a-zA-Z]([-.\\w]*[0-9a-zA-Z])*(:(0-9)*)*(\\/?)([a-zA-Z0-9\\-\\.\\?\\,\\'\\/\\\\\\+&amp;%\\$#=!_\\*]*)?"
    //@"((http[s]{0,1}|ftp)://[a-zA-Z0-9\\.\\-]+\\.([a-zA-Z]{2,4})(:\\d+)?(/[a-zA-Z0-9\\.\\-~!@#$%^&*+?:_/=<>]*)?)|(www.[a-zA-Z0-9\\.\\-]+\\.([a-zA-Z]{2,4})(:\\d+)?(/[a-zA-Z0-9\\.\\-~!@#$%^&*+?:_/=<>]*)?)"

#define kNumRegular @"[0-9]"

// 获取当前bundle id
#define currentBundleId [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleIdentifier"]

// 行情
#define kCurrentCurrencyType @"currentCurrencyType"
