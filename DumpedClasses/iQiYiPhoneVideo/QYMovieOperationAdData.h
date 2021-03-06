//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QYMovieOperationAdData : NSObject
{
    NSString *_relatedEntity;
    NSString *_order;
    NSString *_name;
    NSString *_frameIndex;
    NSString *_src;
    NSString *_type;
    NSString *_href;
    NSString *_isHrefNative;
    NSString *_posType;
    NSString *_entryText;
}

@property(copy, nonatomic) NSString *entryText; // @synthesize entryText=_entryText;
@property(copy, nonatomic) NSString *posType; // @synthesize posType=_posType;
@property(copy, nonatomic) NSString *isHrefNative; // @synthesize isHrefNative=_isHrefNative;
@property(copy, nonatomic) NSString *href; // @synthesize href=_href;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *src; // @synthesize src=_src;
@property(copy, nonatomic) NSString *frameIndex; // @synthesize frameIndex=_frameIndex;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *order; // @synthesize order=_order;
@property(copy, nonatomic) NSString *relatedEntity; // @synthesize relatedEntity=_relatedEntity;
- (void).cxx_destruct;
- (void)buildWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

