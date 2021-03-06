//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QLVoiceEngine : NSObject
{
    struct VoiceHelper *helper;
}

+ (id)sharedInstance;
- (int)Resume;
- (int)Pause;
- (int)DestroyEngine;
- (int)GetDownload_UploadState:(int)arg1;
- (int)SetServiceInfo:(long long)arg1 withIP1:(long long)arg2 withIP2:(long long)arg3 withIP3:(long long)arg4 withPort:(int)arg5 timeOut:(int)arg6;
- (int)SetAuthKey:(id)arg1;
- (id)GetFileID;
- (int)PlayFile:(id)arg1;
- (int)DownloadRecordFile:(id)arg1 FileID:(id)arg2 isAutoPlay:(_Bool)arg3 Permanent:(_Bool)arg4;
- (int)SendRecordFile:(id)arg1 Permanent:(_Bool)arg2;
- (int)StopRecord:(_Bool)arg1;
- (int)GetRecordVolume;
- (int)StartRecord:(id)arg1;
- (id)init;

@end

