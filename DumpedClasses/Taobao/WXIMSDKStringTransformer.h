//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSValueTransformer.h"

@interface WXIMSDKStringTransformer : NSValueTransformer
{
}

+ (void)raiseSeriousExceptionWithReason:(id)arg1 error:(id)arg2;
+ (_Bool)allowsReverseTransformation;
+ (Class)transformedValueClass;
+ (unsigned long long)cipherState;
+ (void)setCipherState:(unsigned long long)arg1 error:(id *)arg2;
+ (id)cipherStateFilePath;
+ (void)_checkCipherForInit;
+ (_Bool)_localHasDBFiles;
+ (void)initialize;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;

@end

