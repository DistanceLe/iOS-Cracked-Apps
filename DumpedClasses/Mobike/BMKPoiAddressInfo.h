//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BMKPoiAddressInfo : NSObject
{
    NSString *_name;
    NSString *_address;
    struct CLLocationCoordinate2D _pt;
}

@property(nonatomic) struct CLLocationCoordinate2D pt; // @synthesize pt=_pt;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

