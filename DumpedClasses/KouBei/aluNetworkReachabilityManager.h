//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class aluReachability;

@interface aluNetworkReachabilityManager : NSObject
{
    aluReachability *_internetReachability;
    aluReachability *_wifiReachability;
    _Bool _isStarted;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)isNetWorkOK;
- (void)dealloc;
- (void)stop;
- (_Bool)start;
- (id)init;

@end

