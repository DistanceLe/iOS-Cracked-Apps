//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSNumber, NSString, WDUserFullStructModel;

@interface WDCommentStructModel : WDBaseModel
{
    NSString *_comment_id;
    WDUserFullStructModel *_user;
    NSString *_content;
    NSNumber *_digg_count;
    NSNumber *_user_digg;
    NSNumber *_create_time;
    NSNumber *_can_delete;
}

@property(retain, nonatomic) NSNumber *can_delete; // @synthesize can_delete=_can_delete;
@property(retain, nonatomic) NSNumber *create_time; // @synthesize create_time=_create_time;
@property(retain, nonatomic) NSNumber *user_digg; // @synthesize user_digg=_user_digg;
@property(retain, nonatomic) NSNumber *digg_count; // @synthesize digg_count=_digg_count;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) WDUserFullStructModel *user; // @synthesize user=_user;
@property(retain, nonatomic) NSString *comment_id; // @synthesize comment_id=_comment_id;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

