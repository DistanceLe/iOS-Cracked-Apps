//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBMLocationUpdateListener-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "ZRTariffedUxSentryDelegate-Protocol.h"

@class FBMLocationUpdater, NSMutableSet, NSString, UIAlertView, ZRTariffedUxSentry;

@interface FBMLocationUpdateRequestHandler : NSObject <ZRTariffedUxSentryDelegate, UIAlertViewDelegate, FBMLocationUpdateListener>
{
    ZRTariffedUxSentry *_sentry;
    _Bool _isRequestingLocation;
    UIAlertView *_locationAlertView;
    FBMLocationUpdater *_locationUpdater;
    NSMutableSet *_pendingRequests;
}

@property(retain, nonatomic) NSMutableSet *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(retain, nonatomic) FBMLocationUpdater *locationUpdater; // @synthesize locationUpdater=_locationUpdater;
@property(retain, nonatomic) UIAlertView *locationAlertView; // @synthesize locationAlertView=_locationAlertView;
- (void).cxx_destruct;
- (void)_performLocationCompletionBlockForRequest:(id)arg1 withLocation:(id)arg2 error:(id)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)_postAlertDialogForLocationPermissions;
- (void)_reset;
- (void)_failRequest:(id)arg1 withError:(id)arg2;
- (void)_failAllRequestsWithError:(id)arg1;
- (void)_updateAllRequestsWithLocation:(id)arg1;
- (void)_updateAllRequestsWithAuthorizationStatus:(int)arg1;
- (void)_fulfillAllRequestsWithLocation:(id)arg1;
- (void)locationUpdater:(id)arg1 didReceiveAuthorizationStatusChange:(int)arg2;
- (void)locationUpdater:(id)arg1 didFailToReceiveLocationUpdate:(id)arg2;
- (void)locationUpdater:(id)arg1 didReceiveLastKnownGoodLocation:(id)arg2;
- (void)locationUpdater:(id)arg1 didReceiveLocationUpdate:(id)arg2;
- (void)locationUpdater:(id)arg1 didReceiveLatestInaccurateLocationUpdate:(id)arg2;
- (void)nonZeroRatedSessionUxMustDeactivate:(id)arg1;
- (void)nonZeroRatedSessionDidFailToStart:(id)arg1;
- (void)nonZeroRatedSessionUxMayActivate:(id)arg1;
- (void)_beginListeningIfSessionIsValid;
- (_Bool)cancelRequest:(id)arg1;
- (id)requestLocation:(id)arg1 success:(CDUnknownBlockType)arg2 progress:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4 authorizationStatus:(CDUnknownBlockType)arg5 queue:(id)arg6;
- (void)onApplicationWillEnterForeground:(id)arg1;
- (void)dealloc;
- (id)initWithZRFence:(id)arg1 nonZeroRatedUxSessionManager:(id)arg2 locationUpdater:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

