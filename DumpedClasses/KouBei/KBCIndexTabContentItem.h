//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface KBCIndexTabContentItem : NSObject
{
    _Bool _checkLogin;
    _Bool _markHasSelected;
    _Bool _needRefresh;
    NSString *_tabName;
    NSArray *_tips;
    unsigned long long _type;
    NSString *_category;
    NSString *_url;
    NSArray *_badge;
    NSDictionary *_rqyDetail;
}

@property(nonatomic) _Bool needRefresh; // @synthesize needRefresh=_needRefresh;
@property(nonatomic) _Bool markHasSelected; // @synthesize markHasSelected=_markHasSelected;
@property(retain, nonatomic) NSDictionary *rqyDetail; // @synthesize rqyDetail=_rqyDetail;
@property(nonatomic) _Bool checkLogin; // @synthesize checkLogin=_checkLogin;
@property(retain, nonatomic) NSArray *badge; // @synthesize badge=_badge;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) NSString *tabName; // @synthesize tabName=_tabName;
- (void).cxx_destruct;

@end

