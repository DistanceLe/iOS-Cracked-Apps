//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class FBCircleLinearGradientLayer, NSMutableArray;

@interface FBLocationBeaconLayer : CALayer
{
    FBCircleLinearGradientLayer *_centerDotGradientLayer;
    NSMutableArray *_ringLayers;
    _Bool _synchronized;
    float _radius;
    struct CGGradient *_dotGradient;
    struct CGColor *_ringColor;
    unsigned long long _ringCount;
}

@property(nonatomic) _Bool synchronized; // @synthesize synchronized=_synchronized;
@property(nonatomic) unsigned long long ringCount; // @synthesize ringCount=_ringCount;
@property(nonatomic) struct CGColor *ringColor; // @synthesize ringColor=_ringColor;
@property(nonatomic) struct CGGradient *dotGradient; // @synthesize dotGradient=_dotGradient;
@property(nonatomic) float radius; // @synthesize radius=_radius;
- (void).cxx_destruct;
- (void)setContentsScale:(double)arg1;
- (void)invalidateAnimations;
- (void)removeAnimations;
- (void)scheduleAnimations;
- (id)makeRingOpacityAnimation;
- (id)makeRingLineWidthAnimation;
- (id)makeRingPathAnimation;
- (void)invalidateMultitaskingObservers;
- (void)handleEnterForeground:(id)arg1;
- (void)handleEnterBackground:(id)arg1;
- (void)observeMultitaskingState;
- (void)spawnRings;
- (void)createCenterDotLayer;
- (void)layoutSublayers;
- (void)dealloc;
- (id)init;

@end

