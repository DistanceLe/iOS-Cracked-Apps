//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FAMobileLiveContinueSendBombAnimateViewDelegate.h"
#import "FAMobileLiveGiftNumberAnimationModelDelegate.h"

@class FALCImageNumberView, FAMobileLiveContinueSendBombAnimateView, FAMobileLiveContinueSendLightAnimateView, FAMobileLiveGiftNumberAnimationModel, FAMobileLiveMessage, NSString, NSTimer, UIImageView, UILabel;

@interface FAMobileLiveGiftChatCellView : UIView <FAMobileLiveContinueSendBombAnimateViewDelegate, FAMobileLiveGiftNumberAnimationModelDelegate>
{
    UILabel *senderLabel;
    UILabel *contentLabel;
    struct CGSize contentLabelSize;
    UIImageView *contentBackgroundImageView;
    UIImageView *giftImageView;
    FALCImageNumberView *giftNumberView;
    FALCImageNumberView *continueSendGiftView;
    FALCImageNumberView *continueSendAnimateView;
    UIImageView *continueSendTipView;
    FAMobileLiveContinueSendBombAnimateView *continueSendBombAnimateView;
    _Bool isInBombViewStatus;
    FAMobileLiveContinueSendLightAnimateView *lightAnimateImageView;
    NSString *senderId;
    UIImageView *allInTipImageView;
    NSTimer *giftNumberTimer;
    _Bool _isShowing;
    NSString *_userIdStr;
    NSString *_giftIdStr;
    id <FAMobileLiveGiftChatCellViewDelegate> _delegate;
    id <FAMobileLiveGiftChatCellViewDataSource> _dataSource;
    long long _giftCount;
    long long _continueSendGiftCount;
    long long _missingLevel;
    long long _viewType;
    FAMobileLiveMessage *_msg;
    UIView *_bgView;
    FAMobileLiveGiftNumberAnimationModel *_giftNumberAnimateModel;
}

@property(retain, nonatomic) FAMobileLiveGiftNumberAnimationModel *giftNumberAnimateModel; // @synthesize giftNumberAnimateModel=_giftNumberAnimateModel;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) FAMobileLiveMessage *msg; // @synthesize msg=_msg;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
@property(nonatomic) long long missingLevel; // @synthesize missingLevel=_missingLevel;
@property(nonatomic) long long continueSendGiftCount; // @synthesize continueSendGiftCount=_continueSendGiftCount;
@property(nonatomic) long long giftCount; // @synthesize giftCount=_giftCount;
@property(nonatomic) __weak id <FAMobileLiveGiftChatCellViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <FAMobileLiveGiftChatCellViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *giftIdStr; // @synthesize giftIdStr=_giftIdStr;
@property(retain, nonatomic) NSString *userIdStr; // @synthesize userIdStr=_userIdStr;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getGiftCellSenderId;
- (void)setAnimationViewHidden:(_Bool)arg1;
- (void)tapUserInfo:(id)arg1;
- (_Bool)isSameUserSameGiftByCheck:(id)arg1;
- (_Bool)isSameUserSendByCheck:(id)arg1;
- (void)endDismissAnimation;
- (void)hideAnimateViews;
- (void)resetViewStatusShouldResetModelData:(_Bool)arg1;
- (void)resetViewStatus;
- (_Bool)getIsUpToContinueBombAnimationWithPrice:(long long)arg1 giftNum:(long long)arg2;
- (void)dismissBgView;
- (void)renewViewsContentByGiftNumIncrease;
- (void)startDismissTimer;
- (void)setMessage:(id)arg1;
- (void)doBombAnimationContinue;
- (void)bombAnimationDidStopWithFlag:(_Bool)arg1;
- (void)bombCellViewDidDisappear;
- (void)bombCellViewDidAppear;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (double)getCellViewHeight;
- (_Bool)isCellViewWillOutofSeeScreen;
- (_Bool)isCellViewOutofSeeScreen;
- (void)doBombGiftAnimate;
- (void)doContinueGiftLightAnimate;
- (void)renewGiftNumberViewWithGiftNum:(id)arg1 shouldRenewLayout:(_Bool)arg2;
- (void)renewGiftNumberAnimationOtherViewFrame;
- (void)checkGiftNumberAnimationAndStop;
- (void)stopGiftNumberAnimation;
- (void)dealDoGiftNumberViewAnimate;
- (_Bool)isDoingGiftNumberAnimation;
- (void)doContinueSendGiftAnimate;
- (unsigned long long)getGiftLevelWithGiftNum:(long long)arg1;
- (long long)getLowLevelPrice;
- (void)reduceContentLabelWidthWithContentLabelWidth:(double)arg1;
- (void)updateViewsWidthByContinueTipViewWithContentLabelWidth:(double)arg1;
- (id)getAnimationSuperView;
- (_Bool)isContinueSendGift;
- (void)updateViewWithMsg:(id)arg1;
- (id)configSenderGiftInfo:(id)arg1;
- (void)addTapUserInfoGestureWithView:(id)arg1;
- (id)getCurrentLiveController;
- (void)addContinueSendGiftBombAnimateView;
- (void)addContinueSendGiftAnimateView;
- (void)initViews;
- (void)didBecomeActive:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

