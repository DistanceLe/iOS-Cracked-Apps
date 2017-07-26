//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface MAFIAResult : NSObject
{
    _Bool _judgment;
    _Bool _isDefault;
    _Bool _isCache;
    NSArray *_infos;
    NSString *_groupName;
    NSString *_sceneKey;
    NSString *_MD5;
}

+ (id)resultWithJudgment:(_Bool)arg1 isDefault:(_Bool)arg2;
@property(retain, nonatomic) NSString *MD5; // @synthesize MD5=_MD5;
@property(retain, nonatomic) NSString *sceneKey; // @synthesize sceneKey=_sceneKey;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSArray *infos; // @synthesize infos=_infos;
@property(nonatomic) _Bool isCache; // @synthesize isCache=_isCache;
@property(nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(nonatomic) _Bool judgment; // @synthesize judgment=_judgment;
- (void).cxx_destruct;
- (void)dealloc;

@end
