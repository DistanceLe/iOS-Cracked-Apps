//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KKProgressTipsInfo, MPTipsMiniProgressView, UIImageView, UILabel;

@interface KKProgressTipsView : UIView
{
    UIImageView *_imgView;
    UILabel *_timelbl;
    UILabel *_desLbl;
    MPTipsMiniProgressView *_miniProgress;
    UIView *_maskView;
    KKProgressTipsInfo *_tipsInfo;
}

@property(retain, nonatomic) KKProgressTipsInfo *tipsInfo; // @synthesize tipsInfo=_tipsInfo;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) MPTipsMiniProgressView *miniProgress; // @synthesize miniProgress=_miniProgress;
@property(retain, nonatomic) UILabel *desLbl; // @synthesize desLbl=_desLbl;
@property(retain, nonatomic) UILabel *timelbl; // @synthesize timelbl=_timelbl;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)maskGradientDisAppearAnimation;
- (void)maskGradientAppearAnimation;
- (void)__updateTipsInfo;
- (void)hideMiniProgress:(_Bool)arg1;
- (void)setPercent:(double)arg1;
- (void)showSimpleModel;
- (void)showLiveModel;
- (void)showTimeModel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

