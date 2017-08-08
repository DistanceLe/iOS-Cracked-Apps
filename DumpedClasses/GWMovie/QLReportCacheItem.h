//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface QLReportCacheItem : NSObject <NSCoding>
{
    short _playNum;
    short _networkAvailable;
    short _networkType;
    short _isClickSkipAd;
    short _isClickAdDetail;
    short _playMode;
    short _firstCacheSpeed;
    int _programType;
    int _playErrroNum;
    int _livePlayErrorNum;
    int _dragCount;
    long long _durationFirstLoad;
    NSString *_strPlayID;
    NSString *_strChannelID;
    long long _playDuration;
    NSString *_strPlayAddress;
    long long _duration;
    long long _playStep;
    long long _adPlayStep;
    long long _playStatus;
    long long _geturlResult;
    long long _adDuration;
    long long _adPlayDuration;
    struct timeval _timeClickPlay;
}

@property long long adPlayDuration; // @synthesize adPlayDuration=_adPlayDuration;
@property long long adDuration; // @synthesize adDuration=_adDuration;
@property short firstCacheSpeed; // @synthesize firstCacheSpeed=_firstCacheSpeed;
@property short playMode; // @synthesize playMode=_playMode;
@property short isClickAdDetail; // @synthesize isClickAdDetail=_isClickAdDetail;
@property short isClickSkipAd; // @synthesize isClickSkipAd=_isClickSkipAd;
@property short networkType; // @synthesize networkType=_networkType;
@property long long geturlResult; // @synthesize geturlResult=_geturlResult;
@property long long playStatus; // @synthesize playStatus=_playStatus;
@property long long adPlayStep; // @synthesize adPlayStep=_adPlayStep;
@property long long playStep; // @synthesize playStep=_playStep;
@property long long duration; // @synthesize duration=_duration;
@property(copy) NSString *strPlayAddress; // @synthesize strPlayAddress=_strPlayAddress;
@property int dragCount; // @synthesize dragCount=_dragCount;
@property long long playDuration; // @synthesize playDuration=_playDuration;
@property short networkAvailable; // @synthesize networkAvailable=_networkAvailable;
@property int livePlayErrorNum; // @synthesize livePlayErrorNum=_livePlayErrorNum;
@property int playErrroNum; // @synthesize playErrroNum=_playErrroNum;
@property short playNum; // @synthesize playNum=_playNum;
@property int programType; // @synthesize programType=_programType;
@property(copy) NSString *strChannelID; // @synthesize strChannelID=_strChannelID;
@property(copy) NSString *strPlayID; // @synthesize strPlayID=_strPlayID;
@property long long durationFirstLoad; // @synthesize durationFirstLoad=_durationFirstLoad;
@property struct timeval timeClickPlay; // @synthesize timeClickPlay=_timeClickPlay;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;

@end
