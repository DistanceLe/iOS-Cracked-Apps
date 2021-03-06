//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DCPOIEntityModel, NSDate, NSString;

@interface DCOrderLiftCreateModel : NSObject
{
    _Bool _calculatable;
    _Bool _needRefreshPin;
    DCPOIEntityModel *_fromPOI;
    DCPOIEntityModel *_toPOI;
    NSDate *_wayDate;
    NSString *_date_txt;
    NSString *_modifyFromSource;
}

@property(nonatomic) _Bool needRefreshPin; // @synthesize needRefreshPin=_needRefreshPin;
@property(retain, nonatomic) NSString *modifyFromSource; // @synthesize modifyFromSource=_modifyFromSource;
@property(nonatomic) _Bool calculatable; // @synthesize calculatable=_calculatable;
@property(copy, nonatomic) NSString *date_txt; // @synthesize date_txt=_date_txt;
@property(copy, nonatomic) NSDate *wayDate; // @synthesize wayDate=_wayDate;
@property(copy, nonatomic) DCPOIEntityModel *toPOI; // @synthesize toPOI=_toPOI;
@property(copy, nonatomic) DCPOIEntityModel *fromPOI; // @synthesize fromPOI=_fromPOI;
- (void).cxx_destruct;

@end

