//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APVideoMaterialBusinessModel, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface APVideoMaterialManager : NSObject
{
    NSMutableDictionary *_loadingDic;
    NSObject<OS_dispatch_queue> *_ioQueue;
    APVideoMaterialBusinessModel *_businessModel;
}

+ (id)getCacheFolderForMaterial;
+ (id)getCachePathForMaterial:(id)arg1;
+ (unsigned long long)getMaterialStatus:(id)arg1;
+ (unsigned long long)getPackageStatus:(id)arg1;
+ (_Bool)isSupport;
+ (id)shareManager;
@property(retain, nonatomic) APVideoMaterialBusinessModel *businessModel; // @synthesize businessModel=_businessModel;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(retain, nonatomic) NSMutableDictionary *loadingDic; // @synthesize loadingDic=_loadingDic;
- (void).cxx_destruct;
- (id)materialById:(id)arg1;
- (void)removeLoadingStatusForPacketId:(id)arg1;
- (_Bool)getLoadingStatusForPacketId:(id)arg1;
- (void)setLoadingStatusForPacketId:(id)arg1;
- (_Bool)cancelLoadMaterial:(id)arg1;
- (void)loadMaterial:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)cancelLoadPackage:(id)arg1;
- (void)loadPackage:(id)arg1 md5:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)getMaterialBusinessInfo:(id)arg1;
- (id)init;

@end

