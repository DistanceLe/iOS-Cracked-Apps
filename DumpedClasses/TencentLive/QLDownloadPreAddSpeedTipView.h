//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, QLSImageView, UILabel;

@interface QLDownloadPreAddSpeedTipView : UIView
{
    QLSImageView *_backImge;
    UILabel *_textLabel;
    QLSImageView *_playGirl;
    NSTimer *_refreshDownLoadTaskTimer;
}

+ (void)updateShowCount;
+ (id)curTime;
+ (_Bool)shouldShowView;
@property(retain, nonatomic) NSTimer *refreshDownLoadTaskTimer; // @synthesize refreshDownLoadTaskTimer=_refreshDownLoadTaskTimer;
@property(retain, nonatomic) QLSImageView *playGirl; // @synthesize playGirl=_playGirl;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) QLSImageView *backImge; // @synthesize backImge=_backImge;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)removeSelfFromSuperView;
- (void)disMissSelfNow:(_Bool)arg1;
- (void)tapGestueAction:(id)arg1;
- (void)tryAcclerateSpeed;
- (void)beginCheckDownLoadTaskStatus;
- (void)destoryTimer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

