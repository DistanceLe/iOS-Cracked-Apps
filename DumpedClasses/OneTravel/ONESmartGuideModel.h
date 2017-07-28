//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DiDiPOIEntityModel, NSDictionary, NSString;

@interface ONESmartGuideModel : NSObject
{
    long long _guideType;
    DiDiPOIEntityModel *_startAddr;
    DiDiPOIEntityModel *_destAddr;
    CDUnknownBlockType _confirmBlock;
    NSString *_smart_assistant_id;
    NSDictionary *_orderData;
    NSDictionary *_cancelData;
}

@property(copy, nonatomic) NSDictionary *cancelData; // @synthesize cancelData=_cancelData;
@property(copy, nonatomic) NSDictionary *orderData; // @synthesize orderData=_orderData;
@property(copy, nonatomic) NSString *smart_assistant_id; // @synthesize smart_assistant_id=_smart_assistant_id;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(copy, nonatomic) DiDiPOIEntityModel *destAddr; // @synthesize destAddr=_destAddr;
@property(copy, nonatomic) DiDiPOIEntityModel *startAddr; // @synthesize startAddr=_startAddr;
@property(nonatomic) long long guideType; // @synthesize guideType=_guideType;
- (void).cxx_destruct;

@end
