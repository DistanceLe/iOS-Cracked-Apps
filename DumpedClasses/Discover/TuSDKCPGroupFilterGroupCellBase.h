//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TuSDKCPGroupFilterItemCellBase.h"

@class UILongPressGestureRecognizer;

@interface TuSDKCPGroupFilterGroupCellBase : TuSDKCPGroupFilterItemCellBase
{
    UILongPressGestureRecognizer *_longPressGesture;
    id <TuSDKCPGroupFilterGroupCellDelegate> _delegate;
}

@property(nonatomic) id <TuSDKCPGroupFilterGroupCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onLongPress:(id)arg1;
- (_Bool)isInActingType;
- (_Bool)canHiddenRemoveFlag;
- (void)viewWillDestory;
- (void)viewNeedRest;

@end
