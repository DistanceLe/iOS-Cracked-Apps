//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QYPPVideoUtil : NSObject
{
}

+ (_Bool)isSameVideo:(id)arg1 dic:(id)arg2;
+ (void)setShowDone4TipOnce;
+ (_Bool)isShown4TipOnce;
+ (_Bool)isShowTipOnce;
+ (_Bool)hasNextVideo:(id)arg1 relateVideos:(id)arg2;
+ (id)toStr:(id)arg1;
+ (id)checkProperty:(id)arg1;
+ (_Bool)isAutoPlay:(unsigned long long)arg1;
+ (_Bool)isAutoSeriesPlay:(unsigned long long)arg1;
+ (_Bool)isFakeFeed4New:(id)arg1;
+ (_Bool)isFakeFeed:(id)arg1;
+ (_Bool)isVertical;
+ (_Bool)verifyPlayData4New:(id)arg1;
+ (_Bool)verifyPlayData:(id)arg1;
+ (int)verifyAndRefreshPlayData4New:(id)arg1;
+ (int)verifyAndRefreshPlayData:(id)arg1;
+ (_Bool)canPlay4New:(id)arg1;
+ (_Bool)canPlay:(id)arg1;
+ (void)checkAndPostNetwork;

@end

