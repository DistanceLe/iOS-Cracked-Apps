//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"
#import "MTLManagedObjectSerializing-Protocol.h"

@class CupidAd, NSArray, NSData, NSDate, NSManagedObjectID, NSNumber, NSString, PPCircleFeedGeniusModel, QYPPCircleCometInfoMTLModel, QYPPCircleFeedLongImageTextModel, QYPPCircleFeedShareInfoModel, QYPPCircleFeedVoteModel, QYPPCircleLiveVideoMTLModel, QYPPCircleRelatedCardModel, QYPPFeedQiYiVideoModel;

@interface QYPPCircleFeedMTLModel : MTLModel <MTLJSONSerializing, MTLManagedObjectSerializing>
{
    _Bool _isManualFeed;
    _Bool _isPlayByLocalUrl;
    _Bool _isSquareTopFeed;
    _Bool _isAds;
    _Bool _isEmptyAds;
    _Bool _bestFeed;
    _Bool _disableThirdShare;
    _Bool _auditPolicyLv3;
    _Bool _eventProcessed;
    _Bool _voteProcessed;
    _Bool _voteDescribeProcessed;
    _Bool _welFareProcessed;
    NSNumber *_circleFeedId;
    NSNumber *_circleFeedWallId;
    NSNumber *_circleFeedSnsTime;
    NSArray *_thumbnailLocalPaths;
    NSArray *_imageLocalPaths;
    NSNumber *_circleFeedStatus;
    NSString *_circleFeedPubLocation;
    NSString *_circleFeedDesc;
    NSNumber *_circleFeedReleaseDateNum;
    NSNumber *_circleFeedModifyDateNum;
    NSDate *_circleFeedReleaseDate;
    NSDate *_circleFeedModifyDate;
    NSNumber *_circleFeedAuthorUid;
    NSNumber *_circleFeedUserType;
    NSNumber *_circleFeedType;
    NSNumber *_circleFeedAgreeCnt;
    NSNumber *_circleFeedAgreed;
    NSNumber *_circleFeedCommentCnt;
    NSNumber *_circleFeedUVCnt;
    NSNumber *_circleFeedSharedCnt;
    NSNumber *_circleFeedExtendType;
    NSString *_circleFeedResourceSize;
    NSNumber *_circleFeedIsGif;
    NSString *_circleFeedAuthorIcon;
    NSString *_circleFeedAuthorName;
    NSNumber *_circleFeedAlbumId;
    NSNumber *_circleFeedIsVip;
    NSNumber *_circleFeedResourceCnt;
    NSArray *_circleFeedDurationArr;
    NSArray *_circleFeedThumbnailArr;
    NSArray *_circleFeedTvIdArr;
    NSArray *_circleFeedTvTitleArr;
    NSArray *_circleFeedQiyiVideoArr;
    NSArray *_circleFeedUninterestTagArr;
    NSArray *_circleFeedSightFileIdArr;
    NSData *_circleFeedSightFileIds;
    NSArray *_circleFeedSightResolutionsArr;
    NSData *_circleFeedSightResolutions;
    NSArray *_circleFeedUrlArr;
    NSData *_circleFeedDurations;
    NSData *_circleFeedThumbnails;
    NSData *_circleFeedTvIds;
    NSData *_circleFeedTvTitles;
    NSData *_circleFeedUrls;
    NSNumber *_circleFeedTxtOnly;
    NSString *_circleName;
    NSNumber *_circleType;
    NSNumber *_circleMaster;
    NSNumber *_circleFeedTop;
    NSNumber *_circleFeedRecom;
    NSString *_circleFeedRecomReason;
    NSArray *_circleFeedLikesSort;
    NSNumber *_circleFeedTotalLikes;
    QYPPCircleFeedVoteModel *_circleFeedVoteModel;
    QYPPCircleFeedLongImageTextModel *_circleFeedLongImageTextModel;
    NSArray *_circleFeedCDNUrlArr;
    NSData *_circleFeedCDNUrls;
    NSNumber *_dataType;
    QYPPCircleRelatedCardModel *_circleCardModel;
    NSData *_circleFeedMasterTags;
    NSArray *_circleFeedMasterTagsArr;
    NSString *_circleFeedTitle;
    NSString *_wallIcon;
    NSString *_wallDesc;
    NSNumber *_unReadCount;
    NSNumber *_wallUserCount;
    NSNumber *_wallFeedCount;
    NSNumber *_totalCount;
    NSNumber *_isPrivate;
    QYPPCircleFeedMTLModel *_feedShareSrcModel;
    NSArray *_pictures;
    NSString *_shareH5url;
    NSString *_sourceDesc;
    NSManagedObjectID *_localFeedObjectId;
    NSArray *_circleFeedLocalCoverUrlArr;
    NSNumber *_circleEventId;
    NSNumber *_circleEventTodayHot;
    NSNumber *_circleEventHotNum;
    NSString *_circleEventName;
    NSString *_circleEventIcon;
    NSNumber *_circleEventType;
    NSArray *_circleFeedVideoUrlArr;
    NSNumber *_userJoin;
    QYPPFeedQiYiVideoModel *_baseVideoInfo;
    NSNumber *_uvCount;
    NSArray *_footPrintArr;
    NSData *_footPrintArrData;
    NSNumber *_userIdentity;
    NSString *_userIdentityUrl;
    NSString *_starFlopUrl;
    NSNumber *_feedFlag;
    NSArray *_circleEventListArr;
    NSData *_circleEventListArrData;
    NSNumber *_focusPicID;
    NSArray *_starComments;
    NSNumber *_isStarLiked;
    NSNumber *_isStarCom;
    NSNumber *_isStarRep;
    NSNumber *_isStarLikedCom;
    NSString *_starName;
    NSString *_starUid;
    NSString *_starIcon;
    NSString *_audioInfoUrl;
    NSNumber *_audioInfoDuration;
    NSNumber *_level;
    NSString *_levelName;
    NSNumber *_hittingReason;
    NSString *_hittingDesc;
    NSNumber *_notice;
    NSNumber *_userShutUp;
    NSArray *_wallAdministrator;
    NSNumber *_isInStarActivity;
    NSNumber *_isConvention;
    NSNumber *_recomDataFlag;
    NSNumber *_dataStyle;
    NSNumber *_rec_resource;
    NSNumber *_welFareId;
    NSString *_welFareName;
    NSString *_welFareDesc;
    NSString *_welFareCover;
    NSNumber *_welFareTag;
    NSString *_welFareAward;
    NSNumber *_welFareAwardNum;
    NSString *_welFareAwardPic;
    NSNumber *_welFareValid;
    NSNumber *_welFareHotNum;
    NSNumber *_showAdmire;
    NSNumber *_admiresCount;
    NSString *_pendantPicUrl;
    NSNumber *_adOrder;
    NSString *_adZoneId;
    NSNumber *_adFeedId;
    NSString *_adTimeSlice;
    CupidAd *_cupidAd;
    long long _adResultId;
    QYPPCircleLiveVideoMTLModel *_liveInfo;
    QYPPCircleCometInfoMTLModel *_cometInfo;
    NSString *_showMaster;
    QYPPCircleFeedShareInfoModel *_share;
    PPCircleFeedGeniusModel *_genius;
    NSString *_completePercent;
    NSString *_noticeType;
    NSNumber *_commonUserIdentity;
    NSString *_videoCollectionId;
    NSString *_isFan;
    NSString *_area;
    NSString *_bucket;
    NSString *_eventId;
    NSString *_rootChannelId;
    NSString *_recSource;
    NSNumber *_type;
    NSNumber *_dataFrom;
    NSNumber *_cardId;
    NSNumber *_pos;
    NSString *_pingBackAidName;
    NSString *_materialId;
    NSString *_videoMeta;
}

