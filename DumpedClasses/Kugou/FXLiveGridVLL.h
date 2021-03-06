//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FXFlowViewRefreshDelegate.h"
#import "FXLiveAutoPlayDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class FXArtFlowLayout, FXArtFlowView, FXLiveAutoPlayVLL, FXLiveDLGuideVLL, FXLiveGridViewVm, FXSHallClassifyListV3, FXStarInfo, NSArray, NSMutableArray, NSString, NSTimer, UILabel, UIView;

@interface FXLiveGridVLL : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, FXFlowViewRefreshDelegate, FXLiveAutoPlayDelegate>
{
    _Bool _isPageCover;
    _Bool _isRefreshSongName;
    _Bool _isRequestingSongName;
    _Bool _hadLoadedAll;
    _Bool _isLoadingNext;
    _Bool _isPageStop;
    FXArtFlowView *_view;
    CDUnknownBlockType _gridTouch;
    CDUnknownBlockType _classifyTouchBlock;
    CDUnknownBlockType _homeFunctionTouchBlock;
    NSTimer *_songTimer;
    UIView *_header;
    FXLiveDLGuideVLL *_downloadGuideVll;
    FXLiveAutoPlayVLL *_autoPlayVll;
    CDUnknownBlockType _refreshComplete;
    CDUnknownBlockType _pullDownBeginBlock;
    CDUnknownBlockType _needToShowFullScreenNetError;
    CDUnknownBlockType _countDownBlock;
    NSArray *_concernList;
    NSArray *_sameCityList;
    FXSHallClassifyListV3 *_classifyModel;
    NSArray *_hotList;
    NSArray *_allItemsArray;
    NSArray *_songNameArray;
    FXLiveGridViewVm *_gridVm;
    FXArtFlowLayout *_layout;
    long long _curPage;
    NSString *_cityName;
    NSString *_areaName;
    double _lastOffsetY;
    UILabel *_lastPageTipsView;
    FXStarInfo *_autoLiveItemStarInfo;
    NSMutableArray *_functionDataArray;
    struct CGRect _autoPlayCellFrame;
}

