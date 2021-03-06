//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIButton;

@interface GWAdImageButtonView : UIView
{
    UIButton *_skipButton;
    UIView *_animationView;
    CAShapeLayer *_rightShapeLayer;
    CAShapeLayer *_leftShapeLayer;
    double _progress;
    double _rad;
    double _animationAngle;
    double _delayTime;
}

@property(nonatomic) double delayTime; // @synthesize delayTime=_delayTime;
@property(nonatomic) double animationAngle; // @synthesize animationAngle=_animationAngle;
@property(nonatomic) double rad; // @synthesize rad=_rad;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) CAShapeLayer *leftShapeLayer; // @synthesize leftShapeLayer=_leftShapeLayer;
@property(retain, nonatomic) CAShapeLayer *rightShapeLayer; // @synthesize rightShapeLayer=_rightShapeLayer;
@property(retain, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) UIButton *skipButton; // @synthesize skipButton=_skipButton;
- (void).cxx_destruct;
- (void)startAnimation;
- (void)updateProgress;
- (id)initWithFrame:(struct CGRect)arg1;

@end

