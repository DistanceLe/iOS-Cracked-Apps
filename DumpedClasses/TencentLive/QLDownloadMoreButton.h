//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIImageView, UILabel;

@interface QLDownloadMoreButton : UIButton
{
    UIImageView *_backgroudView;
    UIImageView *_headerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

+ (long long)buttonHeight;
- (void).cxx_destruct;
- (void)setSubtitleText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

