//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface PMFlowLimit : NSObject
{
    NSMutableDictionary *_limitDict;
}

+ (id)numberkey:(long long)arg1;
+ (id)key:(id)arg1;
+ (id)parse:(id)arg1;
+ (void)limit:(id)arg1;
+ (_Bool)isLimit:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *limitDict; // @synthesize limitDict=_limitDict;
- (void).cxx_destruct;

@end
