//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSMutableDictionary;

@interface QQGroupPropertyModel : QQModel
{
    int _nBulidNum;
    NSMutableDictionary *_propertyDict;
    NSMutableDictionary *_getterObjcDict;
    NSMutableDictionary *_setterObjcDict;
}

- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)getPropertyList;
- (_Bool)respondsToSelector:(SEL)arg1;

@end

