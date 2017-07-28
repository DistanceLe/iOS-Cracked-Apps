//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMMenuBaseView.h"

#import "NMHttpRequestDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NMActionSheetBackgroundView, NMCollection, NMDjProgram, NMDjProgramRewardInfoRequest, NMGetBatchRequest, NMMoreOperationListHeaderView, NMPlaylist, NMResourceRewardInfoRequest, NMSong, NSIndexPath, NSMutableArray, NSString, NSTimer, UIImage, UIScrollView, UITableView, UITapGestureRecognizer, UIView;

@interface NMMoreOperationListView : NMMenuBaseView <UITableViewDelegate, UITableViewDataSource, NMHttpRequestDelegate>
{
    unsigned long long _menuType;
    NSMutableArray *_operationTypeArray;
    NSIndexPath *_selectedPath;
    double _contentHeight;
    NMPlaylist *_playlist;
    UIImage *_playNextIcon;
    UIImage *_addPlaylistIcon;
    UIImage *_artistIcon;
    UIImage *_albumIcon;
    UIImage *_qualityIcon;
    UIImage *_qualityTitleIcon;
    UIImage *_qualityTitleIconSq;
    UIImage *_mvIcon;
    UIImage *_eqIcon;
    UIImage *_eqCloseIcon;
    UIImage *_fmTrainIcon;
    UIImage *_ringtonIcon;
    UIImage *_commentIcon;
    UIImage *_shareIcon;
    UIImage *_downloadIcon;
    UIImage *_downloadedIcon;
    UIImage *_notInterestedIcon;
    UIImage *_deleteIcon;
    UIImage *_similarIcon;
    UIImage *_timingIcon;
    UIImage *_carModeIcon;
    UIImage *_rewardImage;
    UIImage *_informIcon;
    UIImage *_playRate1Icon;
    UIImage *_playRate1_5Icon;
    UIImage *_playRate2Icon;
    UIImage *_playSourceIcon;
    NMActionSheetBackgroundView *_bgView;
    NMMoreOperationListHeaderView *_headView;
    UIScrollView *_containerView;
    UITableView *_tableView;
    UIView *_maskView;
    NMGetBatchRequest *_queryInfoBatchRequest;
    NMResourceRewardInfoRequest *_rewardInfoRequest;
    NMDjProgramRewardInfoRequest *_programRewardInfoRequest;
    UITapGestureRecognizer *_cancelGesture;
    NSTimer *_stopPlayingTimer;
    _Bool _needMask;
    _Bool _needRefreshList;
    _Bool _needScrollToShowAll;
    _Bool _isDragging;
    _Bool _isPlayingView;
    _Bool _showRewardGuide;
    _Bool _isShowing;
    _Bool _isSongMenu;
    NMSong *_song;
    NMDjProgram *_djProgram;
    id <NMMoreOperationListViewProtocal> _delegate;
    NMCollection *_collection;
}

@property(readonly, nonatomic) _Bool isSongMenu; // @synthesize isSongMenu=_isSongMenu;
@property(readonly, nonatomic) NMCollection *collection; // @synthesize collection=_collection;
@property(readonly, nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) __weak id <NMMoreOperationListViewProtocal> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NMDjProgram *djProgram; // @synthesize djProgram=_djProgram;
@property(readonly, nonatomic) NMSong *song; // @synthesize song=_song;
- (void).cxx_destruct;
- (void)_showCanNotAddToNextListNoticeIfNeeded;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_operationClickedForIndexPath:(id)arg1;
- (_Bool)_operationListContainOperation:(long long)arg1;
- (void)_refreshPlaySourceCell:(id)arg1;
- (void)_configMoreOperationCell:(id)arg1 indexPath:(id)arg2;
- (long long)_getOperationTypeForIndexPath:(id)arg1;
- (void)_refreshTimingForCell:(id)arg1;
- (void)_refreshTimingCell;
- (_Bool)_djProgramNeedShowInformEntrance;
- (void)_configOperationCellArray;
- (_Bool)_needShowReward;
- (void)_configMenuType;
- (void)_refreshInfoIfNeeded;
- (void)_handleChangeSkin:(id)arg1;
- (void)_setImages:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)_cleanUpAfterHide;
- (void)_doShowAnimation;
- (void)showRewardGuide:(long long)arg1;
- (void)_animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_onCancel:(id)arg1 withAnimation:(_Bool)arg2;
- (void)dismiss;
- (void)dismissWithAnimation:(_Bool)arg1;
- (void)handleCancelTap:(id)arg1;
- (void)showAnimation;
- (void)dismissMoreOperationListWithAnimation:(_Bool)arg1;
- (void)refreshCountForMoreOperationList:(id)arg1;
- (void)songChangedAndUpdateMoreOperationList:(id)arg1;
- (id)initRunFMRadioOperationList:(id)arg1;
- (id)initFMRadioOperationList:(id)arg1;
- (id)initPlayingSongOperationList:(id)arg1;
- (id)initWithResource:(id)arg1 collection:(id)arg2;
- (void)reachAbilityChange:(id)arg1;
- (void)_downloadStatusChangedAndRefreshTabel;
- (void)downloadStatusChanged:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_refreshViewForSkin:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
