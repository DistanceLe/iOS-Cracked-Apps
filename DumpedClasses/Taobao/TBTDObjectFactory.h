//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface TBTDObjectFactory : NSObject
{
    NSDictionary *_modelCreateRules;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *modelCreateRules; // @synthesize modelCreateRules=_modelCreateRules;
- (void).cxx_destruct;
- (id)creatModelWithCellType:(id)arg1 cellData:(id)arg2;
- (void)initModelCreateRules;
- (id)init;

@end

