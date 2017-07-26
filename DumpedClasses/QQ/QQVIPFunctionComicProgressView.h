//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QQVIPFunctionComicButton, QQVIPFunctionComicSlider, UILabel;

@interface QQVIPFunctionComicProgressView : UIView
{
    QQVIPFunctionComicButton *_prevPageButton;
    QQVIPFunctionComicButton *_nextPageButton;
    QQVIPFunctionComicSlider *_progressSilder;
    UILabel *_progressLable;
    UIView *_topLineView;
    int _xo;
    long long _mode;
}

@property long long mode; // @synthesize mode=_mode;
- (void)setProgressText:(long long)arg1 total:(long long)arg2;
- (void)refreshUI;
- (void)layoutSubviews;
- (id)progressButton:(id)arg1 image:(id)arg2 highlightImage:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(retain, nonatomic) QQVIPFunctionComicButton *nextPageButton; // @dynamic nextPageButton;
@property(retain, nonatomic) QQVIPFunctionComicButton *prevPageButton; // @dynamic prevPageButton;
@property(retain, nonatomic) UILabel *progressLable; // @dynamic progressLable;
@property(retain, nonatomic) QQVIPFunctionComicSlider *progressSilder; // @dynamic progressSilder;

@end
