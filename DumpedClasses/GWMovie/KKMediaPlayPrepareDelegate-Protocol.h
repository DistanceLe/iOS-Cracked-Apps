//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KKMediaPlayInfo, KKVideoInfo, NSError, NSString;

@protocol KKMediaPlayPrepareDelegate <NSObject>
- (void)onVideoNoPurchaseForPaidMedia:(KKMediaPlayInfo *)arg1 withGetProVInfo:(unsigned long long)arg2;
- (void)onClarityInfoUpdated;
- (_Bool)isPlayHDMI;
- (_Bool)isPlayP2PShouldAbort;
- (_Bool)isPlayP2PFailed;
- (void)onVideoIDPrepared:(KKVideoInfo *)arg1;
- (_Bool)isNeedDetailData;
- (void)onVideoDetailDataReady;
- (void)onVideoInfoUpdated:(int)arg1;
- (void)onVideoInfoPrepareFailed:(NSError *)arg1;
- (void)onVideoInfoPrepared:(KKMediaPlayInfo *)arg1;
- (long long)currentInterfaceType;
- (NSString *)currentVideoFormat;
- (NSString *)playerVersion;
@end

