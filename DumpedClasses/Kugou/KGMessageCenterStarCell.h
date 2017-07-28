//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGMessageCenterBaseCell.h"

@class KGThemeButton, KGThemeImageView, KGThemeLabel, KGThemeLine, OHAttributedLabel, UIImageView;

@interface KGMessageCenterStarCell : KGMessageCenterBaseCell
{
    id <KGMessageCenterStarCellDelegate> _starDelegate;
    KGThemeButton *_headbtn;
    KGThemeButton *_nameLabelBtn;
    OHAttributedLabel *_myCommentText;
    KGThemeLabel *_timeLabel;
    UIImageView *_certificationPicView;
    unsigned long long _index;
    KGThemeImageView *_likeIconView;
    KGThemeButton *_replyBtn;
    KGThemeLine *_seprateLabel;
}

@property(retain, nonatomic) KGThemeLine *seprateLabel; // @synthesize seprateLabel=_seprateLabel;
@property(retain, nonatomic) KGThemeButton *replyBtn; // @synthesize replyBtn=_replyBtn;
@property(retain, nonatomic) KGThemeImageView *likeIconView; // @synthesize likeIconView=_likeIconView;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) UIImageView *certificationPicView; // @synthesize certificationPicView=_certificationPicView;
@property(retain, nonatomic) KGThemeLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) OHAttributedLabel *myCommentText; // @synthesize myCommentText=_myCommentText;
@property(retain, nonatomic) KGThemeButton *nameLabelBtn; // @synthesize nameLabelBtn=_nameLabelBtn;
@property(retain, nonatomic) KGThemeButton *headbtn; // @synthesize headbtn=_headbtn;
@property(nonatomic) __weak id <KGMessageCenterStarCellDelegate> starDelegate; // @synthesize starDelegate=_starDelegate;
- (void).cxx_destruct;
- (void)actionReplyBtn;
- (void)nameLabelPress;
- (void)headbtnPress;
- (void)p_onChangeTheme:(id)arg1;
- (void)updateReplyStatusWithModel:(id)arg1;
- (void)showReplayBtn:(_Bool)arg1;
- (void)updateWithModel:(id)arg1 AndIndex:(unsigned long long)arg2;
- (void)dealloc;
- (void)customSubViewInit;

@end
