//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ANXService.h"

@class ANXLogoutServiceModel, ANXOTPManager, NSString;

@interface ANXLogoutService : NSObject <ANXService>
{
    ANXLogoutServiceModel *_logoutModel;
    CDUnknownBlockType _result;
    ANXOTPManager *_otpManager;
}

@property(retain, nonatomic) ANXOTPManager *otpManager; // @synthesize otpManager=_otpManager;
@property(copy, nonatomic) CDUnknownBlockType result; // @synthesize result=_result;
@property(retain, nonatomic) ANXLogoutServiceModel *logoutModel; // @synthesize logoutModel=_logoutModel;
- (void).cxx_destruct;
- (void)startWithParams:(id)arg1 onResult:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

