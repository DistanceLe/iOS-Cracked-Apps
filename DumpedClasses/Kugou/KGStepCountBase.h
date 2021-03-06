//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, KGRunInfo, KGRunLocationManager, NSArray, NSDate;

@interface KGStepCountBase : NSObject
{
    NSDate *_startDate;
    NSDate *_reStartDate;
    NSDate *_pauseDate;
    KGRunInfo *_runInfo;
    KGRunLocationManager *_runLocationManager;
    long long _runStatus;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _updateLocationInfo;
    CLLocation *_firstLocation;
}

+ (_Bool)isSupport;
@property(readonly, nonatomic) CLLocation *firstLocation; // @synthesize firstLocation=_firstLocation;
@property(copy, nonatomic) CDUnknownBlockType updateLocationInfo; // @synthesize updateLocationInfo=_updateLocationInfo;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(readonly, nonatomic) long long runStatus; // @synthesize runStatus=_runStatus;
@property(retain, nonatomic) KGRunLocationManager *runLocationManager; // @synthesize runLocationManager=_runLocationManager;
@property(retain, nonatomic) KGRunInfo *runInfo; // @synthesize runInfo=_runInfo;
@property(retain, nonatomic) NSDate *pauseDate; // @synthesize pauseDate=_pauseDate;
@property(retain, nonatomic) NSDate *reStartDate; // @synthesize reStartDate=_reStartDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (void)checkStepCountAuthorize:(CDUnknownBlockType)arg1;
- (void)requestLocationAuthorize;
- (void)checkLocationAuthorize:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *arrLocationInfo;
- (id)utcToSysDate:(id)arg1;
- (id)sysToUtcDate:(id)arg1;
- (id)nowSysDate;
- (double)calGpsDistanceWithDate:(id)arg1;
- (void)calculateSpeed:(id)arg1 withStepInfos:(id)arg2 withResultBlock:(CDUnknownBlockType)arg3;
- (id)distanceManager;
- (void)updateLastSportTime;
- (double)stepLength;
- (void)stopRun;
- (void)reStartRun;
- (void)pauseRun;
- (void)startRun;
- (void)openLocationService;
- (void)onBecomeActive;
- (void)onEnterBack;
- (void)dealloc;
- (void)regNotification;
- (id)init;

@end

