//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMethodSignature;

@interface DYCClosure : NSObject
{
    void *_function;
    NSMethodSignature *_methodSignature;
    CDUnknownBlockType _callback;
    CDStruct_70df9622 *_cif;
    CDStruct_a1491473 *_closure;
}

+ (id)closureWithObjCTypes:(const char *)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)standaloneBlockWithObjCTypes:(const char *)arg1 callback:(CDUnknownBlockType)arg2;
@property(nonatomic) CDStruct_a1491473 *closure; // @synthesize closure=_closure;
@property(nonatomic) CDStruct_70df9622 *cif; // @synthesize cif=_cif;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSMethodSignature *methodSignature; // @synthesize methodSignature=_methodSignature;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) void *function; // @synthesize function=_function;

@end

