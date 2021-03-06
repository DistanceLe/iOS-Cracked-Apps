//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSMutableArray, NSString, UIColor;

@interface MQQScreenSaverWaterView : UIView <CAAnimationDelegate>
{
    double _startBeginX;
    double _endBeginX;
    double _waveWidth;
    double _waveHeightInterval;
    double _minWaveHeight;
    double _waveSpeed;
    UIColor *_waterColor;
    NSMutableArray *_startPoints;
    NSMutableArray *_endPoints;
    long long _waveHeightLevel;
    long long _currentWaveHeightLevel;
    double _animationStartTime;
    _Bool _isAnimating;
}

+ (Class)layerClass;
@property(nonatomic) long long waveHeightLevel; // @synthesize waveHeightLevel=_waveHeightLevel;
@property(nonatomic) double waveHeightInterval; // @synthesize waveHeightInterval=_waveHeightInterval;
@property(nonatomic) double minWaveHeight; // @synthesize minWaveHeight=_minWaveHeight;
@property(nonatomic) double waveWidth; // @synthesize waveWidth=_waveWidth;
@property(retain, nonatomic) UIColor *waterColor; // @synthesize waterColor=_waterColor;
@property(nonatomic) double waveSpeed; // @synthesize waveSpeed=_waveSpeed;
- (double)waveHeightForWaveHeightLevel:(double)arg1;
- (void)setPath:(struct CGPath *)arg1 withPoints:(id)arg2;
- (void)updatePoints;
- (void)waterAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (double)waveHeightForX:(double)arg1;
- (double)waveAngleForX:(double)arg1;
- (void)stopWaterAnimation;
- (void)startWaterAnimation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

