//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (PTHNSStringCategory)
+ (id)stringWithCount:(unsigned long long)arg1;
+ (id)stringWithFormat:(id)arg1 array:(id)arg2;
+ (id)uuid;
- (id)cNumberFormatString;
- (id)stringByAddingNewlinesWithMaxLineLength:(unsigned long long)arg1;
- (id)stringByDecodingHTMLEntities;
- (void)enumerateHTMLEntities:(CDUnknownBlockType)arg1;
- (id)stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)urlDecode;
- (id)urlEncode;
- (id)hmacSHA1Base64:(id)arg1;
- (id)hmacSHA1Data:(id)arg1;
- (id)sha1HexString;
- (id)sha1Base64String;
- (id)sha1Data;
- (id)md5HexString;
- (id)md5Base64String;
- (id)md5Data;
- (long long)longLongValue;
@end
