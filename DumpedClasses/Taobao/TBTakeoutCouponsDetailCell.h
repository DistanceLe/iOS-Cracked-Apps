//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class TBTakeoutBuyCouponsDetailModel, UILabel;

@interface TBTakeoutCouponsDetailCell : UITableViewCell
{
    UILabel *_expires;
    TBTakeoutBuyCouponsDetailModel *_detail;
    UILabel *_reasonLabel;
}

@property(retain, nonatomic) UILabel *reasonLabel; // @synthesize reasonLabel=_reasonLabel;
@property(retain, nonatomic) TBTakeoutBuyCouponsDetailModel *detail; // @synthesize detail=_detail;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

