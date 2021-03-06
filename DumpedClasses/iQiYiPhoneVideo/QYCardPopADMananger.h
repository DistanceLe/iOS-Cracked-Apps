//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IQYDataLoadManagerDelegate-Protocol.h"

@class IQYCardViewManager, IQYPopControlManager, NSMutableArray, NSString, QYCardPopADInfo, QYPageData, UIViewController;
@protocol QYCardPopADManangerDelegate;

@interface QYCardPopADMananger : NSObject <IQYDataLoadManagerDelegate>
{
    IQYPopControlManager *_controlManager;
    NSMutableArray *_controlArr;
    id <QYCardPopADManangerDelegate> _delegate;
    NSString *_curPageName;
    QYCardPopADInfo *_curPageControlInfo;
    IQYCardViewManager *_popMananger;
    QYPageData *_curPageData;
    NSString *_curPage_t;
    NSString *_curPage_st;
    UIViewController *_hugePlayer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) UIViewController *hugePlayer; // @synthesize hugePlayer=_hugePlayer;
@property(retain, nonatomic) NSString *curPage_st; // @synthesize curPage_st=_curPage_st;
@property(retain, nonatomic) NSString *curPage_t; // @synthesize curPage_t=_curPage_t;
@property(retain, nonatomic) QYPageData *curPageData; // @synthesize curPageData=_curPageData;
@property(retain, nonatomic) IQYCardViewManager *popMananger; // @synthesize popMananger=_popMananger;
@property(retain, nonatomic) QYCardPopADInfo *curPageControlInfo; // @synthesize curPageControlInfo=_curPageControlInfo;
@property(retain, nonatomic) NSString *curPageName; // @synthesize curPageName=_curPageName;
@property(nonatomic) id <QYCardPopADManangerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *controlArr; // @synthesize controlArr=_controlArr;
@property(retain, nonatomic) IQYPopControlManager *controlManager; // @synthesize controlManager=_controlManager;
- (void)notifyGetDataFailed;
- (void)dataLoadManagerFailed:(id)arg1;
- (void)dataLoadManagerFinished:(id)arg1;
- (void)requestPopADDataWithURL:(id)arg1;
- (void)rePopADAfterHugeADFailed;
- (_Bool)shouldShowPaopaoStarGuide;
- (_Bool)shouldShownMovieOrderTipsAD;
- (_Bool)shouldShowHugeAd;
- (_Bool)shoulShowPopAdInfoWith:(id)arg1;
- (_Bool)isShowingGuide;
- (_Bool)shouldReGetControlInfo;
- (id)orderControllArrByPriority:(id)arg1;
- (_Bool)isRightControlItem:(id)arg1 WithPage_t:(id)arg2 WithPage_st:(id)arg3;
- (id)getControlArrWithPage_t:(id)arg1 WithPage_st:(id)arg2;
- (void)popCardADViewControlItemWithPage_t:(id)arg1 WithPage_st:(id)arg2;
- (void)getADPopControlDatas;
- (void)resetDelegate:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

