//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol TTMonitorConfigurationProtocol <NSObject>
+ (_Bool)isEnabledForServiceType:(NSString *)arg1;
+ (_Bool)isEnabledForMetricsType:(NSString *)arg1;
+ (_Bool)isEnabledForLogType:(NSString *)arg1;
+ (void)tryFetchConfigWithForce:(_Bool)arg1;
+ (double)dnsReportInterval;
+ (NSArray *)dnsReportList;
+ (long long)reportPollingInterval;
+ (long long)onceReportMaxLogCount;
+ (long long)maxReportRetryCount;
+ (NSArray *)blackList;
+ (NSArray *)reportHosts;
- (void)tryFetchConfigWithForce:(_Bool)arg1;
@end

