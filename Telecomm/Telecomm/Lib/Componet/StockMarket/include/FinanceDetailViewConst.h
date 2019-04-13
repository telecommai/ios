//
//  Header.h
//  WalletManager
//
//  Created by YRH on 2018/11/5.
//  Copyright © 2018 pansoft. All rights reserved.
//

#ifndef Header_h
#define Header_h

#import "ThemeKit.h"
#import "Masonry.h"
#import "Constant.h"

#define kStockMarketBundle @"StockMarket.bundle"
#define kBTCMarketGereralInfoViewH  123.0f
#define kBTCMarketSelectTimeViewH   40.0f
#define kBTCMarketSelectDetailTimeViewH 65.5f
#define kBTCMarketKLineViewH (kBTCMarketSelectTimeViewH + kBTCMarketKLineView1H + kBTCMarketKLineView2H + kBTCDepthHeightTitleH + kBTCDepthHeight)

#define kBTCMarketKLineView1H       240.0f
#define kBTCMarketKLineView2H       70.0f

#define kBTCDepthHeightTitleH       40.0f
#define kBTCDepthHeight             360.0f
#define kBTCBookTitleH              40.0f
#define kBTCBookViewH               283.0f
#define kBTCBookAllH          (kBTCBookViewH + kBTCBookTitleH)
#define kBTCBookTableViewTitleH     40.0f
#define kBTCBookTableViewH          200.0f
#define Main_Screen_Height      [[UIScreen mainScreen] bounds].size.height
#define Main_Screen_Width       [[UIScreen mainScreen] bounds].size.width

#define kSelfSelectNeedRefresh @"selfSelectNeedRefresh"

// 无数据
#define kLineNoDataText @"未能获取当前市场数据"
#define KNoDataTextColor [UIColor theme_colorForKey:@"NoDataTextColor" from:@"StockMarket"]()
#define kNoDataTextFont [UIFont systemFontOfSize:14]

#define kAxisLineWidth 1.1 / [UIScreen mainScreen].scale

// 蜡烛图每支详情介绍数据个数
#define kLineValueViewNum 5
#define kLineValueViewWidth 95
// 显示蜡烛图每支详情的视图颜色
#define kCandleStickInfoViewColor [UIColor colorWithWhite:0.0f alpha:0.5]

// 详情scrollview背景颜色 1c1c28
#define kStockBackgroundColor [UIColor theme_colorForKey:@"viewContentColor"]()
// 详情视图主题背景色 21212d
#define kStockThemeColor [UIColor theme_colorForKey:@"viewBackgroud"]()
#define kStockThemeTextColor [UIColor theme_colorForKey:@"labelTextColor" from:@"chat"]()

// 股票行情名称颜色
#define kStockMarketNameColor [UIColor whiteColor]
#define kStockMarketTargetKeyColor kStockThemeTextColor //[UIColor grayColor]
#define kStockMarketTargetValueColor [UIColor whiteColor]
#define kStockMarketTargetFont [UIFont systemFontOfSize:12]

// 选中的字体颜色 4b92eb
#define kStockSelectedTextColor [UIColor theme_colorForKey:@"selectButton" from:@"slider"]()//[UIColor colorWithRed:0.294 green:0.573 blue:0.922 alpha:1.00]
// 默认字体颜色
#define kStockTextColor kStockThemeTextColor //[UIColor grayColor]
#define kLightStoclTextColor [UIColor lightGrayColor]
#define kWhiteTextColor [UIColor whiteColor]

// 列表中 涨（绿色）跌（红色）颜色
#define kListRoseColor RGB(7, 170, 49)
#define kListDownColor RGB(230, 53, 53)
// 列表侧滑按钮颜色
#define kAddActionColor [UIColor theme_colorForKey:@"selectButton" from:@"slider"]()
#define kDeleteActionColor [UIColor redColor]
// 加入自选、删除自选
#define kAddSelfSelectHint @"加入自选"
#define kDeleteSelfSelectHint @"删除自选"

// 弹出选项框的背景色
#define kStockCheckBoxColor [UIColor blackColor]
// 分割线颜色
#define kSeparatorLineColor RGBCOLOR(135, 135, 135)

// 颜色(RGB)
#define RGBCOLOR(r, g, b)       [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]
#define RGBACOLOR(r, g, b, a)   [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]

// 行情视图颜色 RGBCOLOR(39, 39, 39)
#define kStockMarketViewColor kStockThemeColor
// K线图x轴坐标颜色
#define KLineXAxisLabelColor kStockThemeTextColor//RGBCOLOR(135, 135, 135)
// K线图y轴坐标颜色
#define KLineYAxisLabelColor kStockThemeTextColor//RGBCOLOR(135, 135, 135)
// 分时线颜色
#define kTimeShareLineColor [UIColor grayColor]
// 灰色
#define KLineGrayColor [UIColor grayColor]
// k线图MA5颜色 4d8cd1
#define KLineMA5Color [UIColor colorWithRed:0.302 green:0.549 blue:0.820 alpha:1.00]
// k线图MA10颜色 b25da5
#define KLineMA10Color [UIColor colorWithRed:0.698 green:0.365 blue:0.647 alpha:1.00]
// k线图MA20颜色 bb825c
#define KLineMA20Color [UIColor colorWithRed:0.733 green:0.510 blue:0.361 alpha:1.00]
// k线图MA60颜色 d7d85a
#define KLineMA60Color [UIColor colorWithRed:0.843 green:0.847 blue:0.353 alpha:1.00]
// K线图高亮十字定位坐标颜色
#define KLineHighlightColor [UIColor whiteColor]
// k线图蜡烛图阴影颜色
#define KLineShadowColor UIColor.darkGrayColor
// k线图 蜡烛图表示递减的颜色  fc5b5d
#define KLineDecreasingColor [UIColor colorWithRed:0.988 green:0.357 blue:0.365 alpha:1.00]
// k线图 暗色蜡烛图表示递减的颜色 973f4a
#define kDarkLineDecreasingColor [UIColor colorWithRed:0.592 green:0.247 blue:0.290 alpha:1.00]
// k线图 蜡烛图表示递增的颜色  1eaf7e
#define KLineIncreasingColor [UIColor colorWithRed:0.118 green:0.686 blue:0.494 alpha:1.00]
// k线图 暗色蜡烛图表示递增的颜色 24635c
#define kDarkLineIncreasingColor [UIColor colorWithRed:0.141 green:0.388 blue:0.361 alpha:1.00]
// k线图 蜡烛图表示中性的颜色
#define KLineNeutralColor UIColor.blueColor

// 柱状图收盘价高于或等于开盘价
#define kBarChartCloseNotLessOpen RGBCOLOR(118, 167, 1)
// 柱状图收盘价小于开盘价
#define kBarChartCloseLessOpen RGBCOLOR(221, 7, 113)

// 蜡烛图每支详情介绍字体颜色
#define kCandleStickValueTextColor [UIColor whiteColor]


typedef NS_ENUM(NSUInteger, KLineIndexType) {
    /// MA 移动平均线
    KLineIndexType_MA,
    /// BOLL 布林线
    KLineIndexType_BOLL,
    /// MACD 异同移动平均线
    KLineIndexType_MACD,
    /// KDJ 随机指标线
    KLineIndexType_KDJ
};

typedef NS_ENUM(NSUInteger, CoinShowType) {
    /// 人民币
    CoinShowType_CNY,
    /// 美元
    CoinShowType_USD,
    /// 原始值
    CoinShowType_Ori,
};

#endif /* Header_h */

