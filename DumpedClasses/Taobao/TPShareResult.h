//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString, TPShareContent;

@interface TPShareResult : TBJSONModel
{
    TPShareContent *_content;
    NSString *_url;
    NSString *_passwordType;
    NSString *_passwordKey;
    NSString *_passwordText;
    NSString *_passwordCreateTime;
    NSString *_passwordValidTime;
    NSString *_errorCode;
    NSString *_errorMsg;
}

+ (id)modelWithJSONDictionary:(id)arg1;
@property(retain, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *passwordValidTime; // @synthesize passwordValidTime=_passwordValidTime;
@property(retain, nonatomic) NSString *passwordCreateTime; // @synthesize passwordCreateTime=_passwordCreateTime;
@property(retain, nonatomic) NSString *passwordText; // @synthesize passwordText=_passwordText;
@property(retain, nonatomic) NSString *passwordKey; // @synthesize passwordKey=_passwordKey;
@property(retain, nonatomic) NSString *passwordType; // @synthesize passwordType=_passwordType;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) TPShareContent *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

@end

