//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@protocol IJSONDeserialize <NSObject>
- (id)objectFromJsonData:(NSData *)arg1 objectType:(Class)arg2;
- (id)objectFromJsonString:(NSString *)arg1 objectType:(Class)arg2;
@end
