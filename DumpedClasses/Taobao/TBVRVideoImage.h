//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBVRVideoUIComponent.h"

@class NSString;

@interface TBVRVideoImage : TBVRVideoUIComponent
{
    _Bool _imageDownloaded;
    long long _viewId;
    NSString *_url;
    struct CGSize _size;
}

@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic, getter=isImageDownloaded) _Bool imageDownloaded; // @synthesize imageDownloaded=_imageDownloaded;
@property(nonatomic) long long viewId; // @synthesize viewId=_viewId;
- (void).cxx_destruct;
- (_Bool)canDisable;
- (_Bool)canFocuse;
- (void)setupImage:(id)arg1;
- (void)startDownloadImage;
- (id)initWithUrl:(id)arg1 size:(struct CGSize)arg2;

@end
