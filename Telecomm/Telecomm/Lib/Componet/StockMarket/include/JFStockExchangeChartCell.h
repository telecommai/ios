//
//  JFStockExchangeChartCell.h
//  WalletManager
//
//  Created by 夏祥可 on 2018/11/12.
//  Copyright © 2018 pansoft. All rights reserved.
//  股票行情 交易所 chart cell

#import <UIKit/UIKit.h>
#import "JFStockExchangeModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface JFStockExchangeChartCell : UITableViewCell

//数据源
@property (nonatomic, strong) NSArray <JFStockExchangeChartModel *>*chartDataArray;

@end

NS_ASSUME_NONNULL_END

/*
 
 funds =     (
 {
 "_id" =             {
 "$oid" = 5b67cc4ef09a39ae128b45cb;
 };
 incomes = "246747766.32872";
 "net_flow_type" = 1;
 "net_inflows" = "84371484.146677";
 outputs = "162376282.18205";
 site = bithumb;
 type = today;
 },
 {
 "_id" =             {
 "$oid" = 5b864053f09a3905248b4569;
 };
 incomes = 0;
 "net_flow_type" = "-1";
 "net_inflows" = "31844857.004019";
 outputs = "31844857.004019";
 site = mxc;
 type = today;
 },
 {
 "_id" =             {
 "$oid" = 5b67cc41f09a39ae128b45ad;
 };
 incomes = 0;
 "net_flow_type" = "-1";
 "net_inflows" = "29764662.973807";
 outputs = "29764662.973807";
 site = kraken;
 type = today;
 },
 {
 "_id" =             {
 "$oid" = 5b67cc4cf09a39ae128b45c7;
 };
 incomes = "100866457.72983";
 "net_flow_type" = "-1";
 "net_inflows" = "19190749.225018";
 outputs = "120057206.95485";
 site = bitfinex;
 type = today;
 },
 {
 "_id" =             {
 "$oid" = 5b67cc46f09a39ae128b45b8;
 };
 incomes = "57629644.581828";
 "net_flow_type" = "-1";
 "net_inflows" = "12315903.193409";
 outputs = "69945547.77523801";
 site = zb;
 type = today;
 },
 {
 "_id" =             {
 "$oid" = 5b67cc54f09a39ae128b45e1;
 };
 incomes = "61050803.417507";
 "net_flow_type" = "-1";
 "net_inflows" = "9206561.030319201";
 outputs = "70257364.447826";
 site = bibox;
 type = today;
 },
 {
 "_id" =             {
 "$oid" = 5b864034f09a3905248b4568;
 };
 incomes = 0;
 "net_flow_type" = "-1";
 "net_inflows" = "7196040.6579271";
 outputs = "7196040.6579271";
 site = bitinfi;
 type = today;
 }
 );
 "volume_next_page" = 2;
 }
 */
