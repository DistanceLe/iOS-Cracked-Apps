//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEShareItemDetailRequest : JceObjectV2
{
    int jcev2_p_0_r_scene;
    NSString *jcev2_p_1_r_dataKey;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_dataKey, setter=setJce_dataKey:) NSString *jcev2_p_1_r_dataKey; // @synthesize jcev2_p_1_r_dataKey;
@property(nonatomic, getter=jce_scene, setter=setJce_scene:) int jcev2_p_0_r_scene; // @synthesize jcev2_p_0_r_scene;
- (void).cxx_destruct;
- (id)init;

@end
