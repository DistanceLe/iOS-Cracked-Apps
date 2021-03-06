//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL, NSURLRequest;

@interface QYApmNetworkDataProxy : NSObject
{
    NSURL *_requestUrl;
    long long _networkType;
    NSString *_httpMethod;
    long long _statusCode;
    long long _errorNo;
    NSString *_errorMsg;
    double _startTime;
    double _endTime;
    NSURLRequest *_request;
    NSDictionary *_requestAllHeaderFields;
    NSDictionary *_responseAllHeaderFields;
    long long _responseBodySize;
}

@property(nonatomic) long long responseBodySize; // @synthesize responseBodySize=_responseBodySize;
@property(retain, nonatomic) NSDictionary *responseAllHeaderFields; // @synthesize responseAllHeaderFields=_responseAllHeaderFields;
@property(retain, nonatomic) NSDictionary *requestAllHeaderFields; // @synthesize requestAllHeaderFields=_requestAllHeaderFields;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(nonatomic) long long errorNo; // @synthesize errorNo=_errorNo;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) NSString *httpMethod; // @synthesize httpMethod=_httpMethod;
@property(nonatomic) long long networkType; // @synthesize networkType=_networkType;
@property(retain, nonatomic) NSURL *requestUrl; // @synthesize requestUrl=_requestUrl;
- (void).cxx_destruct;

@end

