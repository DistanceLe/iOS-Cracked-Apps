//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface LSSyncCommentListInfo : NSObject
{
    NSString *_bizType;
    NSString *_liveId;
    double _time;
    NSArray *_commentList;
}

+ (id)instanceWithDic:(id)arg1;
@property(retain, nonatomic) NSArray *commentList; // @synthesize commentList=_commentList;
@property(nonatomic) double time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
- (void).cxx_destruct;

@end

