//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ANResponse.h"

@class NSDictionary, NSString;

@interface ANMtopResponse : ANResponse
{
    NSString *_apiName;
    NSString *_apiVersion;
    NSString *_result;
    NSDictionary *_responseData;
}

@property(copy, nonatomic) NSDictionary *responseData; // @synthesize responseData=_responseData;
@property(copy, nonatomic) NSString *result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *apiVersion; // @synthesize apiVersion=_apiVersion;
@property(copy, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
- (void).cxx_destruct;
- (id)initWithInfo:(id)arg1;

@end

