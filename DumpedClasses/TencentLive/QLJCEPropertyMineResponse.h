//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString;

@interface QLJCEPropertyMineResponse : JceObjectV2
{
    int jcev2_p_0_r_errCode;
    NSArray *jcev2_p_1_r_myProperty__b0x9i_VOQLJCEPropertyItemData;
    NSString *jcev2_p_2_o_ts;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_ts, setter=setJce_ts:) NSString *jcev2_p_2_o_ts; // @synthesize jcev2_p_2_o_ts;
@property(retain, nonatomic, getter=jce_myProperty, setter=setJce_myProperty:) NSArray *jcev2_p_1_r_myProperty__b0x9i_VOQLJCEPropertyItemData; // @synthesize jcev2_p_1_r_myProperty__b0x9i_VOQLJCEPropertyItemData;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end
