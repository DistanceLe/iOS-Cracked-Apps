//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFCommedTableViewCell.h"

@class KGThemeButton, KGThemeLabel, KGThemeLine, UIImageView;

@interface KTVHomeRecommendTextCell : KFCommedTableViewCell
{
    KGThemeButton *_themeBtn;
    KGThemeLabel *_menuTitle;
    KGThemeLabel *_menuDesc;
    long long _iconType;
    double _adaptScale;
    KGThemeLine *_bottomLine;
    UIImageView *_matchHotView;
    UIImageView *_matchNewView;
    UIImageView *_dotView;
}

@property(retain, nonatomic) UIImageView *dotView; // @synthesize dotView=_dotView;
@property(retain, nonatomic) UIImageView *matchNewView; // @synthesize matchNewView=_matchNewView;
@property(retain, nonatomic) UIImageView *matchHotView; // @synthesize matchHotView=_matchHotView;
@property(retain, nonatomic) KGThemeLine *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) double adaptScale; // @synthesize adaptScale=_adaptScale;
@property(nonatomic) long long iconType; // @synthesize iconType=_iconType;
@property(retain, nonatomic) KGThemeLabel *menuDesc; // @synthesize menuDesc=_menuDesc;
@property(retain, nonatomic) KGThemeLabel *menuTitle; // @synthesize menuTitle=_menuTitle;
@property(retain, nonatomic) KGThemeButton *themeBtn; // @synthesize themeBtn=_themeBtn;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)showDotView:(_Bool)arg1;
- (void)showMatchNewView:(_Bool)arg1;
- (void)showMatchHotView:(_Bool)arg1;
- (void)setupContentView;
- (void)setupThemeImg;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 adaptScale:(double)arg3;
- (void)dealloc;

@end

