//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface KQLabelEntity : NSObject
{
    long long _labelId;
    NSString *_name;
}

+ (id)modelWithDict:(id)arg1;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long labelId; // @synthesize labelId=_labelId;
- (void).cxx_destruct;
- (id)initModelWithDict:(id)arg1;

@end

