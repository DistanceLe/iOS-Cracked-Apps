//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYRKModel.h"

@class NSArray, NSString;

@interface XYPHAdministrativeArea : XYRKModel
{
    NSArray *_subAdministrativeArea;
    NSString *_name;
}

+ (id)usersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSArray *subAdministrativeArea; // @synthesize subAdministrativeArea=_subAdministrativeArea;
- (void).cxx_destruct;

@end
