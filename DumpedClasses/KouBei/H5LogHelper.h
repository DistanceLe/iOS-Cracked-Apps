//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface H5LogHelper : NSObject
{
    NSString *_token;
    NSString *_sessionToken;
    NSString *_url;
    NSString *_referer;
    NSString *_appId;
    NSString *_publicId;
    NSString *_openAppId;
    NSString *_shopId;
    NSString *_customParams;
    NSString *_version;
    NSString *_sourceId;
    NSString *_bizScenario;
    NSString *_ssoLogin;
    NSString *_udid;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *udid; // @synthesize udid=_udid;
@property(copy, nonatomic) NSString *ssoLogin; // @synthesize ssoLogin=_ssoLogin;
@property(copy, nonatomic) NSString *bizScenario; // @synthesize bizScenario=_bizScenario;
@property(copy, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *customParams; // @synthesize customParams=_customParams;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(copy, nonatomic) NSString *openAppId; // @synthesize openAppId=_openAppId;
@property(copy, nonatomic) NSString *publicId; // @synthesize publicId=_publicId;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *referer; // @synthesize referer=_referer;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)clearAll;
- (void)generateH5SessionToken;
- (void)generateH5Token;
- (id)generateUUID;
- (id)init;

@end

