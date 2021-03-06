//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSString;

@interface FBNetworkerHttpDumper : NSObject
{
    NSString *_path;
    NSFileHandle *_logFileHandle;
}

+ (id)newWithPath:(id)arg1;
@property(retain, nonatomic) NSFileHandle *logFileHandle; // @synthesize logFileHandle=_logFileHandle;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)_getLogFileHandle;
- (void)_dumpDictionary:(id)arg1;
- (void)dumpFailedResponseWithRequestId:(unsigned long long)arg1 error:(id)arg2;
- (void)dumpSuccessfulResponse:(id)arg1 withRequestId:(unsigned long long)arg2 responseData:(id)arg3;
- (void)dumpRequest:(id)arg1 withRequestId:(unsigned long long)arg2;
- (void)_createNewDumpFile;
- (void)_removeOldDumpFile;
- (void)setup;
- (void)dealloc;

@end

