//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVViewController.h"

#import "KTVShareToChatVLLDelegate.h"

@class KTVOpusModel, KTVShareToChatVLL, KTVShareToChatVM, KTVShareToChatView, NSString;

@interface KTVShareToChatViewController : KTVViewController <KTVShareToChatVLLDelegate>
{
    KTVOpusModel *_opusInfo;
    CDUnknownBlockType _shareCompeleteBlock;
    KTVShareToChatView *_myShareToChatView;
    KTVShareToChatVLL *_myShareToChatVLL;
    KTVShareToChatVM *_myShareToChatVM;
}

@property(retain, nonatomic) KTVShareToChatVM *myShareToChatVM; // @synthesize myShareToChatVM=_myShareToChatVM;
@property(retain, nonatomic) KTVShareToChatVLL *myShareToChatVLL; // @synthesize myShareToChatVLL=_myShareToChatVLL;
@property(retain, nonatomic) KTVShareToChatView *myShareToChatView; // @synthesize myShareToChatView=_myShareToChatView;
@property(copy, nonatomic) CDUnknownBlockType shareCompeleteBlock; // @synthesize shareCompeleteBlock=_shareCompeleteBlock;
@property(retain, nonatomic) KTVOpusModel *opusInfo; // @synthesize opusInfo=_opusInfo;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)KGUsingControllerState:(int)arg1;
- (long long)showPlayBarWay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
