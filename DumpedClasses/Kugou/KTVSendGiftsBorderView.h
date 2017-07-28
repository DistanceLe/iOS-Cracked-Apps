//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, UIBezierPath, UIColor;

@interface KTVSendGiftsBorderView : UIView
{
    double _boardOpenWidth;
    double _cornerRadius;
    double _boardWidth;
    UIColor *_boardColor;
    UIBezierPath *_path;
    CAShapeLayer *_maskLayer;
}

@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UIBezierPath *path; // @synthesize path=_path;
@property(retain, nonatomic) UIColor *boardColor; // @synthesize boardColor=_boardColor;
@property(nonatomic) double boardWidth; // @synthesize boardWidth=_boardWidth;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double boardOpenWidth; // @synthesize boardOpenWidth=_boardOpenWidth;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateBoardOpenWidth:(double)arg1;
- (void)changeSkin;
- (void)dealloc;
- (void)initlizeData;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
