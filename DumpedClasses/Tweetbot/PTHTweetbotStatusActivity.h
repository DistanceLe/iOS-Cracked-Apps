//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface PTHTweetbotStatusActivity : NSObject
{
    NSArray *_favoriterTIDs;
    NSArray *_replierTIDs;
    NSArray *_retweeterTIDs;
    NSDate *_updateDate;
}

@property(retain, nonatomic) NSDate *updateDate; // @synthesize updateDate=_updateDate;
@property(retain, nonatomic) NSArray *retweeterTIDs; // @synthesize retweeterTIDs=_retweeterTIDs;
@property(retain, nonatomic) NSArray *replierTIDs; // @synthesize replierTIDs=_replierTIDs;
@property(retain, nonatomic) NSArray *favoriterTIDs; // @synthesize favoriterTIDs=_favoriterTIDs;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isCurrent;

@end
