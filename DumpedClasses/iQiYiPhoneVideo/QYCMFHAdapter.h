//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface QYCMFHAdapter : NSObject
{
    NSMutableDictionary *_callbackMap;
    NSMutableArray *_notificationArray;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *notificationArray; // @synthesize notificationArray=_notificationArray;
@property(retain, nonatomic) NSMutableDictionary *callbackMap; // @synthesize callbackMap=_callbackMap;
- (void).cxx_destruct;
- (void)bgJSBundleCallback:(id)arg1;
- (void)callback:(id)arg1;
- (void)getComicOffline:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

