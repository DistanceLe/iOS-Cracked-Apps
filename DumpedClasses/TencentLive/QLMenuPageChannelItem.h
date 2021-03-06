//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface QLMenuPageChannelItem : NSObject
{
    NSString *_title;
    UIImage *_image;
    NSString *_imageUrl;
    NSString *_itemId;
    id _correspondObject;
}

+ (id)menuPageItemWithObj:(id)arg1;
+ (id)menuPageItemWithChannelObj:(id)arg1;
+ (id)menuPageItemWithCommonItem:(id)arg1;
+ (id)menuPageItemWithActorInfo:(id)arg1;
+ (id)menuPageItemWithTitle:(id)arg1 image:(id)arg2 imageUrl:(id)arg3 itemId:(id)arg4;
@property(retain, nonatomic) id correspondObject; // @synthesize correspondObject=_correspondObject;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

