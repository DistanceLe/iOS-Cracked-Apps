//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TBSNSBasicServiceDelegate.h"
#import "TBSNSEntryMenuViewDelegate.h"
#import "TBSNSSecondFloorDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSMutableDictionary, NSString, TBNaviBarMoreButton, TBSNSBasicService, TBSNSHomePageMenuView, TBSNSHomePageTabListItem, TBSNSHomePageTabView, TBSNSSegmentView, UIScrollView, UIToolbar, UIViewController;

@interface TBSNSHomePageView : UIView <TBSNSEntryMenuViewDelegate, UIScrollViewDelegate, TBSNSBasicServiceDelegate, TBSNSSecondFloorDelegate>
{
    _Bool isFirstInFeeds;
    long long curTabIndex;
    long long loginTabIndex;
    long long nologinTabIndex;
    NSString *_sid;
    TBSNSHomePageTabView *curTab;
    _Bool _isNeedUpdateTabs;
    _Bool _isTabsUpdating;
    _Bool _is2thFloorAnimation;
    float _tabbarHeight;
    struct CGPoint _oldListPos;
    float _navTop;
    float _tabbarExpandCursor;
    TBSNSHomePageMenuView *_entryView;
    UIViewController *_vc;
    TBNaviBarMoreButton *_msgView;
    UIView *_line1;
    UIView *_line2;
    UIView *_naviBg;
    NSMutableDictionary *_tabViews;
    TBSNSSegmentView *_segmentView;
    UIToolbar *_toolBar;
    UIScrollView *_scrollView;
    long long _homeTabCount;
    TBSNSBasicService *_tabService;
    TBSNSHomePageTabListItem *_tabDataItem;
    double _scrollH;
    NSString *_entryJumpUrl;
    struct CGRect _tabbarOriginalFrame;
    struct CGRect _entryViewOriginalFrame;
    struct CGRect _toolbarOriginalFrame;
    struct CGRect _naviBarOriginalFrame;
}

@property(nonatomic) struct CGRect naviBarOriginalFrame; // @synthesize naviBarOriginalFrame=_naviBarOriginalFrame;
@property(nonatomic) struct CGRect toolbarOriginalFrame; // @synthesize toolbarOriginalFrame=_toolbarOriginalFrame;
@property(nonatomic) struct CGRect entryViewOriginalFrame; // @synthesize entryViewOriginalFrame=_entryViewOriginalFrame;
@property(nonatomic) struct CGRect tabbarOriginalFrame; // @synthesize tabbarOriginalFrame=_tabbarOriginalFrame;
@property(copy, nonatomic) NSString *entryJumpUrl; // @synthesize entryJumpUrl=_entryJumpUrl;
@property(nonatomic) double scrollH; // @synthesize scrollH=_scrollH;
@property(retain, nonatomic) TBSNSHomePageTabListItem *tabDataItem; // @synthesize tabDataItem=_tabDataItem;
@property(retain, nonatomic) TBSNSBasicService *tabService; // @synthesize tabService=_tabService;
@property(nonatomic) long long homeTabCount; // @synthesize homeTabCount=_homeTabCount;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIToolbar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) TBSNSSegmentView *segmentView; // @synthesize segmentView=_segmentView;
@property(retain, nonatomic) NSMutableDictionary *tabViews; // @synthesize tabViews=_tabViews;
@property(retain, nonatomic) UIView *naviBg; // @synthesize naviBg=_naviBg;
@property(retain, nonatomic) UIView *line2; // @synthesize line2=_line2;
@property(retain, nonatomic) UIView *line1; // @synthesize line1=_line1;
@property(nonatomic) __weak TBNaviBarMoreButton *msgView; // @synthesize msgView=_msgView;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
@property(retain, nonatomic) TBSNSHomePageMenuView *entryView; // @synthesize entryView=_entryView;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onListScroll:(long long)arg1 contentOffset:(struct CGPoint)arg2;
- (double)headerHeight;
- (void)resetViews;
- (void)expandViews;
- (void)onMemoryWarning;
- (void)serviceDidFinishLoad:(id)arg1;
- (void)service:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)updateTabs;
- (_Bool)isNeedUpdateTabs;
- (void)checkAndUpdateTabs;
- (void)onLeaveWeitao;
- (void)TBSNSEntryMenuView:(id)arg1 tappedBubbleWithIndex:(int)arg2 key:(id)arg3;
- (id)dataForUserTrack;
- (void)handlePageEvent:(id)arg1;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)showLoginBanner:(_Bool)arg1;
- (void)refreshCurrentTab;
- (void)saveCurTabIndex:(int)arg1;
- (void)setCurrentTabById:(long long)arg1;
- (void)setCurrentTab:(long long)arg1;
- (void)onLogout;
- (void)onLogin;
- (void)checkHomePageView;
- (void)autoUILogic:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidBeginDecelerating:(id)arg1;
- (void)selectItem:(int)arg1;
- (void)onChangeTab:(long long)arg1;
- (void)changeTab:(long long)arg1;
- (void)dealloc;
- (void)updateFestivalStyle;
- (void)updateNavibarItems;
- (void)setFestivalStyle:(_Bool)arg1;
- (void)setUpTabs;
- (void)loadTabCache;
- (id)initWithFrame:(struct CGRect)arg1 VC:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

