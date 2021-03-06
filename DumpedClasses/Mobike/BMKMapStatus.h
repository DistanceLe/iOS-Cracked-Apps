//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BMKMapStatus : NSObject
{
    float _fLevel;
    float _fRotation;
    float _fOverlooking;
    struct CGPoint _targetScreenPt;
    struct CLLocationCoordinate2D _targetGeoPt;
    CDStruct_02837cd9 _visibleMapRect;
}

@property(readonly, nonatomic) CDStruct_02837cd9 visibleMapRect; // @synthesize visibleMapRect=_visibleMapRect;
@property(nonatomic) struct CLLocationCoordinate2D targetGeoPt; // @synthesize targetGeoPt=_targetGeoPt;
@property(nonatomic) struct CGPoint targetScreenPt; // @synthesize targetScreenPt=_targetScreenPt;
@property(nonatomic) float fOverlooking; // @synthesize fOverlooking=_fOverlooking;
@property(nonatomic) float fRotation; // @synthesize fRotation=_fRotation;
@property(nonatomic) float fLevel; // @synthesize fLevel=_fLevel;
- (void)setVisableMapRect:(CDStruct_02837cd9)arg1;
- (id)init;

@end

