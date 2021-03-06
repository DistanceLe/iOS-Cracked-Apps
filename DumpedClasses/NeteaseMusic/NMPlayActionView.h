//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NMPlayLyricView, NMPlayProgramInfoView, NMVolumeView, NSString, NSTimer, UIImageView, UITapGestureRecognizer;

@interface NMPlayActionView : UIView <UIGestureRecognizerDelegate>
{
    id _delegate;
    double _volumeViewAppearanceHeight;
    unsigned long long _type;
    UITapGestureRecognizer *_tapGesture;
    UIView *_blackBg;
    NMVolumeView *_volumeView;
    UIImageView *_volumeBgView;
    NMPlayLyricView *_lyricView;
    NMPlayProgramInfoView *_programInfoView;
    id <SDWebImageOperation> _downloadOperation;
    _Bool _isDjStyle;
    _Bool _alphaHidden;
    _Bool _isImmerse;
    NSTimer *_screenKeepShineTimer;
    NSString *_currentBackImageUrl;
}

@property(retain, nonatomic) NSString *currentBackImageUrl; // @synthesize currentBackImageUrl=_currentBackImageUrl;
@property(retain, nonatomic) NSTimer *screenKeepShineTimer; // @synthesize screenKeepShineTimer=_screenKeepShineTimer;
@property(nonatomic) _Bool isImmerse; // @synthesize isImmerse=_isImmerse;
@property(nonatomic) _Bool alphaHidden; // @synthesize alphaHidden=_alphaHidden;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NMPlayProgramInfoView *programInfoView; // @synthesize programInfoView=_programInfoView;
@property(readonly, nonatomic) NMPlayLyricView *lyricView; // @synthesize lyricView=_lyricView;
- (void).cxx_destruct;
- (void)openScreenKeepShine;
- (void)shutDownScreenKeepShine;
- (void)setUIStyle;
- (void)removeVolumeView;
- (void)addVolumeView;
- (void)createVolumeViewIfNeeded;
- (void)songChange:(id)arg1;
- (void)removeCancelGestureRecognizer;
- (void)addCancelGestureRecognizerWithTarget:(id)arg1 selector:(SEL)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

