//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CNNibLoadView.h"

@class CNLogisticOrderListItem, CNLogisticService, NSLayoutConstraint, TBRCommand, UITableView, UIView;

@interface CNComplainBarView : CNNibLoadView
{
    _Bool _goComplain;
    _Bool _hadDisplay;
    CNLogisticOrderListItem *_bagItem;
    UITableView *_tableView;
    CNLogisticService *_complainService;
    UIView *_topLine;
    NSLayoutConstraint *_topLineHeight;
    TBRCommand *_evaluationCommand;
    TBRCommand *_complaintsCommand;
    TBRCommand *_onlineHelpCommand;
}

@property(retain, nonatomic) TBRCommand *onlineHelpCommand; // @synthesize onlineHelpCommand=_onlineHelpCommand;
@property(retain, nonatomic) TBRCommand *complaintsCommand; // @synthesize complaintsCommand=_complaintsCommand;
@property(retain, nonatomic) TBRCommand *evaluationCommand; // @synthesize evaluationCommand=_evaluationCommand;
@property(nonatomic) _Bool hadDisplay; // @synthesize hadDisplay=_hadDisplay;
@property(nonatomic) _Bool goComplain; // @synthesize goComplain=_goComplain;
@property(nonatomic) __weak NSLayoutConstraint *topLineHeight; // @synthesize topLineHeight=_topLineHeight;
@property(nonatomic) __weak UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) CNLogisticService *complainService; // @synthesize complainService=_complainService;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) CNLogisticOrderListItem *bagItem; // @synthesize bagItem=_bagItem;
- (void).cxx_destruct;
- (void)checkComplain;
- (void)clearDelegatesAndCancel;
- (void)goOnlineHelp;
- (void)goComplaints;
- (void)goEvaluation;
- (id)getServiceProviderArgs;
- (void)addtionalInitialization;
- (void)setUIStyle;

// Remaining properties
@property(retain, nonatomic) UIView *view; // @dynamic view;

@end

