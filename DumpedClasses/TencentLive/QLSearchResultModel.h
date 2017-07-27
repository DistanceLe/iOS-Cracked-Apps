//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLRequestModel.h"

@class NSMutableArray, NSString, QLASIHTTPRequest, QLJCEVideoFilter, QLSearchItem;

@interface QLSearchResultModel : QLRequestModel
{
    _Bool _isHaveNextPage;
    QLSearchItem *_searchItem;
    NSString *_filterValue;
    NSString *_pageContext;
    NSString *_searchSession;
    NSString *_reportParams;
    NSString *_matchResult;
    NSMutableArray *_uiData;
    QLJCEVideoFilter *_filter;
    QLASIHTTPRequest *_dataRequest;
}

@property(retain, nonatomic) QLASIHTTPRequest *dataRequest; // @synthesize dataRequest=_dataRequest;
@property(retain, nonatomic) QLJCEVideoFilter *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) NSMutableArray *uiData; // @synthesize uiData=_uiData;
@property(nonatomic) _Bool isHaveNextPage; // @synthesize isHaveNextPage=_isHaveNextPage;
@property(copy, nonatomic) NSString *matchResult; // @synthesize matchResult=_matchResult;
@property(copy, nonatomic) NSString *reportParams; // @synthesize reportParams=_reportParams;
@property(copy, nonatomic) NSString *searchSession; // @synthesize searchSession=_searchSession;
@property(copy, nonatomic) NSString *pageContext; // @synthesize pageContext=_pageContext;
@property(copy, nonatomic) NSString *filterValue; // @synthesize filterValue=_filterValue;
@property(retain, nonatomic) QLSearchItem *searchItem; // @synthesize searchItem=_searchItem;
- (void).cxx_destruct;
- (void)requestDidFinishLoad:(id)arg1;
- (void)load:(int)arg1 more:(_Bool)arg2;
- (void)requestDidRetryRequest:(id)arg1;
- (void)cancelDataRequest;
- (void)copyFromResultModel:(id)arg1;
- (void)dealloc;
- (id)init;

@end