+ (id)sharePublishersInfo:(id)arg1;
+ (id)makeShareDictionaryWithFeedModel:(id)arg1;
+ (id)chatShareFeedDictWithCommonShareDict:(id)arg1;
+ (id)cometInfoJSONTransformer;
+ (id)liveInfoJSONTransformer;
+ (id)starCommentsJSONTransformer;
+ (id)baseVideoInfoJSONTransformer;
+ (id)geniusJSONTransformer;
+ (id)shareJSONTransformer;
+ (id)feedShareSrcModelJSONTransformer;
+ (id)circleFeedUninterestTagArrJSONTransformer;
+ (id)circleFeedQiyiVideoArrJSONTransformer;
+ (id)circleEventListArrJSONTransformer;
+ (id)picturesJSONTransformer;
+ (id)circleCardModelJSONTransformer;
+ (id)circleFeedLongImageTextModelJSONTransformer;
+ (id)circleFeedVoteModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool welFareProcessed; // @synthesize welFareProcessed=_welFareProcessed;
@property(nonatomic) _Bool voteDescribeProcessed; // @synthesize voteDescribeProcessed=_voteDescribeProcessed;
@property(nonatomic) _Bool voteProcessed; // @synthesize voteProcessed=_voteProcessed;
@property(nonatomic) _Bool eventProcessed; // @synthesize eventProcessed=_eventProcessed;
@property(retain, nonatomic) NSString *videoMeta; // @synthesize videoMeta=_videoMeta;
@property(copy, nonatomic) NSString *materialId; // @synthesize materialId=_materialId;
@property(nonatomic) _Bool auditPolicyLv3; // @synthesize auditPolicyLv3=_auditPolicyLv3;
@property(nonatomic) _Bool disableThirdShare; // @synthesize disableThirdShare=_disableThirdShare;
@property(nonatomic) _Bool bestFeed; // @synthesize bestFeed=_bestFeed;
@property(retain, nonatomic) NSString *pingBackAidName; // @synthesize pingBackAidName=_pingBackAidName;
@property(retain, nonatomic) NSNumber *pos; // @synthesize pos=_pos;
@property(retain, nonatomic) NSNumber *cardId; // @synthesize cardId=_cardId;
@property(copy, nonatomic) NSNumber *dataFrom; // @synthesize dataFrom=_dataFrom;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *recSource; // @synthesize recSource=_recSource;
@property(copy, nonatomic) NSString *rootChannelId; // @synthesize rootChannelId=_rootChannelId;
@property(copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(copy, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
@property(copy, nonatomic) NSString *area; // @synthesize area=_area;
@property(retain, nonatomic) NSString *isFan; // @synthesize isFan=_isFan;
@property(retain, nonatomic) NSString *videoCollectionId; // @synthesize videoCollectionId=_videoCollectionId;
@property(retain, nonatomic) NSNumber *commonUserIdentity; // @synthesize commonUserIdentity=_commonUserIdentity;
@property(retain, nonatomic) NSString *noticeType; // @synthesize noticeType=_noticeType;
@property(retain, nonatomic) NSString *completePercent; // @synthesize completePercent=_completePercent;
@property(copy, nonatomic) PPCircleFeedGeniusModel *genius; // @synthesize genius=_genius;
@property(retain, nonatomic) QYPPCircleFeedShareInfoModel *share; // @synthesize share=_share;
@property(retain, nonatomic) NSString *showMaster; // @synthesize showMaster=_showMaster;
@property(retain, nonatomic) QYPPCircleCometInfoMTLModel *cometInfo; // @synthesize cometInfo=_cometInfo;
@property(retain, nonatomic) QYPPCircleLiveVideoMTLModel *liveInfo; // @synthesize liveInfo=_liveInfo;
@property(nonatomic) long long adResultId; // @synthesize adResultId=_adResultId;
@property(nonatomic) _Bool isEmptyAds; // @synthesize isEmptyAds=_isEmptyAds;
@property(nonatomic) _Bool isAds; // @synthesize isAds=_isAds;
@property(retain, nonatomic) CupidAd *cupidAd; // @synthesize cupidAd=_cupidAd;
@property(retain, nonatomic) NSString *adTimeSlice; // @synthesize adTimeSlice=_adTimeSlice;
@property(retain, nonatomic) NSNumber *adFeedId; // @synthesize adFeedId=_adFeedId;
@property(retain, nonatomic) NSString *adZoneId; // @synthesize adZoneId=_adZoneId;
@property(retain, nonatomic) NSNumber *adOrder; // @synthesize adOrder=_adOrder;
@property(retain, nonatomic) NSString *pendantPicUrl; // @synthesize pendantPicUrl=_pendantPicUrl;
@property(retain, nonatomic) NSNumber *admiresCount; // @synthesize admiresCount=_admiresCount;
@property(retain, nonatomic) NSNumber *showAdmire; // @synthesize showAdmire=_showAdmire;
@property(retain, nonatomic) NSNumber *welFareHotNum; // @synthesize welFareHotNum=_welFareHotNum;
@property(retain, nonatomic) NSNumber *welFareValid; // @synthesize welFareValid=_welFareValid;
@property(retain, nonatomic) NSString *welFareAwardPic; // @synthesize welFareAwardPic=_welFareAwardPic;
@property(retain, nonatomic) NSNumber *welFareAwardNum; // @synthesize welFareAwardNum=_welFareAwardNum;
@property(retain, nonatomic) NSString *welFareAward; // @synthesize welFareAward=_welFareAward;
@property(retain, nonatomic) NSNumber *welFareTag; // @synthesize welFareTag=_welFareTag;
@property(retain, nonatomic) NSString *welFareCover; // @synthesize welFareCover=_welFareCover;
@property(retain, nonatomic) NSString *welFareDesc; // @synthesize welFareDesc=_welFareDesc;
@property(retain, nonatomic) NSString *welFareName; // @synthesize welFareName=_welFareName;
@property(retain, nonatomic) NSNumber *welFareId; // @synthesize welFareId=_welFareId;
@property(retain, nonatomic) NSNumber *rec_resource; // @synthesize rec_resource=_rec_resource;
@property(nonatomic) _Bool isSquareTopFeed; // @synthesize isSquareTopFeed=_isSquareTopFeed;
@property(copy, nonatomic) NSNumber *dataStyle; // @synthesize dataStyle=_dataStyle;
@property(copy, nonatomic) NSNumber *recomDataFlag; // @synthesize recomDataFlag=_recomDataFlag;
@property(retain, nonatomic) NSNumber *isConvention; // @synthesize isConvention=_isConvention;
@property(retain, nonatomic) NSNumber *isInStarActivity; // @synthesize isInStarActivity=_isInStarActivity;
@property(retain, nonatomic) NSArray *wallAdministrator; // @synthesize wallAdministrator=_wallAdministrator;
@property(retain, nonatomic) NSNumber *userShutUp; // @synthesize userShutUp=_userShutUp;
@property(retain, nonatomic) NSNumber *notice; // @synthesize notice=_notice;
@property(retain, nonatomic) NSString *hittingDesc; // @synthesize hittingDesc=_hittingDesc;
@property(retain, nonatomic) NSNumber *hittingReason; // @synthesize hittingReason=_hittingReason;
@property(retain, nonatomic) NSString *levelName; // @synthesize levelName=_levelName;
@property(retain, nonatomic) NSNumber *level; // @synthesize level=_level;
@property(retain, nonatomic) NSNumber *audioInfoDuration; // @synthesize audioInfoDuration=_audioInfoDuration;
@property(retain, nonatomic) NSString *audioInfoUrl; // @synthesize audioInfoUrl=_audioInfoUrl;
@property(retain, nonatomic) NSString *starIcon; // @synthesize starIcon=_starIcon;
@property(retain, nonatomic) NSString *starUid; // @synthesize starUid=_starUid;
@property(retain, nonatomic) NSString *starName; // @synthesize starName=_starName;
@property(retain, nonatomic) NSNumber *isStarLikedCom; // @synthesize isStarLikedCom=_isStarLikedCom;
@property(retain, nonatomic) NSNumber *isStarRep; // @synthesize isStarRep=_isStarRep;
@property(retain, nonatomic) NSNumber *isStarCom; // @synthesize isStarCom=_isStarCom;
@property(retain, nonatomic) NSNumber *isStarLiked; // @synthesize isStarLiked=_isStarLiked;
@property(retain, nonatomic) NSArray *starComments; // @synthesize starComments=_starComments;
@property(retain, nonatomic) NSNumber *focusPicID; // @synthesize focusPicID=_focusPicID;
@property(retain, nonatomic) NSData *circleEventListArrData; // @synthesize circleEventListArrData=_circleEventListArrData;
@property(retain, nonatomic) NSArray *circleEventListArr; // @synthesize circleEventListArr=_circleEventListArr;
@property(retain, nonatomic) NSNumber *feedFlag; // @synthesize feedFlag=_feedFlag;
@property(copy, nonatomic) NSString *starFlopUrl; // @synthesize starFlopUrl=_starFlopUrl;
@property(copy, nonatomic) NSString *userIdentityUrl; // @synthesize userIdentityUrl=_userIdentityUrl;
@property(retain, nonatomic) NSNumber *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(retain, nonatomic) NSData *footPrintArrData; // @synthesize footPrintArrData=_footPrintArrData;
@property(retain, nonatomic) NSArray *footPrintArr; // @synthesize footPrintArr=_footPrintArr;
@property(retain, nonatomic) NSNumber *uvCount; // @synthesize uvCount=_uvCount;
@property(retain, nonatomic) QYPPFeedQiYiVideoModel *baseVideoInfo; // @synthesize baseVideoInfo=_baseVideoInfo;
@property(retain, nonatomic) NSNumber *userJoin; // @synthesize userJoin=_userJoin;
@property(retain, nonatomic) NSArray *circleFeedVideoUrlArr; // @synthesize circleFeedVideoUrlArr=_circleFeedVideoUrlArr;
@property(retain, nonatomic) NSNumber *circleEventType; // @synthesize circleEventType=_circleEventType;
@property(copy, nonatomic) NSString *circleEventIcon; // @synthesize circleEventIcon=_circleEventIcon;
@property(copy, nonatomic) NSString *circleEventName; // @synthesize circleEventName=_circleEventName;
@property(retain, nonatomic) NSNumber *circleEventHotNum; // @synthesize circleEventHotNum=_circleEventHotNum;
@property(retain, nonatomic) NSNumber *circleEventTodayHot; // @synthesize circleEventTodayHot=_circleEventTodayHot;
@property(retain, nonatomic) NSNumber *circleEventId; // @synthesize circleEventId=_circleEventId;
@property(nonatomic) _Bool isPlayByLocalUrl; // @synthesize isPlayByLocalUrl=_isPlayByLocalUrl;
@property(retain, nonatomic) NSArray *circleFeedLocalCoverUrlArr; // @synthesize circleFeedLocalCoverUrlArr=_circleFeedLocalCoverUrlArr;
@property(retain, nonatomic) NSManagedObjectID *localFeedObjectId; // @synthesize localFeedObjectId=_localFeedObjectId;
@property(retain, nonatomic) NSString *sourceDesc; // @synthesize sourceDesc=_sourceDesc;
@property(retain, nonatomic) NSString *shareH5url; // @synthesize shareH5url=_shareH5url;
@property(retain, nonatomic) NSArray *pictures; // @synthesize pictures=_pictures;
@property(retain, nonatomic) QYPPCircleFeedMTLModel *feedShareSrcModel; // @synthesize feedShareSrcModel=_feedShareSrcModel;
@property(retain, nonatomic) NSNumber *isPrivate; // @synthesize isPrivate=_isPrivate;
@property(retain, nonatomic) NSNumber *totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) NSNumber *wallFeedCount; // @synthesize wallFeedCount=_wallFeedCount;
@property(retain, nonatomic) NSNumber *wallUserCount; // @synthesize wallUserCount=_wallUserCount;
@property(retain, nonatomic) NSNumber *unReadCount; // @synthesize unReadCount=_unReadCount;
@property(retain, nonatomic) NSString *wallDesc; // @synthesize wallDesc=_wallDesc;
@property(retain, nonatomic) NSString *wallIcon; // @synthesize wallIcon=_wallIcon;
@property(retain, nonatomic) NSString *circleFeedTitle; // @synthesize circleFeedTitle=_circleFeedTitle;
@property(retain, nonatomic) NSArray *circleFeedMasterTagsArr; // @synthesize circleFeedMasterTagsArr=_circleFeedMasterTagsArr;
@property(retain, nonatomic) NSData *circleFeedMasterTags; // @synthesize circleFeedMasterTags=_circleFeedMasterTags;
@property(retain, nonatomic) QYPPCircleRelatedCardModel *circleCardModel; // @synthesize circleCardModel=_circleCardModel;
@property(retain, nonatomic) NSNumber *dataType; // @synthesize dataType=_dataType;
@property(retain, nonatomic) NSData *circleFeedCDNUrls; // @synthesize circleFeedCDNUrls=_circleFeedCDNUrls;
@property(retain, nonatomic) NSArray *circleFeedCDNUrlArr; // @synthesize circleFeedCDNUrlArr=_circleFeedCDNUrlArr;
@property(retain, nonatomic) QYPPCircleFeedLongImageTextModel *circleFeedLongImageTextModel; // @synthesize circleFeedLongImageTextModel=_circleFeedLongImageTextModel;
@property(retain, nonatomic) QYPPCircleFeedVoteModel *circleFeedVoteModel; // @synthesize circleFeedVoteModel=_circleFeedVoteModel;
@property(retain, nonatomic) NSNumber *circleFeedTotalLikes; // @synthesize circleFeedTotalLikes=_circleFeedTotalLikes;
@property(retain, nonatomic) NSArray *circleFeedLikesSort; // @synthesize circleFeedLikesSort=_circleFeedLikesSort;
@property(retain, nonatomic) NSString *circleFeedRecomReason; // @synthesize circleFeedRecomReason=_circleFeedRecomReason;
@property(retain, nonatomic) NSNumber *circleFeedRecom; // @synthesize circleFeedRecom=_circleFeedRecom;
@property(retain, nonatomic) NSNumber *circleFeedTop; // @synthesize circleFeedTop=_circleFeedTop;
@property(retain, nonatomic) NSNumber *circleMaster; // @synthesize circleMaster=_circleMaster;
@property(nonatomic) NSNumber *circleType; // @synthesize circleType=_circleType;
@property(retain, nonatomic) NSString *circleName; // @synthesize circleName=_circleName;
@property(retain, nonatomic) NSNumber *circleFeedTxtOnly; // @synthesize circleFeedTxtOnly=_circleFeedTxtOnly;
@property(retain, nonatomic) NSData *circleFeedUrls; // @synthesize circleFeedUrls=_circleFeedUrls;
@property(retain, nonatomic) NSData *circleFeedTvTitles; // @synthesize circleFeedTvTitles=_circleFeedTvTitles;
@property(retain, nonatomic) NSData *circleFeedTvIds; // @synthesize circleFeedTvIds=_circleFeedTvIds;
@property(retain, nonatomic) NSData *circleFeedThumbnails; // @synthesize circleFeedThumbnails=_circleFeedThumbnails;
@property(retain, nonatomic) NSData *circleFeedDurations; // @synthesize circleFeedDurations=_circleFeedDurations;
@property(retain, nonatomic) NSArray *circleFeedUrlArr; // @synthesize circleFeedUrlArr=_circleFeedUrlArr;
@property(retain, nonatomic) NSData *circleFeedSightResolutions; // @synthesize circleFeedSightResolutions=_circleFeedSightResolutions;
@property(retain, nonatomic) NSArray *circleFeedSightResolutionsArr; // @synthesize circleFeedSightResolutionsArr=_circleFeedSightResolutionsArr;
@property(retain, nonatomic) NSData *circleFeedSightFileIds; // @synthesize circleFeedSightFileIds=_circleFeedSightFileIds;
@property(retain, nonatomic) NSArray *circleFeedSightFileIdArr; // @synthesize circleFeedSightFileIdArr=_circleFeedSightFileIdArr;
@property(retain, nonatomic) NSArray *circleFeedUninterestTagArr; // @synthesize circleFeedUninterestTagArr=_circleFeedUninterestTagArr;
@property(retain, nonatomic) NSArray *circleFeedQiyiVideoArr; // @synthesize circleFeedQiyiVideoArr=_circleFeedQiyiVideoArr;
@property(retain, nonatomic) NSArray *circleFeedTvTitleArr; // @synthesize circleFeedTvTitleArr=_circleFeedTvTitleArr;
@property(retain, nonatomic) NSArray *circleFeedTvIdArr; // @synthesize circleFeedTvIdArr=_circleFeedTvIdArr;
@property(retain, nonatomic) NSArray *circleFeedThumbnailArr; // @synthesize circleFeedThumbnailArr=_circleFeedThumbnailArr;
@property(retain, nonatomic) NSArray *circleFeedDurationArr; // @synthesize circleFeedDurationArr=_circleFeedDurationArr;
@property(retain, nonatomic) NSNumber *circleFeedResourceCnt; // @synthesize circleFeedResourceCnt=_circleFeedResourceCnt;
@property(retain, nonatomic) NSNumber *circleFeedIsVip; // @synthesize circleFeedIsVip=_circleFeedIsVip;
@property(retain, nonatomic) NSNumber *circleFeedAlbumId; // @synthesize circleFeedAlbumId=_circleFeedAlbumId;
@property(retain, nonatomic) NSString *circleFeedAuthorName; // @synthesize circleFeedAuthorName=_circleFeedAuthorName;
@property(retain, nonatomic) NSString *circleFeedAuthorIcon; // @synthesize circleFeedAuthorIcon=_circleFeedAuthorIcon;
@property(retain, nonatomic) NSNumber *circleFeedIsGif; // @synthesize circleFeedIsGif=_circleFeedIsGif;
@property(retain, nonatomic) NSString *circleFeedResourceSize; // @synthesize circleFeedResourceSize=_circleFeedResourceSize;
@property(retain, nonatomic) NSNumber *circleFeedExtendType; // @synthesize circleFeedExtendType=_circleFeedExtendType;
@property(retain, nonatomic) NSNumber *circleFeedSharedCnt; // @synthesize circleFeedSharedCnt=_circleFeedSharedCnt;
@property(retain, nonatomic) NSNumber *circleFeedUVCnt; // @synthesize circleFeedUVCnt=_circleFeedUVCnt;
@property(retain, nonatomic) NSNumber *circleFeedCommentCnt; // @synthesize circleFeedCommentCnt=_circleFeedCommentCnt;
@property(retain, nonatomic) NSNumber *circleFeedAgreed; // @synthesize circleFeedAgreed=_circleFeedAgreed;
@property(retain, nonatomic) NSNumber *circleFeedAgreeCnt; // @synthesize circleFeedAgreeCnt=_circleFeedAgreeCnt;
@property(retain, nonatomic) NSNumber *circleFeedType; // @synthesize circleFeedType=_circleFeedType;
@property(retain, nonatomic) NSNumber *circleFeedUserType; // @synthesize circleFeedUserType=_circleFeedUserType;
@property(retain, nonatomic) NSNumber *circleFeedAuthorUid; // @synthesize circleFeedAuthorUid=_circleFeedAuthorUid;
@property(retain, nonatomic) NSDate *circleFeedModifyDate; // @synthesize circleFeedModifyDate=_circleFeedModifyDate;
@property(retain, nonatomic) NSDate *circleFeedReleaseDate; // @synthesize circleFeedReleaseDate=_circleFeedReleaseDate;
@property(retain, nonatomic) NSNumber *circleFeedModifyDateNum; // @synthesize circleFeedModifyDateNum=_circleFeedModifyDateNum;
@property(retain, nonatomic) NSNumber *circleFeedReleaseDateNum; // @synthesize circleFeedReleaseDateNum=_circleFeedReleaseDateNum;
@property(retain, nonatomic) NSString *circleFeedDesc; // @synthesize circleFeedDesc=_circleFeedDesc;
@property(retain, nonatomic) NSString *circleFeedPubLocation; // @synthesize circleFeedPubLocation=_circleFeedPubLocation;
@property(retain, nonatomic) NSNumber *circleFeedStatus; // @synthesize circleFeedStatus=_circleFeedStatus;
@property(retain, nonatomic) NSArray *imageLocalPaths; // @synthesize imageLocalPaths=_imageLocalPaths;
@property(retain, nonatomic) NSArray *thumbnailLocalPaths; // @synthesize thumbnailLocalPaths=_thumbnailLocalPaths;
@property(retain, nonatomic) NSNumber *circleFeedSnsTime; // @synthesize circleFeedSnsTime=_circleFeedSnsTime;
@property(nonatomic) _Bool isManualFeed; // @synthesize isManualFeed=_isManualFeed;
@property(retain, nonatomic) NSNumber *circleFeedWallId; // @synthesize circleFeedWallId=_circleFeedWallId;
@property(retain, nonatomic) NSNumber *circleFeedId; // @synthesize circleFeedId=_circleFeedId;
- (void).cxx_destruct;
- (_Bool)isVideoClipsFeedModel;
- (id)qp_getCrowdfundingInfoDataWithModel:(id)arg1;
- (_Bool)isShareCrowdfundingFeedType;
- (_Bool)qp_isCrowdfundingFeedType;
- (id)getCrowdfundingInfoViewModel;
- (id)eventIdArray;
- (id)topicRanges;
- (_Bool)isEventCard;
- (void)mergeStarInfoWithFeed:(id)arg1;
- (_Bool)isStarRelated;
- (void)setTestStarCommentData;
- (_Bool)hasWriterFootPrint;
- (_Bool)hasStarFootPrint;
- (_Bool)isNeedShowTitleAndDesc;
- (_Bool)hasMasterTag:(unsigned long long)arg1;
- (_Bool)isLaterThanLocalEntity:(id)arg1;
@property(readonly, nonatomic) long long circleWallIdValue;
@property(readonly, nonatomic) long long circleFeedIdValue;
- (_Bool)isDeletedSharedFeed;
- (id)toDic4Play;
- (_Bool)hasCircleName;
@property(readonly, nonatomic) NSArray *imageUrls;
- (double)aspectRatioForVideo;
- (struct CGSize)sizeForVideo;
- (struct CGSize)firstPicSize;
- (struct CGSize)getFirstPicFitSizeWithFixedWidth:(double)arg1;
- (struct CGSize)getFirstPicFitSizeWithMaxSide:(double)arg1;
- (int)feedShareType;
- (_Bool)isTopFeed;
- (_Bool)isSinglePicFeed;
- (id)getFeedPicUrlArr;
- (_Bool)isQiyiShareVideo;
- (id)stringTitleAndContent;
- (id)showNoMarkDescText;
- (id)circleFeedTitleForTopFeedInSearch;
- (void)videoDescribeAdjust;
- (void)voteDescribeAdjust;
- (id)feedDescPrefix;
- (id)showDescText;
- (id)fetchFirstPicListUrl;
- (id)fetchFirstPicOriginUrl;
- (id)shapeOfImage:(id)arg1;
- (_Bool)isManualEssenceFeed;
- (_Bool)isRecommendEssenceFeed;
- (_Bool)isRecommendNewFeed;
- (_Bool)isShowVideo;
- (_Bool)isSupportFeedForDetail;
- (id)archiveArr:(id)arg1;
- (void)dataFromArray;
- (id)initWithLocalFeed:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (double)fluency;
- (int)feedType;

@end

