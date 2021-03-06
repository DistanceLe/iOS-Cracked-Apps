//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBAccountRecoverySearchComponentListenerAnnouncer, FBAccountRecoverySearchController, FBAccountRecoverySearchViewControllerListenerAnnouncer;
@protocol FBAccountRecoverySearchFetchStatusListener;

@interface FBAccountRecoverySearchToolbox : NSObject
{
    FBAccountRecoverySearchController *_searchController;
    id <FBAccountRecoverySearchFetchStatusListener> _fetchStatusListener;
    FBAccountRecoverySearchViewControllerListenerAnnouncer *_searchViewControllerAnnouncer;
    FBAccountRecoverySearchComponentListenerAnnouncer *_searchComponentAnnouncer;
}

@property(readonly, nonatomic) FBAccountRecoverySearchComponentListenerAnnouncer *searchComponentAnnouncer; // @synthesize searchComponentAnnouncer=_searchComponentAnnouncer;
@property(readonly, nonatomic) FBAccountRecoverySearchViewControllerListenerAnnouncer *searchViewControllerAnnouncer; // @synthesize searchViewControllerAnnouncer=_searchViewControllerAnnouncer;
@property(readonly, nonatomic) id <FBAccountRecoverySearchFetchStatusListener> fetchStatusListener; // @synthesize fetchStatusListener=_fetchStatusListener;
@property(readonly, nonatomic) FBAccountRecoverySearchController *searchController; // @synthesize searchController=_searchController;
- (void).cxx_destruct;
- (id)initWithSearchController:(id)arg1 fetchStatusListener:(id)arg2 searchViewControllerAnnouncer:(id)arg3 searchComponentAnnouncer:(id)arg4;

@end

