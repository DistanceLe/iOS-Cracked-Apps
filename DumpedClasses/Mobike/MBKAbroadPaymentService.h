//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MBKAbroadPaymentService : NSObject
{
}

+ (id)checkAccountBeforeRefundDeposit:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)refundDepositWithUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)makeStripePaymentWithUserid:(id)arg1 currencyId:(long long)arg2 chargeType:(unsigned long long)arg3 payAmount:(id)arg4 cardToken:(id)arg5 pricingStategy:(long long)arg6 completion:(CDUnknownBlockType)arg7;

@end
