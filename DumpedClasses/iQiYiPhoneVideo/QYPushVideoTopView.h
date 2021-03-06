//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPushVideoView.h"

@class QYPushDeviceSelectView, QYPushTopViewModel, UIButton, UILabel;
@protocol QYPushVideoTopViewDelegate;

@interface QYPushVideoTopView : QYPushVideoView
{
    _Bool _needFullMiTingShowPingback;
    _Bool _needHalfMiTingShowPingback;
    int _videoPushState;
    UIButton *_backButton;
    UIButton *_clarityButton;
    UIButton *_miTingButton;
    UILabel *_pushTitle;
    QYPushDeviceSelectView *_changPushDeviceButton;
    UIButton *_settingButton;
    id <QYPushVideoTopViewDelegate> _delegate;
    QYPushTopViewModel *_topViewModel;
}

@property(nonatomic) _Bool needHalfMiTingShowPingback; // @synthesize needHalfMiTingShowPingback=_needHalfMiTingShowPingback;
@property(nonatomic) _Bool needFullMiTingShowPingback; // @synthesize needFullMiTingShowPingback=_needFullMiTingShowPingback;
@property(retain, nonatomic) QYPushTopViewModel *topViewModel; // @synthesize topViewModel=_topViewModel;
@property(nonatomic) int videoPushState; // @synthesize videoPushState=_videoPushState;
@property(nonatomic) __weak id <QYPushVideoTopViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *settingButton; // @synthesize settingButton=_settingButton;
@property(retain, nonatomic) QYPushDeviceSelectView *changPushDeviceButton; // @synthesize changPushDeviceButton=_changPushDeviceButton;
@property(retain, nonatomic) UILabel *pushTitle; // @synthesize pushTitle=_pushTitle;
@property(retain, nonatomic) UIButton *miTingButton; // @synthesize miTingButton=_miTingButton;
@property(retain, nonatomic) UIButton *clarityButton; // @synthesize clarityButton=_clarityButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
- (void).cxx_destruct;
- (void)changeTopViewStyle;
- (_Bool)isMiTingEanble;
- (void)showMiTingEntry:(_Bool)arg1 screenMode:(int)arg2;
- (void)updatePushDataRates:(id)arg1;
- (void)updateCurrentDataRate:(long long)arg1;
- (void)setPushTitleName:(id)arg1;
- (void)showClarityEntry:(_Bool)arg1;
- (void)showSettingEntry:(_Bool)arg1;
- (void)settingButtonClick:(id)arg1;
- (void)miTingButtonClick;
- (void)clarityButtonClick;
- (void)backButtonClick;
- (void)changPushDeviceButtonClick:(id)arg1;
- (id)init;

@end

