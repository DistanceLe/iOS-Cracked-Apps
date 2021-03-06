//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextStorage.h"

@class NSDictionary, NSMutableAttributedString, UIColor;

@interface XYTKTextStorage : NSTextStorage
{
    NSMutableAttributedString *_impAttri;
    UIColor *_highlightColor;
    NSDictionary *_defaultTextAttributes;
}

@property(nonatomic) __weak NSDictionary *defaultTextAttributes; // @synthesize defaultTextAttributes=_defaultTextAttributes;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
- (void).cxx_destruct;
- (void)processEditing;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)string;
- (id)init;

@end

