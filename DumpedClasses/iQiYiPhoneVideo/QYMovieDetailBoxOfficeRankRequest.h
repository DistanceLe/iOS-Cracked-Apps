//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYMessageRequest.h"

@class NSString;

@interface QYMovieDetailBoxOfficeRankRequest : QYMessageRequest
{
    NSString *_movieId;
    NSString *_cityId;
}

@property(copy, nonatomic) NSString *cityId; // @synthesize cityId=_cityId;
@property(copy, nonatomic) NSString *movieId; // @synthesize movieId=_movieId;
- (void).cxx_destruct;
- (_Bool)parse:(id)arg1;
- (id)urlStl;
- (id)init;

@end

