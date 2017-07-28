//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAUserUserBaseInfo.h"

@class FAUserRichLevelInfo<Optional>, FAUserStarLevelInfo<Optional>, NSArray<Optional>, NSString, NSString<Optional>;

@interface FAUserUserInfo : FAUserUserBaseInfo
{
    _Bool _isGift;
    _Bool _isLook;
    _Bool _status;
    long long _coin;
    long long _fansCount;
    long long _followCount;
    long long _kugouId;
    long long _lastLiveTime;
    NSString<Optional> *_liveTimes;
    NSString<Optional> *_location;
    long long _messageCount;
    NSArray<Optional> *_photoInfoList;
    FAUserRichLevelInfo<Optional> *_richInfo;
    long long _richLevel;
    long long _roomId;
    long long _starCard;
    FAUserStarLevelInfo<Optional> *_starInfo;
    long long _starLevel;
    NSString<Optional> *_userLogoM;
    long long _vip;
    double _bean;
    unsigned long long _isLive;
    long long _opusCount;
    long long _imgCount;
    long long _isFollow;
    long long _type;
    long long _isStar;
    NSString *_userPhone;
    NSString *_usersecureemail;
    NSString *_userloginemail;
    NSString *_userPhoneVerificathionNumber;
    NSString *_userEmailVerificathionNumber;
    NSString *_tempPhoneNumber;
    NSString *_tempPassword;
    long long _albumCount;
    long long _photoCount;
}

+ (id)getFromFAUserModel:(id)arg1;
@property(nonatomic) long long photoCount; // @synthesize photoCount=_photoCount;
@property(nonatomic) long long albumCount; // @synthesize albumCount=_albumCount;
@property(retain, nonatomic) NSString *tempPassword; // @synthesize tempPassword=_tempPassword;
@property(retain, nonatomic) NSString *tempPhoneNumber; // @synthesize tempPhoneNumber=_tempPhoneNumber;
@property(retain, nonatomic) NSString *userEmailVerificathionNumber; // @synthesize userEmailVerificathionNumber=_userEmailVerificathionNumber;
@property(retain, nonatomic) NSString *userPhoneVerificathionNumber; // @synthesize userPhoneVerificathionNumber=_userPhoneVerificathionNumber;
@property(retain, nonatomic) NSString *userloginemail; // @synthesize userloginemail=_userloginemail;
@property(retain, nonatomic) NSString *usersecureemail; // @synthesize usersecureemail=_usersecureemail;
@property(retain, nonatomic) NSString *userPhone; // @synthesize userPhone=_userPhone;
@property(nonatomic) long long isStar; // @synthesize isStar=_isStar;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long isFollow; // @synthesize isFollow=_isFollow;
@property(nonatomic) long long imgCount; // @synthesize imgCount=_imgCount;
@property(nonatomic) long long opusCount; // @synthesize opusCount=_opusCount;
@property(nonatomic) unsigned long long isLive; // @synthesize isLive=_isLive;
@property(nonatomic) double bean; // @synthesize bean=_bean;
@property(nonatomic) long long vip; // @synthesize vip=_vip;
@property(copy, nonatomic) NSString<Optional> *userLogoM; // @synthesize userLogoM=_userLogoM;
@property(nonatomic) _Bool status; // @synthesize status=_status;
@property(nonatomic) long long starLevel; // @synthesize starLevel=_starLevel;
@property(copy, nonatomic) FAUserStarLevelInfo<Optional> *starInfo; // @synthesize starInfo=_starInfo;
@property(nonatomic) long long starCard; // @synthesize starCard=_starCard;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
@property(nonatomic) long long richLevel; // @synthesize richLevel=_richLevel;
@property(copy, nonatomic) FAUserRichLevelInfo<Optional> *richInfo; // @synthesize richInfo=_richInfo;
@property(copy, nonatomic) NSArray<Optional> *photoInfoList; // @synthesize photoInfoList=_photoInfoList;
@property(nonatomic) long long messageCount; // @synthesize messageCount=_messageCount;
@property(copy, nonatomic) NSString<Optional> *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString<Optional> *liveTimes; // @synthesize liveTimes=_liveTimes;
@property(nonatomic) long long lastLiveTime; // @synthesize lastLiveTime=_lastLiveTime;
@property(nonatomic) long long kugouId; // @synthesize kugouId=_kugouId;
@property(nonatomic) _Bool isLook; // @synthesize isLook=_isLook;
@property(nonatomic) _Bool isGift; // @synthesize isGift=_isGift;
@property(nonatomic) long long followCount; // @synthesize followCount=_followCount;
@property(nonatomic) long long fansCount; // @synthesize fansCount=_fansCount;
@property(nonatomic) long long coin; // @synthesize coin=_coin;
- (void).cxx_destruct;

@end
