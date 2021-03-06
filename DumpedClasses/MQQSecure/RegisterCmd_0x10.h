//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RegisterCmd.h"

@class NSData, NSMutableDictionary, NSString;

@interface RegisterCmd_0x10 : RegisterCmd
{
    unsigned char cLang;
    unsigned long long ddwOldUin;
    unsigned int dwAppid;
    unsigned int dwSubAppid;
    NSData *guid;
    NSString *appName;
    NSString *appVer;
    NSString *osVer;
    NSString *imei;
    NSString *iccid;
    unsigned char cSigType;
    NSData *sessionKey;
    NSData *gtkey_tgt;
    NSMutableDictionary *reqTlvDataDic;
    NSMutableDictionary *rspTlvDataDic;
}

@property(readonly) NSMutableDictionary *rspTlvDataDic; // @synthesize rspTlvDataDic;
@property(readonly) NSMutableDictionary *reqTlvDataDic; // @synthesize reqTlvDataDic;
@property(copy) NSData *gtkey_tgt; // @synthesize gtkey_tgt;
@property(copy) NSData *sessionKey; // @synthesize sessionKey;
@property unsigned char cSigType; // @synthesize cSigType;
@property(copy) NSString *iccid; // @synthesize iccid;
@property(copy) NSString *imei; // @synthesize imei;
@property(copy) NSString *appName; // @synthesize appName;
@property(copy) NSString *appVer; // @synthesize appVer;
@property(copy) NSData *guid; // @synthesize guid;
@property unsigned int dwSubAppid; // @synthesize dwSubAppid;
@property unsigned int dwAppid; // @synthesize dwAppid;
@property unsigned long long ddwOldUin; // @synthesize ddwOldUin;
@property unsigned char cLang; // @synthesize cLang;
@property(copy) NSString *osVer; // @synthesize osVer;
- (void)setTlv:(unsigned short)arg1 andData:(id)arg2;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
- (int)encode:(id)arg1;
- (void)dealloc;
- (id)init;

@end

