//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DRCBaseModel.h"

@class NSArray<DRCShareConfigsModel><Optional>, NSString;

@interface DRCSharePackageModel : DRCBaseModel
{
    NSString *_title;
    NSString *_h5;
    NSString *_icon;
    NSArray<DRCShareConfigsModel><Optional> *_shareConfigs;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSArray<DRCShareConfigsModel><Optional> *shareConfigs; // @synthesize shareConfigs=_shareConfigs;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *h5; // @synthesize h5=_h5;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
