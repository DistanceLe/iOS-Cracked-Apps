//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class NSMutableArray, NSObject<OS_dispatch_group>, _VZASentinel;

@interface VZALayer : CALayer
{
    NSObject<OS_dispatch_group> *_group;
    NSMutableArray *_operations;
    _VZASentinel *_displaySentinel;
    id <VZADisplayDelegate> _displayDelegate;
}

@property(nonatomic) __weak id <VZADisplayDelegate> displayDelegate; // @synthesize displayDelegate=_displayDelegate;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)addOperationWithBlock:(CDUnknownBlockType)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)display;
- (void)_complete;
- (void)complete;
- (void)setNeedsDisplay;
- (void)_ensureTransactionData;
- (id)init;

@end

