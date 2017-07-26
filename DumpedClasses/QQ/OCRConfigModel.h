//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSString, OCRImageModel;

@interface OCRConfigModel : QQModel
{
    _Bool _scanOcrOpen;
    _Bool _aioOcrOpen;
    _Bool _qzoneOcrOpen;
    long long _version;
    NSString *_scanIconImage;
    NSString *_scanIconMd5;
    OCRImageModel *_scanIconImageModel;
    NSString *_scanIconPressImage;
    NSString *_scanIconPressMd5;
    OCRImageModel *_scanIconPressImageModel;
    NSString *_scanEnterText;
    NSString *_scanLine1;
    NSString *_aioEnterText;
}

@property(nonatomic) _Bool qzoneOcrOpen; // @synthesize qzoneOcrOpen=_qzoneOcrOpen;
@property(retain, nonatomic) NSString *aioEnterText; // @synthesize aioEnterText=_aioEnterText;
@property(nonatomic) _Bool aioOcrOpen; // @synthesize aioOcrOpen=_aioOcrOpen;
@property(retain, nonatomic) NSString *scanLine1; // @synthesize scanLine1=_scanLine1;
@property(retain, nonatomic) NSString *scanEnterText; // @synthesize scanEnterText=_scanEnterText;
@property(retain, nonatomic) OCRImageModel *scanIconPressImageModel; // @synthesize scanIconPressImageModel=_scanIconPressImageModel;
@property(retain, nonatomic) NSString *scanIconPressMd5; // @synthesize scanIconPressMd5=_scanIconPressMd5;
@property(retain, nonatomic) NSString *scanIconPressImage; // @synthesize scanIconPressImage=_scanIconPressImage;
@property(retain, nonatomic) OCRImageModel *scanIconImageModel; // @synthesize scanIconImageModel=_scanIconImageModel;
@property(retain, nonatomic) NSString *scanIconMd5; // @synthesize scanIconMd5=_scanIconMd5;
@property(retain, nonatomic) NSString *scanIconImage; // @synthesize scanIconImage=_scanIconImage;
@property(nonatomic) _Bool scanOcrOpen; // @synthesize scanOcrOpen=_scanOcrOpen;
@property(nonatomic) long long version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)getScanIconPressImage;
- (id)getScanIconImage;
- (void)downloadResource;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
