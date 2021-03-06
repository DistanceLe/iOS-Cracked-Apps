//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EmotionShowView.h"

@class APImageRequest, MOBILECHATEmotionModelVO, NSDictionary, PKGifPlaceholderView, UITapGestureRecognizer;

@interface PKGIFView : EmotionShowView
{
    int _alignmentType;
    NSDictionary *_gif;
    NSDictionary *_chatDataSource;
    MOBILECHATEmotionModelVO *_gifEmotion;
    UITapGestureRecognizer *_tapGesture;
    PKGifPlaceholderView *_placeholdView;
    APImageRequest *_imageRequest;
}

@property(retain, nonatomic) APImageRequest *imageRequest; // @synthesize imageRequest=_imageRequest;
@property(retain, nonatomic) PKGifPlaceholderView *placeholdView; // @synthesize placeholdView=_placeholdView;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) MOBILECHATEmotionModelVO *gifEmotion; // @synthesize gifEmotion=_gifEmotion;
@property(retain, nonatomic) NSDictionary *chatDataSource; // @synthesize chatDataSource=_chatDataSource;
@property(retain, nonatomic) NSDictionary *gif; // @synthesize gif=_gif;
@property(nonatomic) int alignmentType; // @synthesize alignmentType=_alignmentType;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)emotionTaped:(id)arg1;
- (void)playEmotion:(id)arg1;
- (_Bool)needLoadGif:(id)arg1;
- (id)init;

@end

