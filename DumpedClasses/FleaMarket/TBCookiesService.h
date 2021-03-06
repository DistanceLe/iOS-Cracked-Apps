//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MtopExtRequestDelegate.h"

@class NSString;

@interface TBCookiesService : NSObject <MtopExtRequestDelegate>
{
    _Bool _isGettingCookies;
    _Bool _needLoginView;
    CDUnknownBlockType _cancelationHandler;
    CDUnknownBlockType _completionHandler;
    double _lastSucceedTime;
    double _lastFailTime;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool needLoginView; // @synthesize needLoginView=_needLoginView;
@property _Bool isGettingCookies; // @synthesize isGettingCookies=_isGettingCookies;
@property(nonatomic) double lastFailTime; // @synthesize lastFailTime=_lastFailTime;
@property(nonatomic) double lastSucceedTime; // @synthesize lastSucceedTime=_lastSucceedTime;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType cancelationHandler; // @synthesize cancelationHandler=_cancelationHandler;
- (void).cxx_destruct;
- (id)getSessionByKey:(id)arg1;
- (void)failed:(id)arg1;
- (void)succeed:(id)arg1;
- (void)setCookiesSuccessTime:(id)arg1;
- (void)getCookiesWithNeedTimeCheck:(_Bool)arg1 needLoginView:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3 cancelationHander:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

