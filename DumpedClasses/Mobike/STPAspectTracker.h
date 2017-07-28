//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSString;

@interface STPAspectTracker : NSObject
{
    Class _trackedClass;
    NSMutableSet *_selectorNames;
    NSMutableDictionary *_selectorNamesToSubclassTrackers;
}

@property(retain, nonatomic) NSMutableDictionary *selectorNamesToSubclassTrackers; // @synthesize selectorNamesToSubclassTrackers=_selectorNamesToSubclassTrackers;
@property(retain, nonatomic) NSMutableSet *selectorNames; // @synthesize selectorNames=_selectorNames;
@property(retain, nonatomic) Class trackedClass; // @synthesize trackedClass=_trackedClass;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSString *trackedClassName;
- (id)subclassTrackersHookingSelectorName:(id)arg1;
- (void)removeSubclassTracker:(id)arg1 hookingSelectorName:(id)arg2;
- (void)addSubclassTracker:(id)arg1 hookingSelectorName:(id)arg2;
- (_Bool)subclassHasHookedSelectorName:(id)arg1;
- (id)initWithTrackedClass:(Class)arg1;

@end
