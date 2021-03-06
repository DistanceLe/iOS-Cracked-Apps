//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface TBEditionPositionSwitcher : NSObject
{
    NSObject<OS_dispatch_queue> *_ioQueue;
}

+ (id)ioQueue;
+ (double)getPromptAttemptForEdtionCode:(id)arg1;
+ (void)storePromptAttemptForEditionCode:(id)arg1;
+ (id)getRealPositionWithoutEditionSwitcherEnable;
+ (id)getSelectedPositionWithoutEditionSwitcherEnable;
+ (id)supportedEditionInfos;
+ (void)setRealPosition:(id)arg1;
+ (void)setSelectedPosition:(id)arg1;
+ (id)getRealPosition;
+ (_Bool)hasUserSelectedPosition;
+ (id)getSelectedPosition;
+ (void)showPositionSelectDialog;
+ (void)refreshPosition;
+ (void)userLogined:(id)arg1;
@property(retain) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
- (void).cxx_destruct;

@end

