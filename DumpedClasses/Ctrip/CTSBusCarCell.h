//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTSCustomActionCell.h"

@class CTVectorImageView, NSLayoutConstraint, UIButton, UILabel, UIView;

@interface CTSBusCarCell : CTSCustomActionCell
{
    UIView *_realContentView;
    UILabel *_departStationLabel;
    UILabel *_arriveStationLabel;
    UILabel *_departCityLabel;
    UILabel *_arriveCityLabel;
    UILabel *_departTimeLabel;
    UILabel *_statusLabel;
    UIView *_statusBgView;
    CTVectorImageView *_busCarIconImageView;
    CTVectorImageView *_statusImageView;
    NSLayoutConstraint *_statusViewHeightConstraint;
    NSLayoutConstraint *_realContentHeightConstraint;
    UIButton *_orderServiceButton;
    NSLayoutConstraint *_topConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(nonatomic) __weak UIButton *orderServiceButton; // @synthesize orderServiceButton=_orderServiceButton;
@property(nonatomic) __weak NSLayoutConstraint *realContentHeightConstraint; // @synthesize realContentHeightConstraint=_realContentHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *statusViewHeightConstraint; // @synthesize statusViewHeightConstraint=_statusViewHeightConstraint;
@property(nonatomic) __weak CTVectorImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(nonatomic) __weak CTVectorImageView *busCarIconImageView; // @synthesize busCarIconImageView=_busCarIconImageView;
@property(nonatomic) __weak UIView *statusBgView; // @synthesize statusBgView=_statusBgView;
@property(nonatomic) __weak UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(nonatomic) __weak UILabel *departTimeLabel; // @synthesize departTimeLabel=_departTimeLabel;
@property(nonatomic) __weak UILabel *arriveCityLabel; // @synthesize arriveCityLabel=_arriveCityLabel;
@property(nonatomic) __weak UILabel *departCityLabel; // @synthesize departCityLabel=_departCityLabel;
@property(nonatomic) __weak UILabel *arriveStationLabel; // @synthesize arriveStationLabel=_arriveStationLabel;
@property(nonatomic) __weak UILabel *departStationLabel; // @synthesize departStationLabel=_departStationLabel;
@property(nonatomic) __weak UIView *realContentView; // @synthesize realContentView=_realContentView;
- (void).cxx_destruct;
- (id)ctsOrderServiceButton;
- (id)getTopConstraint;
- (id)customizedContentView;
- (id)getOperationView;
- (id)getCardStatusLabel;
- (id)getCardStatusImageView;
- (_Bool)needShowStatusView;
- (_Bool)needShowOrderServiceButton;
- (void)setDepartTimeLabelText:(id)arg1;
- (void)setCellWithModel:(id)arg1 index:(id)arg2 delegate:(id)arg3;
- (void)showOrderServiceAction:(id)arg1;
- (void)awakeFromNib;

@end

