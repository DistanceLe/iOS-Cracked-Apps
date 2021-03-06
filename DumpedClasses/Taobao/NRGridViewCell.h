//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UILabel;

@interface NRGridViewCell : UIView
{
    _Bool _selected;
    _Bool _highlighted;
    NSString *_reuseIdentifier;
    UIView *_contentView;
    UIImageView *_imageView;
    UILabel *_textLabel;
    UILabel *_detailedTextLabel;
    UIView *_selectionBackgroundView;
    UIView *_backgroundView;
}

@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *selectionBackgroundView; // @synthesize selectionBackgroundView=_selectionBackgroundView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UILabel *detailedTextLabel; // @synthesize detailedTextLabel=_detailedTextLabel;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) _Bool needsRelayout; // @dynamic needsRelayout;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)__commonInit;
- (id)__indexPath;
- (void)__setIndexPath:(id)arg1;

@end

