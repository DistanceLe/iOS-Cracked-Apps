//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EMChatManagerDelegateBase-Protocol.h"

@class EMError, NSDictionary, NSError, NSString;

@protocol EMChatManagerLoginDelegate <EMChatManagerDelegateBase>

@optional
- (void)didAutoReconnectFinishedWithError:(NSError *)arg1;
- (void)willAutoReconnect;
- (void)didRegisterNewAccount:(NSString *)arg1 password:(NSString *)arg2 error:(EMError *)arg3;
- (void)didReconnect;
- (void)didForbidByServer;
- (void)didAppkeyChanged;
- (void)didServersChanged;
- (void)didRemovedFromServer;
- (void)didLoginFromOtherDevice;
- (void)didLogoffWithError:(EMError *)arg1;
- (void)didLoginWithInfo:(NSDictionary *)arg1 error:(EMError *)arg2;
- (void)didAutoLoginWithInfo:(NSDictionary *)arg1 error:(EMError *)arg2;
- (void)willAutoLoginWithInfo:(NSDictionary *)arg1 error:(EMError *)arg2;
@end

