//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WFKChannel.h"

@class NSDate, NSMutableArray, NSString, NSTimer, WFFeedNewsItemModel;

@interface WFKNativeChannel : WFKChannel
{
    _Bool _isSerialIdTimeOut;
    _Bool _isWebViewPushed;
    _Bool _isFirstLoaded;
    int _headerPageNo;
    int _footerPageNo;
    int _newsCacheType;
    int _warmmingCount;
    NSMutableArray *_dataSource;
    NSDate *_timerFireDate;
    NSDate *_recentLoadNewsDate;
    WFFeedNewsItemModel *_readWarmingModel;
    NSTimer *_timer;
    double _curOffsetY;
    WFFeedNewsItemModel *_upperReadWarmingModel;
    NSString *_serailId;
}

@property(nonatomic) int warmmingCount; // @synthesize warmmingCount=_warmmingCount;
@property(nonatomic) _Bool isFirstLoaded; // @synthesize isFirstLoaded=_isFirstLoaded;
@property(copy, nonatomic) NSString *serailId; // @synthesize serailId=_serailId;
@property(retain, nonatomic) WFFeedNewsItemModel *upperReadWarmingModel; // @synthesize upperReadWarmingModel=_upperReadWarmingModel;
@property(nonatomic) _Bool isWebViewPushed; // @synthesize isWebViewPushed=_isWebViewPushed;
@property(nonatomic) double curOffsetY; // @synthesize curOffsetY=_curOffsetY;
@property(nonatomic) int newsCacheType; // @synthesize newsCacheType=_newsCacheType;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) WFFeedNewsItemModel *readWarmingModel; // @synthesize readWarmingModel=_readWarmingModel;
@property(nonatomic) int footerPageNo; // @synthesize footerPageNo=_footerPageNo;
@property(nonatomic) int headerPageNo; // @synthesize headerPageNo=_headerPageNo;
@property(nonatomic) _Bool isSerialIdTimeOut; // @synthesize isSerialIdTimeOut=_isSerialIdTimeOut;
@property(retain, nonatomic) NSDate *recentLoadNewsDate; // @synthesize recentLoadNewsDate=_recentLoadNewsDate;
@property(retain, nonatomic) NSDate *timerFireDate; // @synthesize timerFireDate=_timerFireDate;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)setIsLink:(_Bool)arg1;

@end

