//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol FCModel <NSObject>
@property(nonatomic) __weak id <FCModelDelegate> delegate;
- (void)updateWithData:(id)arg1;
- (void)joinFetchWithModel:(id <FCModel>)arg1;
- (void)fetchNext;
- (void)fetch;
@end

