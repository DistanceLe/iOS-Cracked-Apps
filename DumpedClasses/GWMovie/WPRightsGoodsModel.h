//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSString;

@interface WPRightsGoodsModel : GWObject
{
    NSString *_goodsId;
    NSString *_goodsName;
    NSString *_bigLogo;
    NSString *_summary;
    double _unitPrice;
}

@property(nonatomic) double unitPrice; // @synthesize unitPrice=_unitPrice;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *bigLogo; // @synthesize bigLogo=_bigLogo;
@property(copy, nonatomic) NSString *goodsName; // @synthesize goodsName=_goodsName;
@property(copy, nonatomic) NSString *goodsId; // @synthesize goodsId=_goodsId;
- (void).cxx_destruct;

@end

