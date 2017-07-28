//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface ONEReportTableViewCell : UITableViewCell
{
    UIImageView *_eventImgView;
    UILabel *_eventLabel;
    UILabel *_addressLabel;
    UILabel *_timeLabel;
    UIImageView *_arrorImgView;
}

@property(retain, nonatomic) UIImageView *arrorImgView; // @synthesize arrorImgView=_arrorImgView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UILabel *eventLabel; // @synthesize eventLabel=_eventLabel;
@property(retain, nonatomic) UIImageView *eventImgView; // @synthesize eventImgView=_eventImgView;
- (void).cxx_destruct;
- (void)setCellContentInfo:(id)arg1 isLast:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
