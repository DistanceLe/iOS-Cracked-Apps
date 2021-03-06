//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSSet, NSString;

@protocol APCacheProtocol <NSObject>
@property(readonly, nonatomic) long long capacity;
- (void)removeAllObjects;
- (void)removeObjectForKey:(NSString *)arg1;
- (id)objectForKey:(NSString *)arg1;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2 expire:(double)arg3;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;

@optional
- (void)removeObjectsWithKeys:(NSSet *)arg1;
- (void)removeObjectsWithSuffix:(NSString *)arg1;
- (void)removeObjectsWithPrefix:(NSString *)arg1;
- (void)removeObjectsWithSqlLike:(NSString *)arg1;
- (void)removeObjectsWithRegex:(NSString *)arg1;
- (void)addObjects:(NSDictionary *)arg1;
@end

