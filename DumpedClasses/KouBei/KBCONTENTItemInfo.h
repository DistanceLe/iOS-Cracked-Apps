//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KBCONTENTToString.h"

@class NSString;

@interface KBCONTENTItemInfo : KBCONTENTToString
{
    _Bool _activityValid;
    _Bool _receive;
    NSString *_itemId;
    NSString *_type;
    NSString *_voucherType;
    NSString *_subVoucherType;
    NSString *_itemName;
    NSString *_originalPrice;
    NSString *_price;
    NSString *_discount;
    NSString *_unit;
    long long _sales;
    long long _totalStock;
    long long _remainderStock;
    long long _currentStock;
    long long _activityStock;
    NSString *_status;
    NSString *_campId;
    NSString *_activityId;
}

@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSString *campId; // @synthesize campId=_campId;
@property(nonatomic) _Bool receive; // @synthesize receive=_receive;
@property(nonatomic) _Bool activityValid; // @synthesize activityValid=_activityValid;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(nonatomic) long long activityStock; // @synthesize activityStock=_activityStock;
@property(nonatomic) long long currentStock; // @synthesize currentStock=_currentStock;
@property(nonatomic) long long remainderStock; // @synthesize remainderStock=_remainderStock;
@property(nonatomic) long long totalStock; // @synthesize totalStock=_totalStock;
@property(nonatomic) long long sales; // @synthesize sales=_sales;
@property(retain, nonatomic) NSString *unit; // @synthesize unit=_unit;
@property(retain, nonatomic) NSString *discount; // @synthesize discount=_discount;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *originalPrice; // @synthesize originalPrice=_originalPrice;
@property(retain, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(retain, nonatomic) NSString *subVoucherType; // @synthesize subVoucherType=_subVoucherType;
@property(retain, nonatomic) NSString *voucherType; // @synthesize voucherType=_voucherType;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;

@end

