//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MulMemSelBusiProcessDelegate.h"
#import "QQRichMediaPickerControllerDelegate.h"

@class NSArray, NSDictionary, NSString, QQMassBlessVideoController, QQMessageModel, QQProgressHUD, QQRichMsgPreviewDialog, QQRichTinyVideoClips, SimpleAlertView, UIButton, UINavigationController, UIView, UIViewController;

@interface QQMassBlessSendPTVModule : NSObject <QQRichMediaPickerControllerDelegate, MulMemSelBusiProcessDelegate>
{
    QQMassBlessVideoController *_videoController;
    UINavigationController *_videoNav;
    UINavigationController *_memSelNav;
    NSArray *_selectedUins;
    QQProgressHUD *_progressHUD;
    int _ssoSeq;
    NSDictionary *_videoClipsInfo;
    SimpleAlertView *_failAlert;
    QQRichMsgPreviewDialog *_sendConfirmAlert;
    UIButton *_cancelBtn;
    _Bool _isLastUpdateVideoOverload;
    _Bool _isLastUpdateMessageOverload;
    int _uiSeq;
    QQRichTinyVideoClips *_videoClips;
    UIViewController *_viewController;
    UIView *_ptvMask;
    QQMessageModel *_ptvSendingMsgModel;
    NSString *_historyMd5;
}

@property(retain, nonatomic) NSString *historyMd5; // @synthesize historyMd5=_historyMd5;
@property int uiSeq; // @synthesize uiSeq=_uiSeq;
@property(retain) QQMessageModel *ptvSendingMsgModel; // @synthesize ptvSendingMsgModel=_ptvSendingMsgModel;
@property(retain, nonatomic) UIView *ptvMask; // @synthesize ptvMask=_ptvMask;
@property(nonatomic) _Bool isLastUpdateMessageOverload; // @synthesize isLastUpdateMessageOverload=_isLastUpdateMessageOverload;
@property(nonatomic) _Bool isLastUpdateVideoOverload; // @synthesize isLastUpdateVideoOverload=_isLastUpdateVideoOverload;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) QQRichTinyVideoClips *videoClips; // @synthesize videoClips=_videoClips;
- (void).cxx_destruct;
- (void)processVideoChat;
- (void)onAccountLogoutNotification:(id)arg1;
- (void)handleStopSendPtv;
- (void)stopSendPtv;
- (void)processFail:(_Bool)arg1;
- (void)handleRichMediaTransferStateNotification:(id)arg1;
- (void)multiMsgSendResult:(id)arg1;
- (void)multiMsgResend:(id)arg1;
- (void)onPtvSendMsg:(id)arg1;
- (void)simpleAlertViewDismiss:(id)arg1;
- (void)buttonClick:(id)arg1 atIndex:(int)arg2;
- (void)cancelButtonClick;
- (void)sendButtonClick:(id)arg1 msg:(id)arg2;
- (void)showSendVideoMask;
- (void)sendVideo;
- (void)onBusinessProcessCancelMulMemSelector:(id)arg1 currentViewControllerClass:(id)arg2 selectedMember:(id)arg3;
- (void)onBusinessProcessWithSelectedMems:(id)arg1 currentViewControllerClass:(id)arg2 currentViewController:(id)arg3;
- (void)richMediaPickerControllerDidCancel:(id)arg1;
- (void)richMediaPickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)openVideoViewController;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
