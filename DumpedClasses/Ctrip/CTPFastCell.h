//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIView;

@interface CTPFastCell : UITableViewCell
{
    _Bool _hideBottomLine;
    unsigned long long _walletSatus;
    UIView *_customAccessoryView;
    long long _postion;
}

+ (double)getCTFPastInfoCellHeight;
@property(nonatomic) long long postion; // @synthesize postion=_postion;
@property(nonatomic) _Bool hideBottomLine; // @synthesize hideBottomLine=_hideBottomLine;
@property(retain, nonatomic) UIView *customAccessoryView; // @synthesize customAccessoryView=_customAccessoryView;
@property(nonatomic) unsigned long long walletSatus; // @synthesize walletSatus=_walletSatus;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setFastCellPositionForIndexPath:(id)arg1 inTableView:(id)arg2;
- (void)setFastCellModel:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;

@end

