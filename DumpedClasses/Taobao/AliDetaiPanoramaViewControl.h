//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DIVADisplayViewDelegate.h"
#import "TBMagicCubeLifeCycleProtocol.h"

@class AliDetaiPanoramaModel, AliDetailDIVADisplayOverlayView, AliDetailDIVAExtraInfoRequestModel, AliDetailMultimediaBrowserViewController, AliDetailPanoramaDisplayView, NSString;

@interface AliDetaiPanoramaViewControl : NSObject <DIVADisplayViewDelegate, TBMagicCubeLifeCycleProtocol>
{
    _Bool _isFirstPanoramaLoaded;
    _Bool _isMarketingIconHidden;
    _Bool _isAppearing;
    _Bool _isHDDiva;
    _Bool _normalDivaFinished;
    _Bool _needShowHDDivaProgress;
    AliDetaiPanoramaModel *_panoramaDispalyModel;
    AliDetailPanoramaDisplayView *_panoramaDispalyView;
    AliDetailMultimediaBrowserViewController *_bigBrowserVC;
    CDUnknownBlockType _panoramaDownloadCompletion;
    NSString *_trackName;
    AliDetailDIVADisplayOverlayView *_overlayView;
    AliDetailDIVAExtraInfoRequestModel *_extInfoRequestModel;
}

@property(nonatomic) _Bool needShowHDDivaProgress; // @synthesize needShowHDDivaProgress=_needShowHDDivaProgress;
@property(nonatomic) _Bool normalDivaFinished; // @synthesize normalDivaFinished=_normalDivaFinished;
@property(retain, nonatomic) AliDetailDIVAExtraInfoRequestModel *extInfoRequestModel; // @synthesize extInfoRequestModel=_extInfoRequestModel;
@property(retain, nonatomic) AliDetailDIVADisplayOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) NSString *trackName; // @synthesize trackName=_trackName;
@property(nonatomic) _Bool isHDDiva; // @synthesize isHDDiva=_isHDDiva;
@property(nonatomic) _Bool isAppearing; // @synthesize isAppearing=_isAppearing;
@property(nonatomic) _Bool isMarketingIconHidden; // @synthesize isMarketingIconHidden=_isMarketingIconHidden;
@property(copy, nonatomic) CDUnknownBlockType panoramaDownloadCompletion; // @synthesize panoramaDownloadCompletion=_panoramaDownloadCompletion;
@property(nonatomic) _Bool isFirstPanoramaLoaded; // @synthesize isFirstPanoramaLoaded=_isFirstPanoramaLoaded;
@property(retain, nonatomic) AliDetailMultimediaBrowserViewController *bigBrowserVC; // @synthesize bigBrowserVC=_bigBrowserVC;
@property(retain, nonatomic) AliDetailPanoramaDisplayView *panoramaDispalyView; // @synthesize panoramaDispalyView=_panoramaDispalyView;
@property(retain, nonatomic) AliDetaiPanoramaModel *panoramaDispalyModel; // @synthesize panoramaDispalyModel=_panoramaDispalyModel;
- (void).cxx_destruct;
- (void)displayView:(id)arg1 currentIndex:(long long)arg2;
- (void)divaHdDownloadButtonClicked;
- (id)divaUserTrackParams;
- (void)triggerDivaHDUserTrack;
- (void)exposureUserTrack:(id)arg1 index:(unsigned long long)arg2;
- (void)exposureClickUserTrack;
- (id)getMaskImageViewForBigPhotoBrowser;
- (void)trackDivaType:(id)arg1 error:(id)arg2;
- (void)startLoadHDDivaAutoTrigger:(_Bool)arg1;
- (void)switchHDDivaToVisible:(_Bool)arg1;
- (void)loadDivaHdIfNeeded;
- (void)setupDivaOverlayWithFrameCount:(long long)arg1;
- (void)setupContent;
- (void)resetForMultiMediaFromBigBrowser;
- (void)reuseForBigBrowserFromeMultiMedia;
- (id)getComponentView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidUnload:(_Bool)arg1;
- (void)viewDidLoad:(_Bool)arg1;
- (void)bindData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

