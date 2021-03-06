//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface CTLocationClient : NSObject
{
    _Bool _disableCache;
    _Bool _needCtripCity;
    _Bool _finished;
    id <CTLocationDelegate> _delegate;
    double _startTimestamp;
    double _clientTimeoutInterval;
    double _locationTimeoutInteval;
    NSTimer *_clientTimer;
    NSTimer *_locationTimer;
}

@property(retain, nonatomic) NSTimer *locationTimer; // @synthesize locationTimer=_locationTimer;
@property(retain, nonatomic) NSTimer *clientTimer; // @synthesize clientTimer=_clientTimer;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic) double locationTimeoutInteval; // @synthesize locationTimeoutInteval=_locationTimeoutInteval;
@property(nonatomic) double clientTimeoutInterval; // @synthesize clientTimeoutInterval=_clientTimeoutInterval;
@property(nonatomic) _Bool needCtripCity; // @synthesize needCtripCity=_needCtripCity;
@property(nonatomic) _Bool disableCache; // @synthesize disableCache=_disableCache;
@property(nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(nonatomic) __weak id <CTLocationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reverseCtripCity:(id)arg1;
- (void)reverseGeoCodingV2:(id)arg1;
- (void)reverseGeoCoding:(id)arg1;
- (void)notifyClientFinished;
- (void)notifyLcoationFail:(int)arg1;
- (void)notifyCtripCitySuccess:(id)arg1;
- (void)notifyGeoAddressSuccess:(id)arg1;
- (void)notifyLoactionSuccess:(id)arg1;
- (void)clientTimeout;
- (void)coordinateTimeout;
- (void)invalidateAllTimers;
- (void)invalidateLocationTimer;
- (void)invalidateClientTimer;
- (id)checkCachedCtripCity;
- (id)checkCachedGeoAddress;
- (id)checkCachedCTCoordinate2D;
- (void)startTimer;
- (void)stopLocating;
- (void)startLocating;
- (void)startLocatingWithTimeout:(double)arg1 disableCache:(_Bool)arg2 needCtripCity:(_Bool)arg3;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

@end

