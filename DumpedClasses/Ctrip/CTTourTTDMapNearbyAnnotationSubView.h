//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CTImageView, CTTourTTDMapUserCollectionInfo, UILabel;

@interface CTTourTTDMapNearbyAnnotationSubView : UIView
{
    CTTourTTDMapUserCollectionInfo *_userCollectionInfo;
    CTImageView *_backgroundImageView;
    CTImageView *_avatarImageView;
    CTImageView *_jiebanIcon;
    UILabel *_userCountLabel;
}

@property(retain, nonatomic) UILabel *userCountLabel; // @synthesize userCountLabel=_userCountLabel;
@property(retain, nonatomic) CTImageView *jiebanIcon; // @synthesize jiebanIcon=_jiebanIcon;
@property(retain, nonatomic) CTImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) CTImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) CTTourTTDMapUserCollectionInfo *userCollectionInfo; // @synthesize userCollectionInfo=_userCollectionInfo;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

