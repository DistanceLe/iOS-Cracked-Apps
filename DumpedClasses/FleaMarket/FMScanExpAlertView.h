//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMImageView, UIButton;

@interface FMScanExpAlertView : UIView
{
    CDUnknownBlockType _dismissAction;
    FMImageView *_guideImageView;
    UIButton *_gotoButton;
}

@property(retain, nonatomic) UIButton *gotoButton; // @synthesize gotoButton=_gotoButton;
@property(retain, nonatomic) FMImageView *guideImageView; // @synthesize guideImageView=_guideImageView;
@property(copy, nonatomic) CDUnknownBlockType dismissAction; // @synthesize dismissAction=_dismissAction;
- (void).cxx_destruct;
- (void)layout;
- (id)init;

@end

