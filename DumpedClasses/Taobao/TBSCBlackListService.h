//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface TBSCBlackListService : NSObject
{
    NSArray *_needLoginList;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *needLoginList; // @synthesize needLoginList=_needLoginList;
- (void).cxx_destruct;
- (_Bool)isInBlackList:(long long)arg1 content:(id)arg2;
- (id)blackListWithType:(long long)arg1;

@end

