//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ExploreDetailBaseADView.h"

@class ExploreArticleMovieViewDelegate, ExploreMovieView, SSThemedButton, SSThemedLabel, SSThemedView, TTImageView, UIImageView;

@interface ExploreDetailMixedVideoADView : ExploreDetailBaseADView
{
    SSThemedLabel *_titleLabel;
    UIImageView *_topMaskView;
    TTImageView *_logo;
    SSThemedButton *_playButton;
    ExploreMovieView *_movieView;
    SSThemedLabel *_videoDurationLabel;
    SSThemedLabel *_adLabel;
    SSThemedLabel *_sourceLabel;
    SSThemedView *_bottomLine;
    SSThemedButton *_moreInfoButton;
    SSThemedLabel *_moreInfoLabel;
    ExploreArticleMovieViewDelegate *_movieViewDelegate;
}

+ (double)heightForADModel:(id)arg1 constrainedToWidth:(double)arg2;
+ (void)load;
@property(retain, nonatomic) ExploreArticleMovieViewDelegate *movieViewDelegate; // @synthesize movieViewDelegate=_movieViewDelegate;
@property(retain, nonatomic) SSThemedLabel *moreInfoLabel; // @synthesize moreInfoLabel=_moreInfoLabel;
@property(retain, nonatomic) SSThemedButton *moreInfoButton; // @synthesize moreInfoButton=_moreInfoButton;
@property(retain, nonatomic) SSThemedView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) SSThemedLabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) SSThemedLabel *adLabel; // @synthesize adLabel=_adLabel;
@property(retain, nonatomic) SSThemedLabel *videoDurationLabel; // @synthesize videoDurationLabel=_videoDurationLabel;
@property(retain, nonatomic) ExploreMovieView *movieView; // @synthesize movieView=_movieView;
@property(retain, nonatomic) SSThemedButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) TTImageView *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) UIImageView *topMaskView; // @synthesize topMaskView=_topMaskView;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)stopMovieViewPlayWithoutRemoveMovieView:(id)arg1;
- (void)stopMovieViewPlay:(id)arg1;
- (void)movieViewPlayFinished:(id)arg1;
- (void)removeMovieViewNotification;
- (void)registerMovieViewNotification;
- (void)_moreInfoActionFired:(id)arg1;
- (void)invalideMovieView;
- (void)pauseMovie;
- (void)scrollInOrOutBlock:(_Bool)arg1;
- (void)sendClickVideoTrack;
- (void)playButtonClicked;
- (void)layout;
- (void)setAdModel:(id)arg1;
- (void)buildView;
- (id)initWithWidth:(double)arg1;
- (void)dealloc;

@end

