//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSheetView.h"

#import "SNewActivityContentViewDelegate.h"

@class NSString;

@interface SActivitySheetView : SSheetView <SNewActivityContentViewDelegate>
{
    double _defaultActivityHeight;
}

@property(nonatomic) double defaultActivityHeight; // @synthesize defaultActivityHeight=_defaultActivityHeight;
- (void)dealloc;
- (void)showActivityBubble:(id)arg1;
- (void)updateActivityButton:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateErrorWithMessage:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateErrorWithReloadHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateLoadingWithMessage:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateActiveView:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

