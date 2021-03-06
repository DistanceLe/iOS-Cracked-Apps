//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTEventEmitter.h"

#import "RCTBridgeModule.h"
#import "RCTValueAnimatedNodeObserver.h"

@class CADisplayLink, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface RCTNativeAnimatedModule : RCTEventEmitter <RCTBridgeModule, RCTValueAnimatedNodeObserver>
{
    NSMutableDictionary *_animationNodes;
    NSMutableDictionary *_animationDrivers;
    NSMutableSet *_activeAnimations;
    NSMutableSet *_finishedAnimations;
    NSMutableSet *_updatedValueNodes;
    NSMutableSet *_propAnimationNodes;
    CADisplayLink *_displayLink;
}

+ (id)__rct_export__21710;
+ (id)__rct_export__2099;
+ (id)__rct_export__1958;
+ (id)__rct_export__1877;
+ (id)__rct_export__1786;
+ (id)__rct_export__1655;
+ (id)__rct_export__1534;
+ (id)__rct_export__1243;
+ (id)__rct_export__1072;
+ (id)__rct_export__921;
+ (id)__rct_export__610;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (void)updateAnimations;
- (void)startAnimation;
- (void)animatedNode:(id)arg1 didUpdateValue:(double)arg2;
- (void)stopListeningToAnimatedNodeValue:(id)arg1;
- (void)startListeningToAnimatedNodeValue:(id)arg1;
- (void)dropAnimatedNode:(id)arg1;
- (void)disconnectAnimatedNodeFromView:(id)arg1 viewTag:(id)arg2;
- (void)connectAnimatedNodeToView:(id)arg1 viewTag:(id)arg2;
- (void)setAnimatedNodeValue:(id)arg1 value:(id)arg2;
- (void)stopAnimation:(id)arg1;
- (void)startAnimatingNode:(id)arg1 nodeTag:(id)arg2 config:(id)arg3 endCallback:(CDUnknownBlockType)arg4;
- (void)disconnectAnimatedNodes:(id)arg1 childTag:(id)arg2;
- (void)connectAnimatedNodes:(id)arg1 childTag:(id)arg2;
- (void)createAnimatedNode:(id)arg1 config:(id)arg2;
- (id)supportedEvents;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
- (void)setBridge:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

