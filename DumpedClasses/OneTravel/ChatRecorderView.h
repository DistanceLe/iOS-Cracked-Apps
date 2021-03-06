//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIImageView, UILabel;

@interface ChatRecorderView : UIView
{
    NSMutableArray *peakImageLeftAry;
    NSMutableArray *peakImageRightAry;
    UIImageView *_leftImageView;
    UIImageView *_rightImageView;
    UIImageView *_trashCanIV;
    UILabel *_textView;
}

@property(retain, nonatomic) UILabel *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIImageView *trashCanIV; // @synthesize trashCanIV=_trashCanIV;
@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
- (void).cxx_destruct;
- (void)updateMetersByAvgPower:(float)arg1;
- (void)restoreDisplay;
- (void)dealloc;
- (void)setTextViewText:(id)arg1;
- (void)initilization;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)GetimageNamed:(id)arg1;
- (id)oneimage_path:(id)arg1;
- (_Bool)isValidString:(id)arg1;

@end

