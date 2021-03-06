//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSDate, NSString;

@interface TBContactData : NSObject <NSCoding, NSCopying, NSMutableCopying>
{
    _Bool _taobaoUser;
    _Bool _taoFriend;
    _Bool _onlyTaoFriend;
    _Bool _rowSelected;
    NSString *_name;
    NSString *_pinyin;
    NSString *_tel;
    long long _secNum;
    NSDate *_lastModifiedDate;
    NSString *_userId;
    NSString *_userLogoURL;
    NSString *_taoName;
    NSString *_taoPinYin;
    NSString *_ampRecentUsersType;
    NSString *_ampGroupUserNumber;
}

@property _Bool rowSelected; // @synthesize rowSelected=_rowSelected;
@property(retain, nonatomic) NSString *ampGroupUserNumber; // @synthesize ampGroupUserNumber=_ampGroupUserNumber;
@property(retain, nonatomic) NSString *ampRecentUsersType; // @synthesize ampRecentUsersType=_ampRecentUsersType;
@property(nonatomic, getter=isOnlyTaoFriend) _Bool onlyTaoFriend; // @synthesize onlyTaoFriend=_onlyTaoFriend;
@property(retain, nonatomic) NSString *taoPinYin; // @synthesize taoPinYin=_taoPinYin;
@property(retain, nonatomic) NSString *taoName; // @synthesize taoName=_taoName;
@property(nonatomic, getter=isTaoFriend) _Bool taoFriend; // @synthesize taoFriend=_taoFriend;
@property(nonatomic, getter=isTaobaoUser) _Bool taobaoUser; // @synthesize taobaoUser=_taobaoUser;
@property(retain, nonatomic) NSString *userLogoURL; // @synthesize userLogoURL=_userLogoURL;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(nonatomic) long long secNum; // @synthesize secNum=_secNum;
@property(retain, nonatomic) NSString *tel; // @synthesize tel=_tel;
@property(retain, nonatomic) NSString *pinyin; // @synthesize pinyin=_pinyin;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)toJSONWithOperationType:(int)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

