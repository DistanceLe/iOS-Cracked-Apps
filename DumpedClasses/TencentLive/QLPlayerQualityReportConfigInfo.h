//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLPlayerQualityReportConfigInfoDelegate.h"

@class NSString;

@interface QLPlayerQualityReportConfigInfo : NSObject <QLPlayerQualityReportConfigInfoDelegate>
{
}

+ (long long)minBufferingReportTime;
- (long long)getWifiSignalStrength;
- (long long)confid;
- (id)playerver;
- (id)p2pver;
- (long long)platform;
- (id)appver;
- (id)osver;
- (id)resolution;
- (id)device;
- (long long)speed;
- (long long)network;
- (long long)sstrength;
- (long long)vip;
- (double)latitude;
- (double)longitude;
- (id)guid;
- (long long)loginType;
- (id)loginEx;
- (id)loginId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

