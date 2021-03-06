//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BUniversalActionDelegate.h"

@class NSString, TangramFlareHelper;

@interface TMMarketComponentActionHandler : NSObject <BUniversalActionDelegate>
{
    TangramFlareHelper *_flareHelper;
}

@property(nonatomic) __weak TangramFlareHelper *flareHelper; // @synthesize flareHelper=_flareHelper;
- (void).cxx_destruct;
- (void)handlerTodayCrazyActivityChanged:(id)arg1;
- (_Bool)componentIsVisible:(id)arg1;
- (id)layoutForComponent:(id)arg1;
- (void)handleUTWithAction:(id)arg1;
- (id)argsFromString:(id)arg1;
- (id)scmWithModel:(id)arg1;
- (id)spmWithSPMC:(id)arg1 spmd:(id)arg2;
- (id)stringWithNum:(long long)arg1;
- (id)urlAppendSPM:(id)arg1 spm:(id)arg2;
- (void)openURL:(id)arg1 spmc:(id)arg2 spmd:(id)arg3;
- (void)openURLWithAction:(id)arg1;
- (void)handleFeedbackAction:(id)arg1;
- (void)todayCrazyClicked:(id)arg1;
- (void)handleJugglerAddCartClicked:(id)arg1;
- (void)handleAddCartClicked:(id)arg1;
- (void)handleExcellentItemAddCartClicked:(id)arg1;
- (void)bannerClicked:(id)arg1;
- (void)bulletinClicked:(id)arg1;
- (void)handleCloseClicked:(id)arg1;
- (void)handleDRenderAction:(id)arg1;
- (void)handleHuiLifeAction:(id)arg1;
- (void)handleBrandClicked:(id)arg1;
- (void)handleKeyWordClicked:(id)arg1;
- (void)handleGoodsClicked:(id)arg1;
- (void)handleUniversalClicked:(id)arg1;
- (void)handleAlimamaADForClick:(id)arg1;
- (void)handleAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

