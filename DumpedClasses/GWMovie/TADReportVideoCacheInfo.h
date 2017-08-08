//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TADReportBase-Protocol.h"

@class NSMutableArray, NSString;

@interface TADReportVideoCacheInfo : NSObject <TADReportBase>
{
    _Bool _isOffline;
    NSMutableArray *_cacheHitItems;
    long long _total;
    double _oldestCacheTimestamp;
}

@property(nonatomic) _Bool isOffline; // @synthesize isOffline=_isOffline;
@property(nonatomic) double oldestCacheTimestamp; // @synthesize oldestCacheTimestamp=_oldestCacheTimestamp;
@property(nonatomic) long long total; // @synthesize total=_total;
@property(retain, nonatomic) NSMutableArray *cacheHitItems; // @synthesize cacheHitItems=_cacheHitItems;
- (void).cxx_destruct;
- (id)dataDictWithKey;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
