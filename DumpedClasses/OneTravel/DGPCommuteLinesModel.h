//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DGPBaseModel.h"

@class NSArray<DGPCommuteModel>, NSString;

@interface DGPCommuteLinesModel : DGPBaseModel
{
    NSArray<DGPCommuteModel> *_commuteModels;
    NSString *_fingerprint;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(copy, nonatomic) NSString *fingerprint; // @synthesize fingerprint=_fingerprint;
@property(retain, nonatomic) NSArray<DGPCommuteModel> *commuteModels; // @synthesize commuteModels=_commuteModels;
- (void).cxx_destruct;
- (id)transformToOneResonse;

@end

