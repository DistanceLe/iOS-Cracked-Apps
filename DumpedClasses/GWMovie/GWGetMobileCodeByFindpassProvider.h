//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseInfoProvider.h"

@class NSString;

@interface GWGetMobileCodeByFindpassProvider : GWBaseInfoProvider
{
    NSString *_mobile;
    NSString *_sendtype;
    NSString *_memberid;
}

@property(retain, nonatomic) NSString *memberid; // @synthesize memberid=_memberid;
@property(copy, nonatomic) NSString *sendtype; // @synthesize sendtype=_sendtype;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
- (void).cxx_destruct;
- (void)requestWithGetMobileCodeByFindpassHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (void)dealloc;

@end

