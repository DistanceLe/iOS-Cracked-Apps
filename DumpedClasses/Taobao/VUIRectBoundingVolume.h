//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VUIBoundingVolume.h"

@class NSArray, NSString, VUIPlane, VUIVector3;

@interface VUIRectBoundingVolume : NSObject <VUIBoundingVolume>
{
    VUIVector3 *_A;
    VUIVector3 *_B;
    VUIVector3 *_C;
    VUIVector3 *_D;
    VUIPlane *_mPlane;
    NSArray *_mCurrentVertices;
    VUIVector3 *_mTmp1;
    VUIVector3 *_mTmp2;
    VUIVector3 *_mIntersection;
}

@property(retain, nonatomic) VUIVector3 *mIntersection; // @synthesize mIntersection=_mIntersection;
@property(retain, nonatomic) VUIVector3 *mTmp2; // @synthesize mTmp2=_mTmp2;
@property(retain, nonatomic) VUIVector3 *mTmp1; // @synthesize mTmp1=_mTmp1;
@property(retain, nonatomic) NSArray *mCurrentVertices; // @synthesize mCurrentVertices=_mCurrentVertices;
@property(retain, nonatomic) VUIPlane *mPlane; // @synthesize mPlane=_mPlane;
@property(retain, nonatomic) VUIVector3 *D; // @synthesize D=_D;
@property(retain, nonatomic) VUIVector3 *C; // @synthesize C=_C;
@property(retain, nonatomic) VUIVector3 *B; // @synthesize B=_B;
@property(retain, nonatomic) VUIVector3 *A; // @synthesize A=_A;
- (void).cxx_destruct;
- (_Bool)allCCWOrAllCW:(id)arg1 vertices:(id)arg2;
- (_Bool)ccw:(id)arg1:(id)arg2:(id)arg3;
- (_Bool)isIntersectWith:(id)arg1;
- (id)transform:(id)arg1;
- (void)initializeBounds:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
