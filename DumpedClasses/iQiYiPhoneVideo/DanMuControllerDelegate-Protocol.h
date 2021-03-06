//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DanMuModel, UIView;

@protocol DanMuControllerDelegate <NSObject>

@optional
- (_Bool)isLockScreenForDanMu;
- (void)handleDanmuLabelClickWithType:(_Bool)arg1 andData:(DanMuModel *)arg2;
- (int)getCurrentScreenMode;
- (void)toCancelAutoHideAccessoryViews;
- (void)toHideAccessoryViews;
- (UIView *)getPlayContentView;
- (void)controlViewAddSubview:(UIView *)arg1;
- (void)setDanMuControlButtonType:(unsigned long long)arg1 isOn:(_Bool)arg2;
@end

