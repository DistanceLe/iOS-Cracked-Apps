//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MQQQTResourceManager : NSObject
{
    NSString *_directory;
}

@property(copy, nonatomic) NSString *directory; // @synthesize directory=_directory;
- (void)clearImageCache;
- (_Bool)isCorrectFile:(id)arg1 md5:(id)arg2;
- (_Bool)isCorrectData:(id)arg1 md5:(id)arg2;
- (id)md5ForURLString:(id)arg1;
- (id)imageForURLString:(id)arg1;
- (id)imagePathForURLString:(id)arg1;
- (id)imagePathsForAdvertise:(id)arg1;
- (id)imagesForAdvertise:(id)arg1;
- (_Bool)isReadyForAdvertise:(id)arg1;
- (id)initWithDirectory:(id)arg1;
- (void)dealloc;

@end

