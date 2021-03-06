//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class GDMActivityCellViewModel, UIImageView, UILabel;

@interface GDMActivityTableViewCell : UITableViewCell
{
    GDMActivityCellViewModel *_viewModel;
    CDUnknownBlockType _tapActionBlock;
    UILabel *_leftTitleLabel;
    UIImageView *_leftCoverImageView;
    UILabel *_rightTitleLabel;
    UIImageView *_rightCoverImageView;
}

+ (double)cellHeight;
+ (id)makeTitleLabel;
@property(retain, nonatomic) UIImageView *rightCoverImageView; // @synthesize rightCoverImageView=_rightCoverImageView;
@property(retain, nonatomic) UILabel *rightTitleLabel; // @synthesize rightTitleLabel=_rightTitleLabel;
@property(retain, nonatomic) UIImageView *leftCoverImageView; // @synthesize leftCoverImageView=_leftCoverImageView;
@property(retain, nonatomic) UILabel *leftTitleLabel; // @synthesize leftTitleLabel=_leftTitleLabel;
@property(copy, nonatomic) CDUnknownBlockType tapActionBlock; // @synthesize tapActionBlock=_tapActionBlock;
@property(retain, nonatomic) GDMActivityCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (_Bool)isMainHomeURL:(id)arg1;
- (void)refreshCell;
- (void)activityTapAction:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

