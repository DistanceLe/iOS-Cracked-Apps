//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSString, NSURL, PTHTweetbotAccount, PTHTweetbotStatus, PTHTweetbotUser;

@interface PTHTweetbotEntity : NSObject <NSCoding>
{
    _Bool _checkedForMedia;
    NSArray *_media;
    _Bool _parsed;
    PTHTweetbotAccount *_account;
    long long _type;
    NSURL *_url;
    NSURL *_expandedURL;
    NSString *_displayURLString;
    NSString *_hashtagString;
    NSString *_symbolString;
    NSString *_userScreenName;
    long long _userTID;
    PTHTweetbotStatus *_status;
    struct _NSRange _range;
}

+ (id)preferredMediaPreviewEntity:(id)arg1;
+ (id)newAttributedStringFromString:(id)arg1 entities:(id)arg2;
+ (id)newEditingEntitiesFromString:(id)arg1 account:(id)arg2;
+ (id)newEntitiesFromString:(id)arg1 andDictionary:(id)arg2 account:(id)arg3;
+ (id)URLWithString:(id)arg1;
+ (void)initialize;
+ (void)loadConfiguration;
+ (id)cachedHashtagsForAccount:(id)arg1;
+ (void)cacheHashtagsFromEntities:(id)arg1;
@property(nonatomic, getter=isParsed) _Bool parsed; // @synthesize parsed=_parsed;
@property(nonatomic) __weak PTHTweetbotStatus *status; // @synthesize status=_status;
@property(nonatomic) long long userTID; // @synthesize userTID=_userTID;
@property(retain, nonatomic) NSString *userScreenName; // @synthesize userScreenName=_userScreenName;
@property(copy, nonatomic) NSString *symbolString; // @synthesize symbolString=_symbolString;
@property(copy, nonatomic) NSString *hashtagString; // @synthesize hashtagString=_hashtagString;
@property(readonly, nonatomic) NSArray *media; // @synthesize media=_media;
@property(retain, nonatomic) NSString *displayURLString; // @synthesize displayURLString=_displayURLString;
@property(retain, nonatomic) NSURL *expandedURL; // @synthesize expandedURL=_expandedURL;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) __weak PTHTweetbotAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) __weak PTHTweetbotUser *user;
@property(readonly, nonatomic) _Bool hasMedia;
- (void)_addSiblingMediaEntity:(id)arg1;
- (id)initWithAccount:(id)arg1 type:(long long)arg2 dictionary:(id)arg3;
- (id)initWithAccount:(id)arg1 type:(long long)arg2;

@end
