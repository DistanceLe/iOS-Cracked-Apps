//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPMoviePlayerViewController.h"

@class MPMoviePlayerController;

@interface QQSMItemVideoPlayerViewController : MPMoviePlayerViewController
{
    long long _playbackState;
    unsigned long long _loadState;
    int _networkState;
    int _originalNetworkState;
    MPMoviePlayerController *_playerController;
}

@property(retain, nonatomic) MPMoviePlayerController *playerController; // @synthesize playerController=_playerController;
- (void)onVideoReqNotification;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleMSFNetworkApnStateNotification:(id)arg1;
- (void)checkVideoIsNormal;
- (void)checkVideoIsStalled;
- (void)loadStateChanged:(id)arg1;
- (void)playDidFinish:(id)arg1;
- (void)playStateChanged:(id)arg1;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithUrl:(id)arg1;

@end

