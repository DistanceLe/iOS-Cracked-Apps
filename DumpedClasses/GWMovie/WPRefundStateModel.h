//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSString;

@interface WPRefundStateModel : GWObject
{
    long long _state;
    long long _type;
    NSString *_text;
    NSString *_time;
}

@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;

@end

