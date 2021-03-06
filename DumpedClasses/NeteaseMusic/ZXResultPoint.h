//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface ZXResultPoint : NSObject <NSCopying>
{
    float _x;
    float _y;
}

+ (float)crossProductZ:(id)arg1 pointB:(id)arg2 pointC:(id)arg3;
+ (float)distance:(id)arg1 pattern2:(id)arg2;
+ (void)orderBestPatterns:(id)arg1;
+ (id)resultPointWithX:(float)arg1 y:(float)arg2;
@property(readonly, nonatomic) float y; // @synthesize y=_y;
@property(readonly, nonatomic) float x; // @synthesize x=_x;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithX:(float)arg1 y:(float)arg2;

@end

