//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CTHotelFullScreenMaskViewDelegate.h"
#import "CTWebImageViewDelegate.h"

@class CTHotelFullScreenMaskView, NSString;

@interface CTHotelOrderDetailCouponDespView : NSObject <CTHotelFullScreenMaskViewDelegate, CTWebImageViewDelegate>
{
    CTHotelFullScreenMaskView *maskView;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (void)webImageViewClick:(id)arg1;
- (void)show:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

