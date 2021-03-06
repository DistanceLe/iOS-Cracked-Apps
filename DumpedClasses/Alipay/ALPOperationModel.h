//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIColor;

@interface ALPOperationModel : NSObject
{
    NSString *_bizType;
    NSString *_logoText;
    NSString *_secondLogoText;
    NSString *_passId;
    NSString *_colorString;
    NSString *_operations;
    NSString *_secondaryOperationUrl;
    NSString *_secondaryOperationTitle;
    NSString *_secondaryOperationAltText;
    NSString *_trendUrl;
    NSArray *_opMsgArray;
}

+ (void)stopOTPService;
+ (id)modelWithCardInfo:(id)arg1;
+ (id)modelWithPassInfo:(id)arg1;
@property(retain, nonatomic) NSArray *opMsgArray; // @synthesize opMsgArray=_opMsgArray;
@property(copy, nonatomic) NSString *trendUrl; // @synthesize trendUrl=_trendUrl;
@property(copy, nonatomic) NSString *secondaryOperationAltText; // @synthesize secondaryOperationAltText=_secondaryOperationAltText;
@property(copy, nonatomic) NSString *secondaryOperationTitle; // @synthesize secondaryOperationTitle=_secondaryOperationTitle;
@property(copy, nonatomic) NSString *secondaryOperationUrl; // @synthesize secondaryOperationUrl=_secondaryOperationUrl;
@property(copy, nonatomic) NSString *operations; // @synthesize operations=_operations;
@property(copy, nonatomic) NSString *colorString; // @synthesize colorString=_colorString;
@property(copy, nonatomic) NSString *passId; // @synthesize passId=_passId;
@property(copy, nonatomic) NSString *secondLogoText; // @synthesize secondLogoText=_secondLogoText;
@property(copy, nonatomic) NSString *logoText; // @synthesize logoText=_logoText;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *color;

@end

