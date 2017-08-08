//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PTHViewController.h"

@class PTHShapeView, PTHStaticSectionCell, UILabel, _PTHSteppedSlider;

@interface PTHTweetbotDisplaySettingsController : PTHViewController
{
    _PTHSteppedSlider *_fontSlider;
    PTHStaticSectionCell *_defaultThemeCell;
    PTHStaticSectionCell *_nightThemeCell;
    PTHStaticSectionCell *_brightnessThemeCell;
    PTHShapeView *_brightnessIndicator;
    long long _indicatorState;
    double _brightness;
    UILabel *_themeDescriptionLabel;
}

- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)fontSizeChanged:(id)arg1;
- (void)changeUseSystemFont:(id)arg1;
- (void)changeRoundAvatar:(id)arg1;
- (void)changeBadgesEnabled:(id)arg1;
- (void)changeThemeAutoChange:(id)arg1;
- (void)changeTheme:(id)arg1;
- (void)_updateBrightnessIndicator;
- (void)_updateIndicatorColor;
- (void)_updateUI;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
