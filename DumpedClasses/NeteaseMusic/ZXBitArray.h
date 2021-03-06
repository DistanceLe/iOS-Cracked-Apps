//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface ZXBitArray : NSObject <NSCopying>
{
    int _size;
    int _bitsLength;
    int *_bits;
}

@property(nonatomic) int bitsLength; // @synthesize bitsLength=_bitsLength;
@property(nonatomic) int size; // @synthesize size=_size;
@property(nonatomic) int *bits; // @synthesize bits=_bits;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)numberOfTrailingZeros:(int)arg1;
- (id)description;
- (void)reverse;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)bitArray;
- (void)toBytes:(int)arg1 array:(id)arg2 offset:(int)arg3 numBytes:(int)arg4;
- (void)xor:(id)arg1;
- (void)appendBitArray:(id)arg1;
- (void)appendBits:(int)arg1 numBits:(int)arg2;
- (void)appendBit:(_Bool)arg1;
- (_Bool)isRange:(int)arg1 end:(int)arg2 value:(_Bool)arg3;
- (void)clear;
- (void)setRange:(int)arg1 end:(int)arg2;
- (void)setBulk:(int)arg1 newBits:(int)arg2;
- (int)nextUnset:(int)arg1;
- (int)nextSet:(int)arg1;
- (void)flip:(int)arg1;
- (void)set:(int)arg1;
- (_Bool)get:(int)arg1;
- (void)ensureCapacity:(int)arg1;
- (int)sizeInBytes;
- (void)dealloc;
- (id)initWithSize:(int)arg1;
- (id)initWithBits:(id)arg1 size:(int)arg2;
- (id)init;

@end

