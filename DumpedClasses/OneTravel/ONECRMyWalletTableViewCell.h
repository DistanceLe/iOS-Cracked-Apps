//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface ONECRMyWalletTableViewCell : UITableViewCell
{
    _Bool _isShowBottomLine;
    UIImageView *_flagImageView;
    UILabel *_titleLabel;
    UILabel *_tipLabel;
    UIImageView *_arrowImageView;
    UIImageView *_bottomLineImageView;
    UIImageView *_redDotView;
    UIImageView *_tipImageView;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIImageView *tipImageView; // @synthesize tipImageView=_tipImageView;
@property(retain, nonatomic) UIImageView *redDotView; // @synthesize redDotView=_redDotView;
@property(retain, nonatomic) UIImageView *bottomLineImageView; // @synthesize bottomLineImageView=_bottomLineImageView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *flagImageView; // @synthesize flagImageView=_flagImageView;
@property(nonatomic) _Bool isShowBottomLine; // @synthesize isShowBottomLine=_isShowBottomLine;
- (void).cxx_destruct;
- (void)configureData:(id)arg1;
- (id)addFontFamilyForHTML:(id)arg1;
- (void)makeContraint;
- (void)buildUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)init;

@end
