//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, QYBubbleConfigItem;

@interface QYBubbleConfig : NSObject
{
    QYBubbleConfigItem *_config_dubi;
    QYBubbleConfigItem *_config_4K;
    NSString *_w1;
    NSString *_h1;
    NSString *_w2;
    NSString *_version;
}

+ (id)parseForArray:(id)arg1;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *w2; // @synthesize w2=_w2;
@property(retain, nonatomic) NSString *h1; // @synthesize h1=_h1;
@property(retain, nonatomic) NSString *w1; // @synthesize w1=_w1;
@property(retain, nonatomic) QYBubbleConfigItem *config_4K; // @synthesize config_4K=_config_4K;
@property(retain, nonatomic) QYBubbleConfigItem *config_dubi; // @synthesize config_dubi=_config_dubi;
- (void).cxx_destruct;
- (void)buildWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

