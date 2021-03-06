//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSArray<FRGroupInfoStructModel><Optional>, NSNumber, NSString<Optional>;

@interface FRTtdiscussV1LongReviewListResponseModel : TTResponseModel
{
    NSArray<FRGroupInfoStructModel><Optional> *_group_list;
    NSNumber *_min_cursor;
    NSNumber *_max_cursor;
    NSNumber *_has_more;
    NSNumber *_err_no;
    NSString<Optional> *_err_tips;
}

@property(retain, nonatomic) NSString<Optional> *err_tips; // @synthesize err_tips=_err_tips;
@property(retain, nonatomic) NSNumber *err_no; // @synthesize err_no=_err_no;
@property(retain, nonatomic) NSNumber *has_more; // @synthesize has_more=_has_more;
@property(retain, nonatomic) NSNumber *max_cursor; // @synthesize max_cursor=_max_cursor;
@property(retain, nonatomic) NSNumber *min_cursor; // @synthesize min_cursor=_min_cursor;
@property(retain, nonatomic) NSArray<FRGroupInfoStructModel><Optional> *group_list; // @synthesize group_list=_group_list;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

