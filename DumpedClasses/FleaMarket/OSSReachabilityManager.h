//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OSSReachabilityManager : NSObject
{
    struct __SCNetworkReachability *_reachabilityRef;
}

+ (id)shareInstance;
- (_Bool)_startNotifier;
- (id)init;

@end
