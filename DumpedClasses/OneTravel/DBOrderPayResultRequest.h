//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DBOrderPayResultRequest : NSObject
{
    long long _payroute_type;
    id _request;
}

+ (id)pathName:(long long)arg1;
@property(retain, nonatomic) id request; // @synthesize request=_request;
@property(nonatomic) long long payroute_type; // @synthesize payroute_type=_payroute_type;
- (void).cxx_destruct;
- (void)requestWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)cancel;
- (id)initWithPayId:(id)arg1 orderId:(id)arg2 ago_time:(int)arg3 priceModel:(id)arg4;

@end
