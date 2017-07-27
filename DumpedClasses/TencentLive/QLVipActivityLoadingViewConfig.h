//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLVipActivityConfig.h"

@class NSMutableArray, NSString, QLJCELoadingConfig, UIColor;

@interface QLVipActivityLoadingViewConfig : QLVipActivityConfig
{
    QLJCELoadingConfig *_currentConfig;
    NSMutableArray *_configs;
}

@property(retain, nonatomic) NSMutableArray *configs; // @synthesize configs=_configs;
@property(retain, nonatomic) QLJCELoadingConfig *currentConfig; // @synthesize currentConfig=_currentConfig;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *bgColor;
@property(readonly, nonatomic) UIColor *speedColor;
@property(readonly, nonatomic) NSString *imageUrl;
- (_Bool)shouldApplyConfig;
- (_Bool)hasShowTimesFromConfig:(id)arg1;
- (void)randomSelectConfig;
- (id)configId;
- (void)saveShowCount;
- (void)setObject:(id)arg1;

@end
