//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface GDMGBGCardModle : NSObject
{
    _Bool _isFollow;
    _Bool _isV;
    _Bool _isAd;
    NSString *_expertLogo;
    NSString *_expertNick;
    NSString *_accountId;
    NSString *_expertLevel;
    NSString *_publicTime;
    NSString *_bannerImage;
    NSArray *_itemImages;
    NSString *_likeCount;
    NSString *_commentCount;
    NSString *_albumTitle;
    NSMutableArray *_gMDGBGItemArray;
    NSString *_itemCount;
    NSString *_timeStamp;
    NSString *_timeForDisplay;
    NSString *_feedId;
    NSString *_feedType;
    NSString *_detailUrl;
    NSString *_accountExplain;
    NSString *_accountUrl;
    long long _pageNum;
    NSArray *_adList;
    NSArray *_comments;
    NSString *_content;
}

+ (id)itemFromDict:(id)arg1;
@property(retain) NSString *content; // @synthesize content=_content;
@property(retain) NSArray *comments; // @synthesize comments=_comments;
@property _Bool isAd; // @synthesize isAd=_isAd;
@property(retain) NSArray *adList; // @synthesize adList=_adList;
@property(nonatomic) long long pageNum; // @synthesize pageNum=_pageNum;
@property _Bool isV; // @synthesize isV=_isV;
@property(retain) NSString *accountUrl; // @synthesize accountUrl=_accountUrl;
@property(retain) NSString *accountExplain; // @synthesize accountExplain=_accountExplain;
@property(retain) NSString *detailUrl; // @synthesize detailUrl=_detailUrl;
@property(retain) NSString *feedType; // @synthesize feedType=_feedType;
@property(retain) NSString *feedId; // @synthesize feedId=_feedId;
@property(retain) NSString *timeForDisplay; // @synthesize timeForDisplay=_timeForDisplay;
@property(retain) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSString *itemCount; // @synthesize itemCount=_itemCount;
@property(retain) NSMutableArray *gMDGBGItemArray; // @synthesize gMDGBGItemArray=_gMDGBGItemArray;
@property(copy, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
@property(retain, nonatomic) NSString *commentCount; // @synthesize commentCount=_commentCount;
@property(retain, nonatomic) NSString *likeCount; // @synthesize likeCount=_likeCount;
@property(copy, nonatomic) NSArray *itemImages; // @synthesize itemImages=_itemImages;
@property(copy, nonatomic) NSString *bannerImage; // @synthesize bannerImage=_bannerImage;
@property _Bool isFollow; // @synthesize isFollow=_isFollow;
@property(copy, nonatomic) NSString *publicTime; // @synthesize publicTime=_publicTime;
@property(copy, nonatomic) NSString *expertLevel; // @synthesize expertLevel=_expertLevel;
@property(retain) NSString *accountId; // @synthesize accountId=_accountId;
@property(copy, nonatomic) NSString *expertNick; // @synthesize expertNick=_expertNick;
@property(copy, nonatomic) NSString *expertLogo; // @synthesize expertLogo=_expertLogo;
- (void).cxx_destruct;

@end
