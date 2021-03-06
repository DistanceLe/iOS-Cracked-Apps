//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAsset, NSArray, NSDate, NSError, QQSelfPlayerController;

@interface QQSelfPlayerItem : NSObject
{
    QQSelfPlayerController *_mQQSelfPlayer;
    int _mDecoderType;
    BOOL _playbackBufferFull;
    BOOL _playbackBufferEmpty;
    BOOL _playbackLikelyToKeepUp;
    NSArray *_loadedTimeRanges;
    long long _status;
    AVAsset *_asset;
    NSDate *_currentDate;
    QQSelfPlayerController *_avPlayer;
    long long _errorMsg;
    struct CGSize _presentationSize;
    CDStruct_1b6d18a9 _duration;
    CDStruct_1b6d18a9 _currentTime;
}

@property(readonly, nonatomic) long long errorMsg; // @synthesize errorMsg=_errorMsg;
@property(retain, nonatomic) QQSelfPlayerController *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(readonly, retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentTime; // @synthesize currentTime=_currentTime;
@property(retain, nonatomic) NSArray *loadedTimeRanges; // @synthesize loadedTimeRanges=_loadedTimeRanges;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resetQQSelfPlayerValue;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
@property(readonly, nonatomic, getter=isPlaybackBufferFull) BOOL playbackBufferFull; // @synthesize playbackBufferFull=_playbackBufferFull;
@property(readonly, nonatomic, getter=isPlaybackBufferEmpty) BOOL playbackBufferEmpty; // @synthesize playbackBufferEmpty=_playbackBufferEmpty;
@property(readonly, nonatomic, getter=isPlaybackLikelyToKeepUp) BOOL playbackLikelyToKeepUp; // @synthesize playbackLikelyToKeepUp=_playbackLikelyToKeepUp;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) struct CGSize presentationSize; // @synthesize presentationSize=_presentationSize;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
- (void)addOutput:(id)arg1;
- (void)removeOutput:(id)arg1;
- (id)accessLog;
- (id)errorLog;
- (int)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (int)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)cancelPendingSeeks;
- (id)initWithAsset:(id)arg1;
- (void)updateURLArray:(id)arg1;
- (struct __CVBuffer *)copyPixelBufferForItemTime:(CDStruct_1b6d18a9)arg1;
- (void)setURLArray:(id)arg1 contentTimes:(id)arg2;
- (void)setPlayerInputParam:(int)arg1 playeravformat:(int)arg2 playertype:(int)arg3 decodemode:(int)arg4 startposition:(long long)arg5 endposition:(long long)arg6 definition:(int)arg7;
- (void)setPlayerParamDict:(id)arg1;
- (id)initWithURL:(id)arg1 playerType:(int)arg2;

@end

