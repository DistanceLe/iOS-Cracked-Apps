//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;

@interface QYPlayerPaoPaoFeedVoteButtonView : UIView
{
    _Bool _isSelected;
    CDUnknownBlockType _block;
    NSString *_buttonTittle;
    double _curPercent;
    NSString *_oid;
    NSString *_vcid;
    NSString *_userJoinTimes;
    NSString *_showNum;
    NSString *_vid;
    UIView *_contentView;
    UIButton *_voteButton;
    UIView *_contentBackgroundView;
    UILabel *_percentLabel;
}

@property(retain, nonatomic) UILabel *percentLabel; // @synthesize percentLabel=_percentLabel;
@property(retain, nonatomic) UIView *contentBackgroundView; // @synthesize contentBackgroundView=_contentBackgroundView;
@property(retain, nonatomic) UIButton *voteButton; // @synthesize voteButton=_voteButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(retain, nonatomic) NSString *showNum; // @synthesize showNum=_showNum;
@property(retain, nonatomic) NSString *userJoinTimes; // @synthesize userJoinTimes=_userJoinTimes;
@property(retain, nonatomic) NSString *vcid; // @synthesize vcid=_vcid;
@property(retain, nonatomic) NSString *oid; // @synthesize oid=_oid;
@property(nonatomic) double curPercent; // @synthesize curPercent=_curPercent;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) NSString *buttonTittle; // @synthesize buttonTittle=_buttonTittle;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)setupVoteButtonViewsShowResult:(_Bool)arg1 andPercent:(double)arg2;
- (void)showResult:(_Bool)arg1;
- (void)onVoteButtonClicked:(id)arg1;
- (id)initWithShowResult:(_Bool)arg1 andPercent:(double)arg2;

@end

