//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, WKI18NAdjustUIModel;

@interface WKLocalizationSystem : NSObject
{
    NSString *_curLan;
    NSArray *_mSupportLanguage;
    NSDictionary *_mLanguageCodeDic;
    WKI18NAdjustUIModel *_mUIAdjustModel;
}

+ (id)sharedLocalSystem;
@property(retain, nonatomic) WKI18NAdjustUIModel *mUIAdjustModel; // @synthesize mUIAdjustModel=_mUIAdjustModel;
@property(retain, nonatomic) NSDictionary *mLanguageCodeDic; // @synthesize mLanguageCodeDic=_mLanguageCodeDic;
@property(retain, nonatomic) NSArray *mSupportLanguage; // @synthesize mSupportLanguage=_mSupportLanguage;
@property(retain, nonatomic) NSString *curLan; // @synthesize curLan=_curLan;
- (void).cxx_destruct;
- (id)getTranslateString:(id)arg1;
- (struct CGRect)getRect:(id)arg1 objectname:(id)arg2 defrect:(struct CGRect)arg3;
- (id)getCurrentBundle;
- (id)getEnglishBundle;
- (id)localizedImagePathForImg:(id)arg1 type:(id)arg2;
- (id)localizedImagePathForImgname:(id)arg1;
- (id)getOSLanguageCode;
- (id)getCurrentLanguageCode;
- (id)getCurrentLanguage;
- (void)changeLanguage:(id)arg1;
- (_Bool)isSupportLanguage:(id)arg1;
- (_Bool)isCurrentChinese;
- (id)getSupportLanguage;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2;
- (void)reloadLocalizationLanguage;
- (id)init;

@end

