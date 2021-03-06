//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UILabel, UIView, XYCycleScrollView, XYPHStoreSlidesBanner;

@interface XYPHStoreSlidesBannerCell : UICollectionViewCell
{
    id <XYPHStoreSlidesBannerCellDelegate> _delegate;
    XYCycleScrollView *_pageControlView;
    XYPHStoreSlidesBanner *_banners;
    UIView *_horizonalDividerView;
    UILabel *_pageLabel;
    long long _totalCounts;
    long long _curIndex;
}

+ (struct CGSize)cellSizeWithBanner:(id)arg1;
@property(nonatomic) long long curIndex; // @synthesize curIndex=_curIndex;
@property(nonatomic) long long totalCounts; // @synthesize totalCounts=_totalCounts;
@property(retain, nonatomic) UILabel *pageLabel; // @synthesize pageLabel=_pageLabel;
@property(retain, nonatomic) UIView *horizonalDividerView; // @synthesize horizonalDividerView=_horizonalDividerView;
@property(nonatomic) __weak XYPHStoreSlidesBanner *banners; // @synthesize banners=_banners;
@property(retain, nonatomic) XYCycleScrollView *pageControlView; // @synthesize pageControlView=_pageControlView;
@property(nonatomic) __weak id <XYPHStoreSlidesBannerCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollToNextPage;
- (void)cycleScrollViewDelegate:(id)arg1 didScrollImageView:(long long)arg2;
- (void)cycleScrollViewDelegate:(id)arg1 didSelectImageView:(long long)arg2;
- (void)setCellWithBanner:(id)arg1;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

