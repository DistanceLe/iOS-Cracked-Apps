//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWUserCenterBaseCornerCell.h"

@class UILabel, UISwitch, UIView;

@interface GWUserCenterSwitchCell : GWUserCenterBaseCornerCell
{
    UILabel *_ucTextLabel;
    UIView *_ucAccessoryView;
    UISwitch *_pushSwitch;
}

@property(retain, nonatomic) UISwitch *pushSwitch; // @synthesize pushSwitch=_pushSwitch;
@property(retain, nonatomic) UIView *ucAccessoryView; // @synthesize ucAccessoryView=_ucAccessoryView;
@property(retain, nonatomic) UILabel *ucTextLabel; // @synthesize ucTextLabel=_ucTextLabel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
