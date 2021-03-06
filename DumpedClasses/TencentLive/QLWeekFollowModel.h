//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLHomeChannelListDataModel.h"

@class NSArray, NSString;

@interface QLWeekFollowModel : QLHomeChannelListDataModel
{
    _Bool _respondFromCache;
    NSArray *_filters;
    NSString *_pageTitle;
    long long _hightlightIndex;
    NSString *_filterValue;
}

@property(copy, nonatomic) NSString *filterValue; // @synthesize filterValue=_filterValue;
@property(nonatomic) _Bool respondFromCache; // @synthesize respondFromCache=_respondFromCache;
@property(nonatomic) long long hightlightIndex; // @synthesize hightlightIndex=_hightlightIndex;
@property(copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(retain, nonatomic) NSArray *filters; // @synthesize filters=_filters;
- (void).cxx_destruct;
- (_Bool)processResponce:(id)arg1 isCache:(_Bool)arg2 error:(id *)arg3;
- (id)getJCERequestObject;
- (Class)getJCEResponseClass;
- (long long)getJCERequestCMD;
- (id)initWithDataKey:(id)arg1 filterValue:(id)arg2;

@end

