//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, OPSInputPasswordIntroView;

@protocol OPSInputPasswordIntroViewDelegate <NSObject>
- (void)OPSInputPasswordIntroView_buttonShowHidePasswordClicked:(OPSInputPasswordIntroView *)arg1 selected:(_Bool)arg2;
- (void)OPSInputPasswordIntroView_buttonForgetPasswordClicked:(OPSInputPasswordIntroView *)arg1;
- (void)OPSInputPasswordIntroView_buttonNextClicked:(OPSInputPasswordIntroView *)arg1 password:(NSString *)arg2;
@end
