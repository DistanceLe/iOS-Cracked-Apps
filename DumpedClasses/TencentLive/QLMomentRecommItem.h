//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLMomentItemBase.h"

@class NSString;

@interface QLMomentRecommItem : QLMomentItemBase
{
    NSString *_vid;
    NSString *_cid;
    NSString *_lid;
    NSString *_cTitle;
    NSString *_cSecondTitle;
    NSString *_cDesp;
    NSString *_cPicUrl;
    long long _cViewCount;
    long long _date;
    long long _hd;
    NSString *_exclusiveTag;
}

+ (id)itemsWithArray:(id)arg1;
+ (id)itemWithDict:(id)arg1;
@property(retain, nonatomic) NSString *exclusiveTag; // @synthesize exclusiveTag=_exclusiveTag;
@property(nonatomic) long long hd; // @synthesize hd=_hd;
@property(nonatomic) long long date; // @synthesize date=_date;
@property(nonatomic) long long cViewCount; // @synthesize cViewCount=_cViewCount;
@property(retain, nonatomic) NSString *cPicUrl; // @synthesize cPicUrl=_cPicUrl;
@property(retain, nonatomic) NSString *cDesp; // @synthesize cDesp=_cDesp;
@property(retain, nonatomic) NSString *cSecondTitle; // @synthesize cSecondTitle=_cSecondTitle;
@property(retain, nonatomic) NSString *cTitle; // @synthesize cTitle=_cTitle;
@property(retain, nonatomic) NSString *lid; // @synthesize lid=_lid;
@property(retain, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

