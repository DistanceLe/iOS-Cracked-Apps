//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSTimer;

@interface DTTimeObj : NSObject
{
    NSTimer *_time;
    long long _sendCount;
    NSDictionary *_sendDic;
    NSString *_sendBiz;
}

@property(retain, nonatomic) NSString *sendBiz; // @synthesize sendBiz=_sendBiz;
@property(retain, nonatomic) NSDictionary *sendDic; // @synthesize sendDic=_sendDic;
@property(nonatomic) long long sendCount; // @synthesize sendCount=_sendCount;
@property(retain, nonatomic) NSTimer *time; // @synthesize time=_time;
- (void).cxx_destruct;

@end

