//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray<TBLiveLastShareItem>, NSString, TBLiveItemVideoLivingModel;

@interface TBLiveItemVideoData : TBJSONModel
{
    NSArray<TBLiveLastShareItem> *_liveItemDOList;
    TBLiveItemVideoLivingModel *_simpleSubVideoDO;
    long long _liveId;
    long long _itemId;
    long long _videoId;
    long long _startTime;
    long long _endTime;
    long long _endingWaitingTime;
    long long _status;
    NSString *_itemVideoPlayUrl;
    NSString *_barrageKeyId;
}

@property(copy, nonatomic) NSString *barrageKeyId; // @synthesize barrageKeyId=_barrageKeyId;
@property(copy, nonatomic) NSString *itemVideoPlayUrl; // @synthesize itemVideoPlayUrl=_itemVideoPlayUrl;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long endingWaitingTime; // @synthesize endingWaitingTime=_endingWaitingTime;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long videoId; // @synthesize videoId=_videoId;
@property(nonatomic) long long itemId; // @synthesize itemId=_itemId;
@property(nonatomic) long long liveId; // @synthesize liveId=_liveId;
@property(retain, nonatomic) TBLiveItemVideoLivingModel *simpleSubVideoDO; // @synthesize simpleSubVideoDO=_simpleSubVideoDO;
@property(retain, nonatomic) NSArray<TBLiveLastShareItem> *liveItemDOList; // @synthesize liveItemDOList=_liveItemDOList;
- (void).cxx_destruct;

@end

