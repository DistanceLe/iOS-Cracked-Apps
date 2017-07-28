//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBCrashGuardLog, TBZombieGuardService;

@interface TBCrashGuardService : NSObject
{
    TBCrashGuardLog *_crashGuardLog;
    TBZombieGuardService *_zombieGuardService;
}

+ (id)shareInstance;
@property(retain, nonatomic) TBZombieGuardService *zombieGuardService; // @synthesize zombieGuardService=_zombieGuardService;
@property(retain, nonatomic) TBCrashGuardLog *crashGuardLog; // @synthesize crashGuardLog=_crashGuardLog;
- (void).cxx_destruct;
- (void)setupWebViewCrashGurad;
- (void)setupNSKeyedUnarchiverGuard;
- (void)setupNSTimerGuard;
- (void)setupNSAttributedStringGuard;
- (void)setupNSStringGuard;
- (void)setupNotificationGuard;
- (void)setupContainerGuard;
- (void)setupObjectGuard;
- (void)setupKVOCrashGurad;
- (_Bool)isReleaseVersion;
- (_Bool)isEnableZombieGuard;
- (_Bool)isEnableCrashGuard;
- (void)setupNanoFreeCrashFix;
- (_Bool)isEnableNanoFreeFix;
- (void)setGetCallStackBlock:(CDUnknownBlockType)arg1;
- (void)setHandleLogBlock:(CDUnknownBlockType)arg1;
- (void)startCrashGuardService:(unsigned long long)arg1;
- (id)init;

@end
