//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface TBErrorStatisticsBaseInfo : NSObject
{
    NSMutableDictionary *extStatisticsData;
    double CDNTime;
    double cacheSize;
    double KTime;
    double totalSize;
}

@property(nonatomic) double totalSize; // @synthesize totalSize;
@property(nonatomic) double KTime; // @synthesize KTime;
@property(nonatomic) double cacheSize; // @synthesize cacheSize;
@property(nonatomic) double CDNTime; // @synthesize CDNTime;
@property(retain, nonatomic) NSMutableDictionary *extStatisticsData; // @synthesize extStatisticsData;
- (void).cxx_destruct;
- (id)toBaseMeasureValueSet;
- (id)toBaseDictionary;

@end

