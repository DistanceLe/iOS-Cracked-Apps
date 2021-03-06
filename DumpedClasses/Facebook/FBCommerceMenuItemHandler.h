//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBMenuItemHandler-Protocol.h"

@class FBUserSession, NSString;

@interface FBCommerceMenuItemHandler : NSObject <FBMenuItemHandler>
{
    FBUserSession *_session;
}

+ (id)initShopsFeedViewControllerWithSession:(id)arg1 refID:(id)arg2 refType:(id)arg3 categoryID:(id)arg4;
+ (id)initProductsFeedDealsViewControllerWithSession:(id)arg1 refID:(id)arg2 refType:(id)arg3 categoryID:(id)arg4;
+ (id)getNavigatorOptions:(id)arg1 title:(id)arg2;
- (void).cxx_destruct;
- (id)viewControllerForMenuItem:(id)arg1;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

