//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QIYIPaopaoBaseViewController.h"

#import "QYPPAlertViewDelegate-Protocol.h"
#import "QYPPTabBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, QIYIPaopaoXMPPCore, QIYTPaopaoChatRoomViewController, QYPPDefaultView, QYPPSharedVideo, QYPPSupportStarViewModel, QYPPTabBar, UIScrollView, UITableView, UIView;

@interface QYPPSelectPaoPaoViewController : QIYIPaopaoBaseViewController <QYPPTabBarDelegate, QYPPAlertViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UIScrollView *_contentView;
    NSMutableArray *_myCircleList;
    NSMutableArray *_recommendCircleList;
    NSArray *_myGroupList;
    NSArray *_joinedRecCircleList;
    QIYIPaopaoXMPPCore *xmppCore;
    unsigned long long shareType;
    NSDictionary *dictFeedInfo;
    NSArray *arrayLeftSectionTitles;
    UIView *visualView;
    _Bool _onlyShareToCircle;
    _Bool _isFromPaopao;
    _Bool _isWillScroll;
    CDUnknownBlockType _resBlk;
    unsigned long long _resultStatus;
    UITableView *_leftTableView;
    UITableView *_rightTableView;
    QYPPSharedVideo *_sharedVideo;
    QYPPSupportStarViewModel *_crowdfundingModel;
    CDUnknownBlockType _cancelShareBlock;
    QYPPDefaultView *_leftNoDataView;
    QYPPDefaultView *_rightNoDataView;
    QYPPTabBar *_tabBar;
    QIYTPaopaoChatRoomViewController *_chatRoomVC;
}

+ (void)GoBackWithNavigationCrontroller:(id)arg1 shareType:(unsigned long long)arg2 isFromPlayingVideoCircle:(_Bool)arg3;
@property(retain, nonatomic) QIYTPaopaoChatRoomViewController *chatRoomVC; // @synthesize chatRoomVC=_chatRoomVC;
@property(nonatomic) _Bool isWillScroll; // @synthesize isWillScroll=_isWillScroll;
@property(retain, nonatomic) QYPPTabBar *tabBar; // @synthesize tabBar=_tabBar;
@property(retain, nonatomic) QYPPDefaultView *rightNoDataView; // @synthesize rightNoDataView=_rightNoDataView;
@property(retain, nonatomic) QYPPDefaultView *leftNoDataView; // @synthesize leftNoDataView=_leftNoDataView;
@property(copy, nonatomic) CDUnknownBlockType cancelShareBlock; // @synthesize cancelShareBlock=_cancelShareBlock;
@property(nonatomic) _Bool isFromPaopao; // @synthesize isFromPaopao=_isFromPaopao;
@property(nonatomic) _Bool onlyShareToCircle; // @synthesize onlyShareToCircle=_onlyShareToCircle;
@property(retain, nonatomic) QYPPSupportStarViewModel *crowdfundingModel; // @synthesize crowdfundingModel=_crowdfundingModel;
@property(retain, nonatomic) QYPPSharedVideo *sharedVideo; // @synthesize sharedVideo=_sharedVideo;
@property(retain, nonatomic) UITableView *rightTableView; // @synthesize rightTableView=_rightTableView;
@property(retain, nonatomic) UITableView *leftTableView; // @synthesize leftTableView=_leftTableView;
@property(nonatomic) unsigned long long resultStatus; // @synthesize resultStatus=_resultStatus;
@property(copy, nonatomic) CDUnknownBlockType resBlk; // @synthesize resBlk=_resBlk;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)sendPingbackForsendVideoFeed:(id)arg1 withFeedId:(id)arg2;
- (void)showShutupInfo;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)fetchMyGroupList;
- (void)fetchMyCircleList;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)sendVideoFeedWithDesc:(id)arg1 toWallId:(id)arg2 inCircle:(id)arg3 isJoined:(_Bool)arg4;
- (void)playMiniPlayer;
- (void)pauseMiniPlayer;
- (void)pubShareCrowdfundingToCircle:(id)arg1;
- (void)pubShareHotEventToCircle:(id)arg1;
- (void)pubShareFeedToCircle:(id)arg1;
- (id)preShareInfomation;
- (void)sendShareCrowdfuningMessageInChat:(id)arg1 parentVC:(id)arg2;
- (void)sendVideoMessageInChat:(id)arg1;
- (void)sendShareFeedMessageInChat:(id)arg1 parentVC:(id)arg2;
- (void)share2PaoPaoGroupWithPaoPao:(id)arg1;
- (void)back2QiyiVideoByNavigationButton;
- (void)navbarBackAction;
- (void)showSharedToCircleResultView:(_Bool)arg1 tips:(id)arg2 circle:(id)arg3;
- (void)share2CircleWithCircleId:(id)arg1 withCircleType:(long long)arg2 isJoined:(_Bool)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)numberOfSectionsInCircleTableView;
- (_Bool)showLeftSectionHeader;
- (void)pullUpToRefresh;
- (void)setLeftUpPullUpToRefresh;
- (void)didReceiveMemoryWarning;
- (void)handleBackAction;
- (void)tabBar:(id)arg1 didSelectBarItem:(id)arg2;
- (void)createTarBar;
- (void)configNavigationBar;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithCrowdfuning:(id)arg1 ResultBlock:(CDUnknownBlockType)arg2;
- (id)initWithSharedVideo:(id)arg1 ResultBlock:(CDUnknownBlockType)arg2;
- (id)initWithFeedDict:(id)arg1 pingbackModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

