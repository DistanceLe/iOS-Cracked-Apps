//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, VRCache;

@interface VRPreloadManager : NSObject
{
    NSMutableArray *_containers;
    VRCache *_cache;
}

@property(retain, nonatomic) VRCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSMutableArray *containers; // @synthesize containers=_containers;
- (void).cxx_destruct;
- (id)getImageWithKey:(id)arg1;
- (void)cancelAllPreload;
- (void)dropTask:(id)arg1;
- (id)init;

@end
