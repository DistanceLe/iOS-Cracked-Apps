//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NMArtist, NMUser, NSString, UIActivityIndicatorView, UIColor, UIImage;

@interface NMFocusButton : UIButton
{
    UIActivityIndicatorView *_waitingView;
    _Bool _waitingViewAnimating;
    NMUser *_user;
    NMArtist *_artist;
    unsigned long long _buttonType;
    UIImage *_bgImage;
    UIImage *_bgSelectedImage;
    UIImage *_addIconImage;
    UIImage *_addSelectedIconImage;
    UIImage *_addedIconImage;
    UIImage *_addedSelectedIconImage;
    UIImage *_addedSmallIconImage;
    UIImage *_addSmallIconImage;
    UIImage *_addSelectedSmallIconImage;
    UIImage *_narrowAddIconImage;
    UIImage *_narrowAddedIconImage;
    UIImage *_eventBgImage;
    UIImage *_eventBgPrsImage;
    UIImage *_eventBgSelectedImage;
    UIImage *_eventAddIconImage;
    UIImage *_eventAddIconPrsImage;
    UIImage *_eventAddedIconImage;
    UIColor *_addTextColor;
    UIColor *_addedTextColor;
    UIColor *_highlightTextColor;
    _Bool _showBackground;
    id <NMFocusButtonDelegate> _delegate;
    NSString *_scheme;
}

+ (struct CGSize)eventButtonSize;
+ (struct CGSize)narrowButtonSize;
+ (struct CGSize)buttonSize;
@property(readonly, nonatomic) UIImage *eventBgSelectedImage; // @synthesize eventBgSelectedImage=_eventBgSelectedImage;
@property(readonly, nonatomic) UIImage *eventBgPrsImage; // @synthesize eventBgPrsImage=_eventBgPrsImage;
@property(readonly, nonatomic) UIImage *eventBgImage; // @synthesize eventBgImage=_eventBgImage;
@property(readonly, nonatomic) UIImage *addSelectedSmallIconImage; // @synthesize addSelectedSmallIconImage=_addSelectedSmallIconImage;
@property(readonly, nonatomic) UIImage *addSmallIconImage; // @synthesize addSmallIconImage=_addSmallIconImage;
@property(readonly, nonatomic) UIImage *addedSmallIconImage; // @synthesize addedSmallIconImage=_addedSmallIconImage;
@property(readonly, nonatomic) UIImage *addedSelectedIconImage; // @synthesize addedSelectedIconImage=_addedSelectedIconImage;
@property(nonatomic) _Bool showBackground; // @synthesize showBackground=_showBackground;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(nonatomic) id <NMFocusButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setArtist:(id)arg1;
- (void)setUser:(id)arg1 buttonType:(unsigned long long)arg2;
- (void)startWaitingViewAnimating:(_Bool)arg1;
- (void)onButtonWaiting:(id)arg1;
- (void)updateEventFocusButtonState:(_Bool)arg1;
- (void)updateButtonState:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setBackgroundForSkin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UIImage *eventAddedIconImage;
@property(readonly, nonatomic) UIImage *eventAddIconPrsImage;
@property(readonly, nonatomic) UIImage *eventAddIconImage;
@property(readonly, nonatomic) UIImage *narrowAddedIconImage;
@property(readonly, nonatomic) UIImage *narrowAddIconImage;
@property(readonly, nonatomic) UIColor *highlightTextColor;
@property(readonly, nonatomic) UIColor *addTextColor;
@property(readonly, nonatomic) UIColor *addedTextColor;
@property(readonly, nonatomic) UIImage *addedIconImage;
@property(readonly, nonatomic) UIImage *addSelectedIconImage;
@property(readonly, nonatomic) UIImage *addIconImage;

@end
