//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOBaseCard.h"

#import "ITBOCellHeight.h"

@class NSString;

@interface TBOBanner : TBOBaseCard <ITBOCellHeight>
{
    double _bannerCellHeight;
    double _titleHeight;
    NSString *_title;
    NSString *_pic;
    NSString *_adUserNick;
    NSString *_adUserPic;
    NSString *_picWidth;
    NSString *_picHeight;
}

@property(retain, nonatomic) NSString *picHeight; // @synthesize picHeight=_picHeight;
@property(retain, nonatomic) NSString *picWidth; // @synthesize picWidth=_picWidth;
@property(retain, nonatomic) NSString *adUserPic; // @synthesize adUserPic=_adUserPic;
@property(retain, nonatomic) NSString *adUserNick; // @synthesize adUserNick=_adUserNick;
@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (double)getTitleHeght;
- (double)cellHeightForModel:(id)arg1 owner:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

