//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface HyEncrypt : NSObject
{
}

+ (id)decryptToNSDataWithNSData:(id)arg1 key:(const void *)arg2 keySize:(unsigned long long)arg3 blockSize:(unsigned long long)arg4 alg:(unsigned int)arg5 options:(unsigned int)arg6 iv:(const void *)arg7;
+ (id)encryptToNSDataWithNSData:(id)arg1 key:(const void *)arg2 keySize:(unsigned long long)arg3 blockSize:(unsigned long long)arg4 alg:(unsigned int)arg5 options:(unsigned int)arg6 iv:(const void *)arg7;

@end

