//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class DiDiPOIEntityModel<Optional>, NSNumber<Optional>, NSString, NSString<Optional>;

@interface TRWLGetCarTypeCouponReqModel : JSONModel
{
    NSNumber<Optional> *_seqId;
    DiDiPOIEntityModel<Optional> *_fromAddr;
    DiDiPOIEntityModel<Optional> *_destAddr;
    NSNumber<Optional> *_goOffDate;
    NSString<Optional> *_carLevelId;
    NSString<Optional> *_tip;
    NSString<Optional> *_payType;
    NSString<Optional> *_like_wait;
    NSString<Optional> *_callcar_type;
    NSString<Optional> *_callcar_phone;
    NSString<Optional> *_seat_count;
    NSString<Optional> *_activity_id;
    NSNumber<Optional> *_scene_type;
    NSNumber<Optional> *_combo_id;
    NSNumber<Optional> *_business_id;
    NSString<Optional> *_source;
    NSString<Optional> *_guide_api_info;
    NSString<Optional> *_guideState;
    NSString *_custom_feature;
    NSString<Optional> *_current_station_id;
    NSString<Optional> *_carpool_require_trace_id;
    NSString<Optional> *_carpool_station_type;
    NSNumber<Optional> *_too_far_order_limit;
}

@property(retain, nonatomic) NSNumber<Optional> *too_far_order_limit; // @synthesize too_far_order_limit=_too_far_order_limit;
@property(copy, nonatomic) NSString<Optional> *carpool_station_type; // @synthesize carpool_station_type=_carpool_station_type;
@property(copy, nonatomic) NSString<Optional> *carpool_require_trace_id; // @synthesize carpool_require_trace_id=_carpool_require_trace_id;
@property(copy, nonatomic) NSString<Optional> *current_station_id; // @synthesize current_station_id=_current_station_id;
@property(retain, nonatomic) NSString *custom_feature; // @synthesize custom_feature=_custom_feature;
@property(copy, nonatomic) NSString<Optional> *guideState; // @synthesize guideState=_guideState;
@property(copy, nonatomic) NSString<Optional> *guide_api_info; // @synthesize guide_api_info=_guide_api_info;
@property(copy, nonatomic) NSString<Optional> *source; // @synthesize source=_source;
@property(retain, nonatomic) NSNumber<Optional> *business_id; // @synthesize business_id=_business_id;
@property(retain, nonatomic) NSNumber<Optional> *combo_id; // @synthesize combo_id=_combo_id;
@property(retain, nonatomic) NSNumber<Optional> *scene_type; // @synthesize scene_type=_scene_type;
@property(copy, nonatomic) NSString<Optional> *activity_id; // @synthesize activity_id=_activity_id;
@property(copy, nonatomic) NSString<Optional> *seat_count; // @synthesize seat_count=_seat_count;
@property(copy, nonatomic) NSString<Optional> *callcar_phone; // @synthesize callcar_phone=_callcar_phone;
@property(copy, nonatomic) NSString<Optional> *callcar_type; // @synthesize callcar_type=_callcar_type;
@property(copy, nonatomic) NSString<Optional> *like_wait; // @synthesize like_wait=_like_wait;
@property(copy, nonatomic) NSString<Optional> *payType; // @synthesize payType=_payType;
@property(copy, nonatomic) NSString<Optional> *tip; // @synthesize tip=_tip;
@property(copy, nonatomic) NSString<Optional> *carLevelId; // @synthesize carLevelId=_carLevelId;
@property(retain, nonatomic) NSNumber<Optional> *goOffDate; // @synthesize goOffDate=_goOffDate;
@property(retain, nonatomic) DiDiPOIEntityModel<Optional> *destAddr; // @synthesize destAddr=_destAddr;
@property(retain, nonatomic) DiDiPOIEntityModel<Optional> *fromAddr; // @synthesize fromAddr=_fromAddr;
@property(retain, nonatomic) NSNumber<Optional> *seqId; // @synthesize seqId=_seqId;
- (void).cxx_destruct;

@end
