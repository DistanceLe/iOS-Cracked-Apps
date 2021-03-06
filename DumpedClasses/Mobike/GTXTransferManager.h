//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue;

@interface GTXTransferManager : NSObject
{
    NSOperationQueue *_transferQueue;
}

+ (_Bool)shouldUpload;
+ (void)uploadAttachment;
+ (void)uploadCrashReport;
+ (void)uploadLogFile:(unsigned long long)arg1 endTime:(unsigned long long)arg2;
+ (void)uploadLogFile;
+ (void)trySyncUserInfo;
+ (id)manager;
@property(retain, nonatomic) NSOperationQueue *transferQueue; // @synthesize transferQueue=_transferQueue;
- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (void)uploadLogFile:(id)arg1;
- (id)getTransferQueue;

@end

