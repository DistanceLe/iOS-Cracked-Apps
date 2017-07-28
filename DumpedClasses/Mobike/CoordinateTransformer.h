//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CoordinateTransformer : NSObject
{
}

+ (double)distanceBetweenClientPoint1:(struct _TXMapPoint)arg1 point2:(struct _TXMapPoint)arg2;
+ (double)clientYToLatitude:(int)arg1;
+ (double)clientXToLongitude:(int)arg1;
+ (double)serverYToLatitude:(int)arg1;
+ (double)serverXToLongitude:(int)arg1;
+ (int)latitudeToServerY:(double)arg1;
+ (int)longitudeToServerX:(double)arg1;
+ (int)latitudeToClientY:(double)arg1;
+ (int)longitudeToClientX:(double)arg1;
+ (int)clientToServerY:(int)arg1;
+ (int)clientToServerX:(int)arg1;
+ (int)serverToClientY:(int)arg1;
+ (int)serverToClientX:(int)arg1;

@end
