//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGScrollPageViewController.h"

#import "KGRecentCollectCellDeleagte.h"
#import "KGViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class KGDefaultMoreView, NSMutableArray, NSString, UITableView, UIView;

@interface KGRecentAlbumViewController : KGScrollPageViewController <UITableViewDataSource, UITableViewDelegate, KGRecentCollectCellDeleagte, KGViewControllerDelegate>
{
    _Bool _isRequestData;
    _Bool _isShowLoading;
    _Bool _isPlaying;
    UITableView *_albumTableView;
    NSMutableArray *_albumList;
    UIView *_blankView;
    KGDefaultMoreView *_moreView;
}

@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) _Bool isShowLoading; // @synthesize isShowLoading=_isShowLoading;
@property(nonatomic) _Bool isRequestData; // @synthesize isRequestData=_isRequestData;
@property(retain, nonatomic) KGDefaultMoreView *moreView; // @synthesize moreView=_moreView;
@property(retain, nonatomic) UIView *blankView; // @synthesize blankView=_blankView;
@property(retain, nonatomic) NSMutableArray *albumList; // @synthesize albumList=_albumList;
@property(retain, nonatomic) UITableView *albumTableView; // @synthesize albumTableView=_albumTableView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)clearAll;
- (void)updateCellWithIndexPath:(id)arg1;
- (void)playSongs:(id)arg1 withPth:(id)arg2 withIndexPath:(id)arg3;
- (void)deleteRecordWithEntity:(id)arg1;
- (void)playAllbumSongWith:(id)arg1;
- (void)playAllSongWithIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)getAlbumListData;
- (void)refreshMoreView;
- (void)viewManagerChangeState:(int)arg1;
- (void)viewDidExit;
- (void)viewDidEnter;
- (void)createUI;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
