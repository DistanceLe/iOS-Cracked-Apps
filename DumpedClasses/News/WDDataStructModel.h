//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSArray<WDTabStructModel>, NSNumber, NSNumber<Optional>, NSString<Optional>, WDUserStructModel<Optional>;

@interface WDDataStructModel : WDBaseModel
{
    NSNumber *_cell_type;
    NSNumber *_login_status;
    WDUserStructModel<Optional> *_user;
    NSNumber<Optional> *_tips;
    NSString<Optional> *_wenda_description;
    NSString<Optional> *_schema;
    NSArray<WDTabStructModel> *_tabs;
}

@property(retain, nonatomic) NSArray<WDTabStructModel> *tabs; // @synthesize tabs=_tabs;
@property(retain, nonatomic) NSString<Optional> *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) NSString<Optional> *wenda_description; // @synthesize wenda_description=_wenda_description;
@property(retain, nonatomic) NSNumber<Optional> *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) WDUserStructModel<Optional> *user; // @synthesize user=_user;
@property(retain, nonatomic) NSNumber *login_status; // @synthesize login_status=_login_status;
@property(retain, nonatomic) NSNumber *cell_type; // @synthesize cell_type=_cell_type;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
