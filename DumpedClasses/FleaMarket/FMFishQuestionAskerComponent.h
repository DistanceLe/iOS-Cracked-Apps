//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMCellComponent.h"

#import "FMDOCompatible.h"

@class FMQuestionDetailDO, FMUserTagListDO, NSString;

@interface FMFishQuestionAskerComponent : FMCellComponent <FMDOCompatible>
{
    NSString *_avatarUrl;
    NSString *_askerName;
    NSString *_askTime;
    NSString *_askId;
    FMUserTagListDO *_tagListDO;
    FMQuestionDetailDO *_questionDO;
}

@property(retain, nonatomic) FMQuestionDetailDO *questionDO; // @synthesize questionDO=_questionDO;
@property(retain, nonatomic) FMUserTagListDO *tagListDO; // @synthesize tagListDO=_tagListDO;
@property(retain, nonatomic) NSString *askId; // @synthesize askId=_askId;
@property(retain, nonatomic) NSString *askTime; // @synthesize askTime=_askTime;
@property(retain, nonatomic) NSString *askerName; // @synthesize askerName=_askerName;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
- (void).cxx_destruct;
- (_Bool)fmSetupWithDO:(id)arg1 extraObject:(id)arg2;
- (Class)viewClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
