//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ExploreDeleteManager : NSObject
{
}

+ (id)shareManager;
- (void)postDeleteNotificationIfNeed:(id)arg1 type:(id)arg2;
- (void)deleteMomentCommentForCommentID:(id)arg1;
- (void)deleteMomentForMomentID:(id)arg1;
- (void)deleteReplyedComment:(id)arg1 InHostComment:(id)arg2;
- (void)deleteArticleCommentForCommentID:(id)arg1 isAnswer:(_Bool)arg2 isNewComment:(_Bool)arg3;

@end

