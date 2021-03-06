//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMGuideBubbleView, NSString, RACSignal;

@interface FMGuideInfo : NSObject
{
    _Bool _prepared;
    RACSignal *_triggerSignal;
    FMGuideBubbleView *_guideView;
    NSString *_intent;
    NSString *_imageName;
}

@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *intent; // @synthesize intent=_intent;
@property(retain, nonatomic) FMGuideBubbleView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) RACSignal *triggerSignal; // @synthesize triggerSignal=_triggerSignal;
@property(nonatomic) _Bool prepared; // @synthesize prepared=_prepared;
- (void).cxx_destruct;
- (void)dismissGuide;
- (void)unload;
- (void)showGuide:(CDUnknownBlockType)arg1;
- (id)initWithIntent:(id)arg1 imgSrc:(id)arg2;

@end

