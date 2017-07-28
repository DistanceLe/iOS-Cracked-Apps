//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface STPPaymentCardTextFieldViewModel : NSObject
{
    NSString *_cardNumber;
    NSString *_expirationMonth;
    NSString *_expirationYear;
    NSString *_cvc;
}

+ (id)keyPathsForValuesAffectingValid;
@property(copy, nonatomic) NSString *cvc; // @synthesize cvc=_cvc;
@property(readonly, nonatomic) NSString *expirationYear; // @synthesize expirationYear=_expirationYear;
@property(readonly, nonatomic) NSString *expirationMonth; // @synthesize expirationMonth=_expirationMonth;
@property(copy, nonatomic) NSString *cardNumber; // @synthesize cardNumber=_cardNumber;
- (void).cxx_destruct;
- (id)numberWithoutLastDigits;
- (id)defaultPlaceholder;
@property(readonly, nonatomic) _Bool isValid;
- (long long)validationStateForField:(long long)arg1;
@property(readonly, nonatomic) long long brand;
- (void)setExpirationYear:(id)arg1;
- (void)setExpirationMonth:(id)arg1;
@property(copy, nonatomic) NSString *rawExpiration;

@end
