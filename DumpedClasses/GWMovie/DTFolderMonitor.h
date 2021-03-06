//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURL;

@interface DTFolderMonitor : NSObject
{
    NSURL *_URL;
    CDUnknownBlockType _block;
    int _fileDescriptor;
    struct dispatch_queue_s *_queue;
    struct dispatch_source_s *_source;
}

+ (id)folderMonitorForURL:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)stopMonitoring;
- (void)startMonitoring;
- (void)dealloc;
- (id)initWithURL:(id)arg1 block:(CDUnknownBlockType)arg2;

@end

