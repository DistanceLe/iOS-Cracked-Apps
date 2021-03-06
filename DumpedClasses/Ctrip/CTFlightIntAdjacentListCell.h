//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, UIImageView, UILabel;

@interface CTFlightIntAdjacentListCell : UITableViewCell
{
    double ratio;
    NSLayoutConstraint *_arrowIconViewHeight;
    UIImageView *_backgroundImageView;
    UILabel *_fromCityLabel;
    UILabel *_toCityLabel;
    UILabel *_priceLabel;
    UILabel *_infoLabel;
    NSLayoutConstraint *_imageViewWidth;
    UIImageView *_arrowIconImageVew;
    NSLayoutConstraint *_imageViewHeight;
    UIImageView *_flightIocnList;
    UIImageView *_flightArrow;
    NSLayoutConstraint *_fromCityCenterYOffset;
}

+ (double)adjacentListCellHeight;
@property(nonatomic) __weak NSLayoutConstraint *fromCityCenterYOffset; // @synthesize fromCityCenterYOffset=_fromCityCenterYOffset;
@property(retain, nonatomic) UIImageView *flightArrow; // @synthesize flightArrow=_flightArrow;
@property(retain, nonatomic) UIImageView *flightIocnList; // @synthesize flightIocnList=_flightIocnList;
@property(nonatomic) __weak NSLayoutConstraint *imageViewHeight; // @synthesize imageViewHeight=_imageViewHeight;
@property(nonatomic) __weak UIImageView *arrowIconImageVew; // @synthesize arrowIconImageVew=_arrowIconImageVew;
@property(nonatomic) __weak NSLayoutConstraint *imageViewWidth; // @synthesize imageViewWidth=_imageViewWidth;
@property(nonatomic) __weak UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(nonatomic) __weak UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(nonatomic) __weak UILabel *toCityLabel; // @synthesize toCityLabel=_toCityLabel;
@property(nonatomic) __weak UILabel *fromCityLabel; // @synthesize fromCityLabel=_fromCityLabel;
@property(nonatomic) __weak UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) __weak NSLayoutConstraint *arrowIconViewHeight; // @synthesize arrowIconViewHeight=_arrowIconViewHeight;
- (void).cxx_destruct;
- (void)setUpCellWithViewModel:(id)arg1 isRoundTrip:(_Bool)arg2;
- (void)setBackgroundColorHightlight:(_Bool)arg1;
- (void)setBackgroundImageHightlight:(_Bool)arg1;
- (void)setCellHightlight:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

