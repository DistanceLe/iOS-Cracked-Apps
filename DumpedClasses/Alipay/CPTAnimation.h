//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSTimer;

@interface CPTAnimation : NSObject
{
    NSMutableArray *animationOperations;
    NSMutableArray *runningAnimationOperations;
    NSMutableArray *expiredAnimationOperations;
    NSTimer *timer;
    double timeOffset;
    int defaultAnimationCurve;
}

+ (SEL)setterFromProperty:(id)arg1;
+ (id)animate:(id)arg1 property:(id)arg2 period:(id)arg3 animationCurve:(int)arg4 delegate:(id)arg5;
+ (id)sharedInstance;
+ (id)animate:(id)arg1 property:(id)arg2 fromPlotRange:(id)arg3 toPlotRange:(id)arg4 duration:(double)arg5;
+ (id)animate:(id)arg1 property:(id)arg2 fromPlotRange:(id)arg3 toPlotRange:(id)arg4 duration:(double)arg5 animationCurve:(int)arg6 delegate:(id)arg7;
+ (id)animate:(id)arg1 property:(id)arg2 fromPlotRange:(id)arg3 toPlotRange:(id)arg4 duration:(double)arg5 withDelay:(double)arg6 animationCurve:(int)arg7 delegate:(id)arg8;
+ (id)animate:(id)arg1 property:(id)arg2 fromDecimal:(CDStruct_6ece915e)arg3 toDecimal:(CDStruct_6ece915e)arg4 duration:(double)arg5;
+ (id)animate:(id)arg1 property:(id)arg2 fromDecimal:(CDStruct_6ece915e)arg3 toDecimal:(CDStruct_6ece915e)arg4 duration:(double)arg5 animationCurve:(int)arg6 delegate:(id)arg7;
+ (id)animate:(id)arg1 property:(id)arg2 fromDecimal:(CDStruct_6ece915e)arg3 toDecimal:(CDStruct_6ece915e)arg4 duration:(double)arg5 withDelay:(double)arg6 animationCurve:(int)arg7 delegate:(id)arg8;
+ (id)animate:(id)arg1 property:(id)arg2 fromRect:(struct CGRect)arg3 toRect:(struct CGRect)arg4 duration:(double)arg5;
+ (id)animate:(id)arg1 property:(id)arg2 fromRect:(struct CGRect)arg3 toRect:(struct CGRect)arg4 duration:(double)arg5 animationCurve:(int)arg6 delegate:(id)arg7;
+ (id)animate:(id)arg1 property:(id)arg2 fromRect:(struct CGRect)arg3 toRect:(struct CGRect)arg4 duration:(double)arg5 withDelay:(double)arg6 animationCurve:(int)arg7 delegate:(id)arg8;
+ (id)animate:(id)arg1 property:(id)arg2 fromSize:(struct CGSize)arg3 toSize:(struct CGSize)arg4 duration:(double)arg5;
+ (id)animate:(id)arg1 property:(id)arg2 fromSize:(struct CGSize)arg3 toSize:(struct CGSize)arg4 duration:(double)arg5 animationCurve:(int)arg6 delegate:(id)arg7;
+ (id)animate:(id)arg1 property:(id)arg2 fromSize:(struct CGSize)arg3 toSize:(struct CGSize)arg4 duration:(double)arg5 withDelay:(double)arg6 animationCurve:(int)arg7 delegate:(id)arg8;
+ (id)animate:(id)arg1 property:(id)arg2 fromPoint:(struct CGPoint)arg3 toPoint:(struct CGPoint)arg4 duration:(double)arg5;
+ (id)animate:(id)arg1 property:(id)arg2 fromPoint:(struct CGPoint)arg3 toPoint:(struct CGPoint)arg4 duration:(double)arg5 animationCurve:(int)arg6 delegate:(id)arg7;
+ (id)animate:(id)arg1 property:(id)arg2 fromPoint:(struct CGPoint)arg3 toPoint:(struct CGPoint)arg4 duration:(double)arg5 withDelay:(double)arg6 animationCurve:(int)arg7 delegate:(id)arg8;
+ (id)animate:(id)arg1 property:(id)arg2 from:(double)arg3 to:(double)arg4 duration:(double)arg5;
+ (id)animate:(id)arg1 property:(id)arg2 from:(double)arg3 to:(double)arg4 duration:(double)arg5 animationCurve:(int)arg6 delegate:(id)arg7;
+ (id)animate:(id)arg1 property:(id)arg2 from:(double)arg3 to:(double)arg4 duration:(double)arg5 withDelay:(double)arg6 animationCurve:(int)arg7 delegate:(id)arg8;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer;
@property(retain, nonatomic) NSMutableArray *expiredAnimationOperations; // @synthesize expiredAnimationOperations;
@property(retain, nonatomic) NSMutableArray *runningAnimationOperations; // @synthesize runningAnimationOperations;
@property(retain, nonatomic) NSMutableArray *animationOperations; // @synthesize animationOperations;
@property(nonatomic) int defaultAnimationCurve; // @synthesize defaultAnimationCurve;
@property(nonatomic) double timeOffset; // @synthesize timeOffset;
- (id)description;
- (CDUnknownFunctionPointerType)timingFunctionForAnimationCurve:(int)arg1;
- (void)update:(id)arg1;
- (void)removeAllAnimationOperations;
- (void)removeAnimationOperation:(id)arg1;
- (id)addAnimationOperation:(id)arg1;
- (void)dealloc;
- (id)init;

@end
