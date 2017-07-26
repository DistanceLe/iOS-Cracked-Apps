//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSMutableArray, NSString;

@interface O2OSearchMenuResult : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasResultCode;
    _Bool _hasResultMsg;
    _Bool _hasSearchId;
    _Bool _hasSessionId;
    _Bool _hasBucketId;
    _Bool _hasSort;
    _Bool _hasIntentionId;
    _Bool _hasSearchParams;
    _Bool _hasTab;
    _Bool _hasQuery;
    _Bool _hasContext;
    _Bool _hasDtLogMonitor;
    _Bool _hasRequestId;
    int _resultCode;
    NSString *_resultMsg;
    NSString *_searchId;
    NSString *_sessionId;
    NSString *_bucketId;
    NSString *_sort;
    long long _intentionId;
    NSMutableArray *_menuGroups;
    NSString *_searchParams;
    NSString *_tab;
    NSString *_query;
    NSString *_context;
    NSString *_dtLogMonitor;
    NSString *_requestId;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSString *dtLogMonitor; // @synthesize dtLogMonitor=_dtLogMonitor;
@property(retain, nonatomic) NSString *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *tab; // @synthesize tab=_tab;
@property(retain, nonatomic) NSString *searchParams; // @synthesize searchParams=_searchParams;
@property(retain, nonatomic) NSMutableArray *menuGroups; // @synthesize menuGroups=_menuGroups;
@property(nonatomic) long long intentionId; // @synthesize intentionId=_intentionId;
@property(retain, nonatomic) NSString *sort; // @synthesize sort=_sort;
@property(retain, nonatomic) NSString *bucketId; // @synthesize bucketId=_bucketId;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *searchId; // @synthesize searchId=_searchId;
@property(retain, nonatomic) NSString *resultMsg; // @synthesize resultMsg=_resultMsg;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
@property(readonly) _Bool hasRequestId; // @synthesize hasRequestId=_hasRequestId;
@property(readonly) _Bool hasDtLogMonitor; // @synthesize hasDtLogMonitor=_hasDtLogMonitor;
@property(readonly) _Bool hasContext; // @synthesize hasContext=_hasContext;
@property(readonly) _Bool hasQuery; // @synthesize hasQuery=_hasQuery;
@property(readonly) _Bool hasTab; // @synthesize hasTab=_hasTab;
@property(readonly) _Bool hasSearchParams; // @synthesize hasSearchParams=_hasSearchParams;
@property(readonly) _Bool hasIntentionId; // @synthesize hasIntentionId=_hasIntentionId;
@property(readonly) _Bool hasSort; // @synthesize hasSort=_hasSort;
@property(readonly) _Bool hasBucketId; // @synthesize hasBucketId=_hasBucketId;
@property(readonly) _Bool hasSessionId; // @synthesize hasSessionId=_hasSessionId;
@property(readonly) _Bool hasSearchId; // @synthesize hasSearchId=_hasSearchId;
@property(readonly) _Bool hasResultMsg; // @synthesize hasResultMsg=_hasResultMsg;
@property(readonly) _Bool hasResultCode; // @synthesize hasResultCode=_hasResultCode;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addMenuGroups:(id)arg1;
- (void)setMenuGroupsArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
