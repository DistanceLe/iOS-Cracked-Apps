//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class QLTryWatchViewController, UILabel, UIView;

@interface QLTryWatchView : UIButton
{
    UIButton *_tryWatchButton;
    UILabel *_tryWacthTimeLable;
    UIView *_bottomBackgroundView;
    unsigned long long _tryWatchmode;
    QLTryWatchViewController *_tryWatchViewController;
}

@property(nonatomic) QLTryWatchViewController *tryWatchViewController; // @synthesize tryWatchViewController=_tryWatchViewController;
- (void)dealloc;
- (void)clickButton:(id)arg1;
- (id)timeFormatFromInteger:(long long)arg1;
- (void)setWatchViewMode:(unsigned long long)arg1;
- (void)frushView;
- (void)setTryWatchTips:(long long)arg1 playTime:(long long)arg2;
- (void)setTotalPlayTime:(long long)arg1 playTime:(long long)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

