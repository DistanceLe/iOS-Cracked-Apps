//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBAccsRequestFactoryHelp : NSObject
{
}

+ (CDUnknownBlockType)getServiceRequstResultsBlock;
+ (CDUnknownBlockType)getBindRequestRequestResultsBlock;
+ (unsigned short)buildDataFlagWithOriginalDataFlag:(id)arg1 messageFlagType:(unsigned long long)arg2 accsDataFlagType:(unsigned long long)arg3 accsErrorFlagType:(unsigned long long)arg4 accsReturnFlagType:(unsigned long long)arg5 accsFlagNeedAccs:(unsigned long long)arg6 accsFlagAccsType:(unsigned long long)arg7;
+ (id)makeRequestWithDataID:(id)arg1 callBack:(CDUnknownBlockType)arg2 receviceDataBlock:(CDUnknownBlockType)arg3 sendData:(id)arg4 level:(unsigned long long)arg5 retryTime:(int)arg6 timeout:(long long)arg7 requestRetryTimeout:(double)arg8 host:(id)arg9 serviceID:(id)arg10 accsSDKOperationTypeSF:(struct _AccsSDKOperationTypeSF)arg11 requestResults:(CDUnknownBlockType)arg12 accsRequestManager:(id)arg13 accsRequestProcessor:(id)arg14;
+ (id)buildSourceData:(id)arg1 userId:(id)arg2;
+ (unsigned short)buildDataFlagWithMessageFlagType:(unsigned long long)arg1 accsDataFlagType:(unsigned long long)arg2 accsErrorFlagType:(unsigned long long)arg3 accsReturnFlagType:(unsigned long long)arg4;
+ (id)getRequestDataWithTargetData:(id)arg1 sourceData:(id)arg2 dataFlag:(unsigned short)arg3 dataId:(id)arg4 sendData:(id)arg5 extHeaderData:(id)arg6 error:(id *)arg7;
+ (id)getRequestDataWithTargetData:(id)arg1 sourceData:(id)arg2 dataFlag:(unsigned short)arg3 dataId:(id)arg4 sendData:(id)arg5 extHeader:(id)arg6 error:(id *)arg7;

@end

