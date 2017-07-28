//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ESPAutoRotationView, ESPHomeActivity, UIImageView;

@interface ESPHomeActivityView : UIView
{
    ESPHomeActivity *_activityInfo;
    UIImageView *_activityIconView;
    ESPAutoRotationView *_rotationView;
}

@property(retain, nonatomic) ESPAutoRotationView *rotationView; // @synthesize rotationView=_rotationView;
@property(retain, nonatomic) UIImageView *activityIconView; // @synthesize activityIconView=_activityIconView;
@property(retain, nonatomic) ESPHomeActivity *activityInfo; // @synthesize activityInfo=_activityInfo;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)tapView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
