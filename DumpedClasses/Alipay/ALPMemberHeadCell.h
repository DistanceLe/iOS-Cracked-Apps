//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VZListCell.h"

@class UIImageView, UILabel, UIView;

@interface ALPMemberHeadCell : VZListCell
{
    float _sizeOffset;
    UIView *_cardView;
    UIImageView *_logoImg;
    UILabel *_title;
    UILabel *_typeName;
    UIView *_roundWhitBack;
    UIImageView *_cardBackView;
}

@property(nonatomic) float sizeOffset; // @synthesize sizeOffset=_sizeOffset;
@property(retain, nonatomic) UIImageView *cardBackView; // @synthesize cardBackView=_cardBackView;
@property(retain, nonatomic) UIView *roundWhitBack; // @synthesize roundWhitBack=_roundWhitBack;
@property(retain, nonatomic) UILabel *typeName; // @synthesize typeName=_typeName;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *logoImg; // @synthesize logoImg=_logoImg;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
- (void).cxx_destruct;
- (void)rechargeTap:(id)arg1;
- (void)oprationBtnTap:(id)arg1;
- (void)headTopTap:(id)arg1;
- (void)cardBackTap:(id)arg1;
- (void)initRechargeView:(id)arg1;
- (void)setCardData:(id)arg1;
- (void)setItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
