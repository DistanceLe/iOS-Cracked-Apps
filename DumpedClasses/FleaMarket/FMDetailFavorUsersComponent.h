//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMCellComponent.h"

#import "FMDOCompatible.h"

@class FMItemGuideDO, NSMutableArray, NSString;

@interface FMDetailFavorUsersComponent : FMCellComponent <FMDOCompatible>
{
    NSString *_itemId;
    NSString *_favorNum;
    unsigned long long _browseCount;
    NSString *_pvCardStartPV;
    NSMutableArray *_favorUserIds;
    FMItemGuideDO *_guideDO;
}

@property(retain, nonatomic) FMItemGuideDO *guideDO; // @synthesize guideDO=_guideDO;
@property(retain, nonatomic) NSMutableArray *favorUserIds; // @synthesize favorUserIds=_favorUserIds;
@property(copy, nonatomic) NSString *pvCardStartPV; // @synthesize pvCardStartPV=_pvCardStartPV;
@property(nonatomic) unsigned long long browseCount; // @synthesize browseCount=_browseCount;
@property(retain, nonatomic) NSString *favorNum; // @synthesize favorNum=_favorNum;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (_Bool)fmSetupWithDO:(id)arg1 extraObject:(id)arg2;
- (void)getBrowseUpInfo:(CDUnknownBlockType)arg1;
- (Class)viewClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

