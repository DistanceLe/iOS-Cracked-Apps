//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FCFeedItemCell;

@protocol FCFeedItemCellDelegate <NSObject>
- (void)feedItemCell:(FCFeedItemCell *)arg1 photoClickAtIndex:(unsigned long long)arg2 withPhotoIndex:(unsigned long long)arg3;
- (void)feedItemCell:(FCFeedItemCell *)arg1 moreClickAtIndex:(unsigned long long)arg2;
- (void)feedItemCell:(FCFeedItemCell *)arg1 sourceClickAtIndex:(unsigned long long)arg2;
- (void)feedItemCell:(FCFeedItemCell *)arg1 linkClickAtIndex:(unsigned long long)arg2;
- (void)feedItemCell:(FCFeedItemCell *)arg1 goodClickAtIndex:(unsigned long long)arg2;
@end
