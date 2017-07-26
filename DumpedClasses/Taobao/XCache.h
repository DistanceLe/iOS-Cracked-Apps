//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICache.h"
#import "TNodeModuleProtocol.h"

@class NSCache, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface XCache : NSObject <ICache, TNodeModuleProtocol>
{
    NSString *_name;
    NSMutableDictionary *_cacheMap;
    NSCache *_memCache;
    id <ICacheFormater> _formater;
    NSObject<OS_dispatch_queue> *_ioQueue;
}

+ (void)moduleTNodeMapper:(CDUnknownBlockType)arg1;
+ (id)searchPaths;
+ (void)addSearchPath:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(readonly, nonatomic) id <ICacheFormater> formater; // @synthesize formater=_formater;
@property(readonly, nonatomic) NSCache *memCache; // @synthesize memCache=_memCache;
@property(readonly, nonatomic) NSMutableDictionary *cacheMap; // @synthesize cacheMap=_cacheMap;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)cacheForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)setKey:(id)arg1 withCache:(id)arg2;
- (id)getSubCache:(id)arg1 withFormater:(id)arg2;
- (id)getSubCache:(id)arg1;
- (void)clear;
- (void)removeForKey:(id)arg1;
- (void)objectForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)objectForKey:(id)arg1 inDisk:(CDUnknownBlockType)arg2;
- (id)memoryObjectForKey:(id)arg1;
- (void)queryForKey:(id)arg1 attrs:(CDUnknownBlockType)arg2;
- (id)attrsForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)saveObjectToMemory:(id)arg1 forKey:(id)arg2;
- (void)saveObjectToDisk:(id)arg1 forKey:(id)arg2;
- (void)saveObject:(id)arg1 forKey:(id)arg2;
- (unsigned long long)cacheSize;
- (id)initWithPath:(id)arg1 withQueue:(id)arg2 formater:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
