//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NXDriverProtocol.h"

@class NXActionHandler, NXJSContext, NXNode;

@interface NXDriver : NSObject <NXDriverProtocol>
{
    NXJSContext *_context;
    unsigned int _commands;
    unsigned int _blockCommands;
    NXNode *_container;
    _Bool _isCancel;
    NXNode *_lastComponent;
    id <NXDriverDelegate> _delegate;
    NXActionHandler *_actionHandler;
}

@property(nonatomic) __weak NXActionHandler *actionHandler; // @synthesize actionHandler=_actionHandler;
@property(nonatomic) __weak id <NXDriverDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int commands; // @synthesize commands=_commands;
@property(readonly, nonatomic) _Bool isCancel; // @synthesize isCancel=_isCancel;
@property(nonatomic) __weak NXJSContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NXNode *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (void)reset;
- (void)cleanContext;
- (void)setIconFont:(id)arg1 base64Url:(id)arg2;
- (void)setPageArgs:(id)arg1;
- (void)afterRender;
- (void)render:(id)arg1 child:(id)arg2;
- (void)runBlocks;
- (void)removeEventListener:(id)arg1 event:(id)arg2 handler:(id)arg3;
- (void)addEventListener:(id)arg1 event:(id)arg2 handler:(id)arg3;
- (void)setStyles:(id)arg1 styles:(id)arg2;
- (void)setAttribute:(id)arg1 property:(id)arg2;
- (void)removeChild:(id)arg1 child:(id)arg2;
- (void)insertBefore:(id)arg1 child:(id)arg2 before:(id)arg3;
- (void)insertAfter:(id)arg1 child:(id)arg2 after:(id)arg3;
- (void)appendChild:(id)arg1 child:(id)arg2;
- (id)nextSibling:(id)arg1;
- (id)createElement:(id)arg1 properties:(id)arg2;
- (id)createRootElement;

@end
