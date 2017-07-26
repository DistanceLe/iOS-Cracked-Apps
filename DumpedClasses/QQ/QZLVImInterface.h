//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QZLVImInterface : NSObject
{
}

+ (unsigned int)getSdkVersion;
+ (int)getSdkAppId;
+ (unsigned long long)getTinyId;
+ (_Bool)isEnterRoomReqBuff:(id)arg1 toRoomId:(unsigned int *)arg2;
+ (int)genEnterRoomReqData:(id)arg1 reqData:(id *)arg2;
+ (_Bool)parseMultiVideoRsp:(id)arg1 bodyResPb:(struct RspBody *)arg2 code:(unsigned int *)arg3 err:(id *)arg4;
+ (char *)buildMultiVideoReq:(ReqBody_2f7e4c52 *)arg1 commOprHead:(struct GVCommOprHead *)arg2 signature:(id)arg3 subCmd:(unsigned int)arg4 roomInfo:(id)arg5 reqLen:(unsigned long long *)arg6;
+ (_Bool)getEnterRoomReq:(struct EnterRoomReq *)arg1 fromBuff:(char **)arg2 leftLen:(unsigned int *)arg3;
+ (_Bool)getReq0x1:(struct Req0x1 *)arg1 fromBuff:(char **)arg2 leftLen:(unsigned int *)arg3;
+ (_Bool)getLongConnHead:(struct LongConnHead *)arg1 fromBuff:(char **)arg2 leftLen:(unsigned int *)arg3;
+ (_Bool)getCldPkgHead:(struct CldPkgHead *)arg1 fromBuff:(char **)arg2 leftLen:(unsigned int *)arg3;
+ (unsigned long long)getUint64FromBuff:(char **)arg1;
+ (unsigned int)getUint32FromBuff:(char **)arg1;
+ (unsigned short)getUint16FromBuff:(char **)arg1;
+ (unsigned char)getUint8FromBuff:(char **)arg1;
+ (unsigned int)buffLenWithEnterRoomReq:(const struct EnterRoomReq *)arg1;
+ (unsigned int)buffLenWithReq0x1:(const struct Req0x1 *)arg1;
+ (unsigned int)buffLenWithLongConnHead:(const struct LongConnHead *)arg1;
+ (unsigned int)buffLenWithCldPkgHead:(const struct CldPkgHead *)arg1;
+ (void)appendBuff:(char **)arg1 withEnterRoomReq:(const struct EnterRoomReq *)arg2;
+ (void)appendBuff:(char **)arg1 withReq0x1:(const struct Req0x1 *)arg2;
+ (void)appendBuff:(char **)arg1 withLongConnHead:(const struct LongConnHead *)arg2;
+ (void)appendBuff:(char **)arg1 withCldPkgHead:(const struct CldPkgHead *)arg2;
+ (void)appendBuff:(char **)arg1 withUint64:(unsigned long long)arg2;
+ (void)appendBuff:(char **)arg1 withUint32:(unsigned int)arg2;
+ (void)appendBuff:(char **)arg1 withUint16:(unsigned short)arg2;
+ (void)appendBuff:(char **)arg1 withUint8:(unsigned char)arg2;
+ (void)buildMultiVideoCommOprHead:(struct GVCommOprHead *)arg1 roomInfo:(id)arg2 bodyCmd:(unsigned int)arg3;
+ (void)buildMultiVideoStreamerReqBody:(ReqBody_2f7e4c52 *)arg1 oper:(unsigned int)arg2 roomInfo:(id)arg3 streamerInfo:(id)arg4 channels:(id)arg5;
+ (int)requestMultiVideoStreamerStop:(id)arg1 channelIDs:(id)arg2 okBlock:(CDUnknownBlockType)arg3 errBlock:(CDUnknownBlockType)arg4;
+ (int)requestMultiVideoStreamerStart:(id)arg1 streamInfo:(id)arg2 okBlock:(CDUnknownBlockType)arg3 errBlock:(CDUnknownBlockType)arg4;

@end