@property(nonatomic) struct CGRect autoPlayCellFrame; // @synthesize autoPlayCellFrame=_autoPlayCellFrame;
@property(retain, nonatomic) NSMutableArray *functionDataArray; // @synthesize functionDataArray=_functionDataArray;
@property(nonatomic) _Bool isPageStop; // @synthesize isPageStop=_isPageStop;
@property(retain, nonatomic) FXStarInfo *autoLiveItemStarInfo; // @synthesize autoLiveItemStarInfo=_autoLiveItemStarInfo;
@property(retain, nonatomic) UILabel *lastPageTipsView; // @synthesize lastPageTipsView=_lastPageTipsView;
@property(nonatomic) double lastOffsetY; // @synthesize lastOffsetY=_lastOffsetY;
@property(copy, nonatomic) NSString *areaName; // @synthesize areaName=_areaName;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(nonatomic) _Bool isLoadingNext; // @synthesize isLoadingNext=_isLoadingNext;
@property(nonatomic) _Bool hadLoadedAll; // @synthesize hadLoadedAll=_hadLoadedAll;
@property(nonatomic) long long curPage; // @synthesize curPage=_curPage;
@property(retain, nonatomic) FXArtFlowLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) FXLiveGridViewVm *gridVm; // @synthesize gridVm=_gridVm;
@property _Bool isRequestingSongName; // @synthesize isRequestingSongName=_isRequestingSongName;
@property(retain, nonatomic) NSArray *songNameArray; // @synthesize songNameArray=_songNameArray;
@property(retain, nonatomic) NSArray *allItemsArray; // @synthesize allItemsArray=_allItemsArray;
@property(retain, nonatomic) NSArray *hotList; // @synthesize hotList=_hotList;
@property(retain, nonatomic) FXSHallClassifyListV3 *classifyModel; // @synthesize classifyModel=_classifyModel;
@property(retain, nonatomic) NSArray *sameCityList; // @synthesize sameCityList=_sameCityList;
@property(retain, nonatomic) NSArray *concernList; // @synthesize concernList=_concernList;
@property(nonatomic) _Bool isRefreshSongName; // @synthesize isRefreshSongName=_isRefreshSongName;
@property(copy, nonatomic) CDUnknownBlockType countDownBlock; // @synthesize countDownBlock=_countDownBlock;
@property(copy, nonatomic) CDUnknownBlockType needToShowFullScreenNetError; // @synthesize needToShowFullScreenNetError=_needToShowFullScreenNetError;
@property(copy, nonatomic) CDUnknownBlockType pullDownBeginBlock; // @synthesize pullDownBeginBlock=_pullDownBeginBlock;
@property(copy, nonatomic) CDUnknownBlockType refreshComplete; // @synthesize refreshComplete=_refreshComplete;
@property(nonatomic) _Bool isPageCover; // @synthesize isPageCover=_isPageCover;
@property(nonatomic) __weak FXLiveAutoPlayVLL *autoPlayVll; // @synthesize autoPlayVll=_autoPlayVll;
@property(nonatomic) __weak FXLiveDLGuideVLL *downloadGuideVll; // @synthesize downloadGuideVll=_downloadGuideVll;
@property(retain, nonatomic) UIView *header; // @synthesize header=_header;
@property(retain, nonatomic) NSTimer *songTimer; // @synthesize songTimer=_songTimer;
@property(copy, nonatomic) CDUnknownBlockType homeFunctionTouchBlock; // @synthesize homeFunctionTouchBlock=_homeFunctionTouchBlock;
@property(copy, nonatomic) CDUnknownBlockType classifyTouchBlock; // @synthesize classifyTouchBlock=_classifyTouchBlock;
@property(copy, nonatomic) CDUnknownBlockType gridTouch; // @synthesize gridTouch=_gridTouch;
@property(retain, nonatomic) FXArtFlowView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)getAutoLiveStarInfoByView:(id)arg1;
- (_Bool)isCanStartAutoPlayLive;
- (id)getCurrentAutoLiveStarInfo;
- (id)getAutoLiveView;
- (_Bool)isVisibleOfAutoLiveCell;
- (void)checkFunctionData;
- (void)reloadData;
- (void)cancelConcernUser:(int)arg1;
- (void)concernUser:(int)arg1;
- (void)userLogin;
- (void)userLogout;
- (void)refreshAllLoadedData;
- (void)loadNextPage:(CDUnknownBlockType)arg1;
- (void)refreshViewAndScrollToTop;
- (void)refreshView:(_Bool)arg1;
- (unsigned long long)getAllCount;
- (void)removeLastPageTipsView;
- (void)addLastPageTipsView;
- (void)refreshFootViewDidDidTriggerRefresh:(id)arg1;
- (void)refreshHeadViewDidDidTriggerRefresh:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)isOpenCountDownRefresh;
- (void)updateCityName;
- (void)changeCityNoti:(id)arg1;
- (void)updateConcernRightLabel:(id)arg1;
- (void)updateConcernLeftLabel:(id)arg1;
- (void)concernLiveCountUpdate:(id)arg1;
- (void)onSkinChange:(id)arg1;
- (void)moreHotAction:(id)arg1;
- (void)moreBtnTouch:(id)arg1;
- (void)updateSongName;
- (void)autoRefreshSongName;
- (void)configSameCityTitle:(id)arg1 starInfoArr:(id)arg2;
- (unsigned long long)getTypeWithRow:(long long)arg1;
- (id)convernStarInfoToRoomInfo:(id)arg1;
- (id)convernRoomInfoToStarInfo:(id)arg1;
- (id)configPage3AndMoreDataSource:(id)arg1;
- (id)configPage2DataSource;
- (void)configPage1DataSource;
- (void)getDataAndRefresh:(CDUnknownBlockType)arg1;
- (void)loadFuctionData:(CDUnknownBlockType)arg1;
- (void)updateClassifyModelCache:(id)arg1;
- (id)loadClassifyModelCache;
- (void)configCollection;
- (void)configLayout;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

