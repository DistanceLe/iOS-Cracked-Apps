//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QIYIChatManagerDelegate-Protocol.h"

@class NSString, QPChatCellViewBase, QPChatMessage, UIButton;

@interface QIYIPaopaoStarArriveView : UIView <QIYIChatManagerDelegate>
{
    UIView *bgView;
    QPChatMessage *message;
    UIButton *arrowBtn;
    QPChatCellViewBase *cell;
    CDUnknownBlockType _clickBubbleBlk;
    CDUnknownBlockType _longPressBubbleBlk;
}

@property(copy, nonatomic) CDUnknownBlockType longPressBubbleBlk; // @synthesize longPressBubbleBlk=_longPressBubbleBlk;
@property(copy, nonatomic) CDUnknownBlockType clickBubbleBlk; // @synthesize clickBubbleBlk=_clickBubbleBlk;
@property(retain, nonatomic) QPChatCellViewBase *cell; // @synthesize cell;
@property(retain, nonatomic) UIButton *arrowBtn; // @synthesize arrowBtn;
- (void).cxx_destruct;
- (void)dealloc;
- (void)hideWithFinishBlk:(CDUnknownBlockType)arg1;
- (double)getViewHeight;
- (void)updateContents;
- (void)showWithMsg:(id)arg1 animation:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

