//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (NeeNotification)
+ (_Bool)postNotification:(id)arg1 withObject:(id)arg2;
+ (_Bool)postNotification:(id)arg1;
+ (id)NOTIFICATION_TYPE;
+ (id)NOTIFICATION;
- (id)allInstanceMethodsOf:(Class)arg1;
- (id)allInstanceMethodsOf:(Class)arg1 withPrefix:(id)arg2;
- (_Bool)postNotification:(id)arg1 withObject:(id)arg2;
- (_Bool)postNotification:(id)arg1;
- (void)unobserveAllNotifications;
- (void)unobserveNotification:(id)arg1;
- (void)observeAllNotifications;
- (void)observeNotification:(id)arg1;
- (void)handleNotification:(id)arg1;
@end

