//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ALANavigationProtocol.h"

@class NSString;

@interface ALANavigationAdapter : NSObject <ALANavigationProtocol>
{
    id <ALANavigationProtocol> _navigation;
}

+ (id)sharedNavigationAdapter;
@property(retain, nonatomic) id <ALANavigationProtocol> navigation; // @synthesize navigation=_navigation;
- (void).cxx_destruct;
- (void)setGestureOfNav:(id)arg1 gesture:(_Bool)arg2;
- (id)getTopViewControllerOfNav:(id)arg1;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2 withContainer:(id)arg3;
- (id)backButtonItemOfContainer:(id)arg1;
- (id)navigationControllerOfContainer:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3 withContainer:(id)arg4;
- (void)popViewControllerAnimated:(_Bool)arg1 withContainer:(id)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 withContainer:(id)arg3;
- (void)updateNavigationItemWithItems:(id)arg1 position:(long long)arg2 withContainer:(id)arg3;
- (void)updateNavigationItemWithCustomView:(id)arg1 position:(long long)arg2 withContainer:(id)arg3;
- (void)updateNavigationItemWithItem:(id)arg1 position:(long long)arg2 withContainer:(id)arg3;
- (void)updateNavigationItemWithImage:(id)arg1 position:(long long)arg2 withContainer:(id)arg3;
- (void)updateNavigationItemWithText:(id)arg1 position:(long long)arg2 withContainer:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
