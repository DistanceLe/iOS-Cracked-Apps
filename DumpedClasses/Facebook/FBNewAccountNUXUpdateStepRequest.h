//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBNetworkerRequest.h>

@class NSString;

@interface FBNewAccountNUXUpdateStepRequest : FBNetworkerRequest
{
    NSString *_stepStatus;
    NSString *_stepName;
}

@property(copy, nonatomic) NSString *stepName; // @synthesize stepName=_stepName;
@property(copy, nonatomic) NSString *stepStatus; // @synthesize stepStatus=_stepStatus;
- (void).cxx_destruct;
- (id)_stringFromStepStatusType:(unsigned long long)arg1;
- (id)_uniqueIdentifier;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)networkRequest;
- (id)initWithStepName:(id)arg1 status:(unsigned long long)arg2 callbackPerformer:(id)arg3;

@end

