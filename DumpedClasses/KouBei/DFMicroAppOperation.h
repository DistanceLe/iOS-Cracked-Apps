//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class DTMicroApplication, NSDictionary, NSString;

@interface DFMicroAppOperation : NSOperation
{
    _Bool _startApp;
    _Bool _animated;
    DTMicroApplication *_app;
    NSString *_appName;
    NSDictionary *_params;
    long long _launchMode;
}

@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(nonatomic) _Bool startApp; // @synthesize startApp=_startApp;
@property(nonatomic) long long launchMode; // @synthesize launchMode=_launchMode;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) DTMicroApplication *app; // @synthesize app=_app;
- (void).cxx_destruct;

@end

