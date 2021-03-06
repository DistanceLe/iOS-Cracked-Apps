//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseViewController.h"

#import "WPSeatBottomBarDelegate-Protocol.h"
#import "WPSeatChoosedViewDelegate-Protocol.h"
#import "WPSeatsViewDataSource-Protocol.h"
#import "WPSeatsViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIView, WPCinemaModel, WPCinemaScreenModel, WPMovieScreenModel, WPNoticeView, WPSeatBottomBar, WPSeatChoosedView, WPSeatHeadView, WPSeatMapModel, WPSeatsView;

@interface WPSeatsViewController : GWBaseViewController <WPSeatsViewDelegate, WPSeatsViewDataSource, WPSeatBottomBarDelegate, WPSeatChoosedViewDelegate>
{
    WPCinemaModel *_cinemaModel;
    WPCinemaScreenModel *_cinemaScreenModel;
    WPMovieScreenModel *_movieScreenModel;
    WPSeatMapModel *_currentSeatMap;
    WPSeatHeadView *_headView;
    WPSeatBottomBar *_bottomBar;
    WPNoticeView *_noticeView;
    WPSeatChoosedView *_choosedView;
    WPSeatsView *_seatsView;
    NSMutableArray *_choosedSeatsArray;
    UIView *_coverView;
}

@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) NSMutableArray *choosedSeatsArray; // @synthesize choosedSeatsArray=_choosedSeatsArray;
@property(retain, nonatomic) WPSeatsView *seatsView; // @synthesize seatsView=_seatsView;
@property(retain, nonatomic) WPSeatChoosedView *choosedView; // @synthesize choosedView=_choosedView;
@property(retain, nonatomic) WPNoticeView *noticeView; // @synthesize noticeView=_noticeView;
@property(retain, nonatomic) WPSeatBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) WPSeatHeadView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) WPSeatMapModel *currentSeatMap; // @synthesize currentSeatMap=_currentSeatMap;
@property(retain, nonatomic) WPMovieScreenModel *movieScreenModel; // @synthesize movieScreenModel=_movieScreenModel;
@property(retain, nonatomic) WPCinemaScreenModel *cinemaScreenModel; // @synthesize cinemaScreenModel=_cinemaScreenModel;
@property(retain, nonatomic) WPCinemaModel *cinemaModel; // @synthesize cinemaModel=_cinemaModel;
- (void).cxx_destruct;
- (void)navigationOrderView:(id)arg1 snackArray:(id)arg2 rightsArray:(id)arg3;
- (void)wp_seatBottomBarDidClickMakeSure:(id)arg1;
- (void)wp_seatChoosedView:(id)arg1 didRemoveSelectedSeats:(id)arg2;
- (void)setSeatSelected:(_Bool)arg1 seat:(id)arg2;
- (void)removeSelectSeats;
- (void)seatsView:(id)arg1 didTapSeatAtLocation:(struct WPSeatLocation)arg2;
- (_Bool)seatsView:(id)arg1 shouldSelectSeatAtLocation:(struct WPSeatLocation)arg2;
- (id)seatsView:(id)arg1 seatImageNameAtLocation:(struct WPSeatLocation)arg2 seatState:(long long)arg3;
- (id)seatsView:(id)arg1 seatImageURLAtLocation:(struct WPSeatLocation)arg2 seatState:(long long)arg3;
- (id)seatsView:(id)arg1 seatAtLocation:(struct WPSeatLocation)arg2;
- (id)cursorDataOfRowsInSeatsView:(id)arg1;
- (long long)numberOfColumnsInSeatsView:(id)arg1;
- (long long)numberOfRowsInSeatsView:(id)arg1;
- (void)reloadSeatData;
- (void)cleanData;
- (void)showNotice:(id)arg1 animation:(_Bool)arg2;
- (void)requstNoticeData;
- (void)requestSeatData;
- (void)requestData;
- (void)setUpViews;
- (void)backProcess;
- (void)setupNav;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCinema:(id)arg1 cinemaScreen:(id)arg2 movieScreen:(id)arg3;
- (void)requestSeatsMapWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

