//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBSCBasicServiceDelegate.h"

@class NSString, TBSCCommentCommodityItem, TBSCCommentService;

@interface TBSCInputBarOperation : NSObject <TBSCBasicServiceDelegate>
{
    int _commentListType;
    int _commentContentType;
    unsigned long long _userId;
    CDUnknownBlockType _finishCallBack;
    NSString *_commentContent;
    unsigned long long _targetId;
    TBSCCommentService *_commentService;
    TBSCCommentCommodityItem *_commentCommodityItem;
}

@property(retain, nonatomic) TBSCCommentCommodityItem *commentCommodityItem; // @synthesize commentCommodityItem=_commentCommodityItem;
@property(retain, nonatomic) TBSCCommentService *commentService; // @synthesize commentService=_commentService;
@property(nonatomic) int commentContentType; // @synthesize commentContentType=_commentContentType;
@property(nonatomic) unsigned long long targetId; // @synthesize targetId=_targetId;
@property(retain, nonatomic) NSString *commentContent; // @synthesize commentContent=_commentContent;
@property(copy, nonatomic) CDUnknownBlockType finishCallBack; // @synthesize finishCallBack=_finishCallBack;
@property(nonatomic) unsigned long long userId; // @synthesize userId=_userId;
@property(nonatomic) int commentListType; // @synthesize commentListType=_commentListType;
- (void).cxx_destruct;
- (void)service:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)serviceDidFinishLoad:(id)arg1;
- (void)replyCommentWithSocialParam:(id)arg1 commentExtParam:(id)arg2 pargentId:(unsigned long long)arg3 accountId:(unsigned long long)arg4 type:(int)arg5 content:(id)arg6 extSymbol:(id)arg7 encryptAccountId:(id)arg8 finishCallBack:(CDUnknownBlockType)arg9;
- (void)replyCommentWithSocialParam:(id)arg1 commentExtParam:(id)arg2 pargentId:(unsigned long long)arg3 accountId:(unsigned long long)arg4 type:(int)arg5 content:(id)arg6 extSymbol:(id)arg7 finishCallBack:(CDUnknownBlockType)arg8;
- (void)sendCommentWithSocialParam:(id)arg1 commentExtParam:(id)arg2 accountId:(unsigned long long)arg3 type:(int)arg4 content:(id)arg5 extSymbol:(id)arg6 finishCallBack:(CDUnknownBlockType)arg7;
- (void)sendCommentWithSocialParam:(id)arg1 commentExtParam:(id)arg2 accountId:(unsigned long long)arg3 type:(int)arg4 content:(id)arg5 extSymbol:(id)arg6 encryptAccountId:(id)arg7 finishCallBack:(CDUnknownBlockType)arg8;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
