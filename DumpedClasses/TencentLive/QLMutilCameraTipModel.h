//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ANKeyValueTable;

@interface QLMutilCameraTipModel : NSObject
{
    long long _maxShowCount;
    ANKeyValueTable *_mutilTipsTable;
}

@property(retain, nonatomic) ANKeyValueTable *mutilTipsTable; // @synthesize mutilTipsTable=_mutilTipsTable;
@property(nonatomic) long long maxShowCount; // @synthesize maxShowCount=_maxShowCount;
- (void).cxx_destruct;
- (void)tryRemoveTimeOutData;
- (void)updateShowMutilCameraCount;
- (long long)mutilCameraShowedCount;
- (void)updateTipsCountWithPid:(id)arg1 pcid:(id)arg2;
- (_Bool)shouldShowTipsWithPid:(id)arg1 pcid:(id)arg2 maxCount:(long long)arg3;

@end
