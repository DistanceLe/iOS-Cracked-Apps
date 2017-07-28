//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMBaseTableViewCell.h"

@class UIImageView, UISwitch;

@interface FMFormCell : FMBaseTableViewCell
{
    id <FMFormCellProtocol> _delegate;
    UIImageView *_markImageView;
    UISwitch *_switchView;
}

@property(retain, nonatomic) UISwitch *switchView; // @synthesize switchView=_switchView;
@property(retain, nonatomic) UIImageView *markImageView; // @synthesize markImageView=_markImageView;
@property(nonatomic) __weak id <FMFormCellProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
