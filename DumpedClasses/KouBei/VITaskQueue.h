//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface VITaskQueue : NSObject
{
    NSMutableArray *_queue;
    long long _maxTaskCount;
}

@property(nonatomic) long long maxTaskCount; // @synthesize maxTaskCount=_maxTaskCount;
- (void).cxx_destruct;
- (long long)taskCount;
- (id)tasks;
- (void)cleanAllTasks;
- (void)removeTask:(id)arg1;
- (_Bool)addTask:(id)arg1;
- (id)lastTask;
- (id)init;

@end

