//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface TMMuiCutLineView : UIView
{
    _Bool _isDashLine;
    UIColor *_lineColor;
    double _alpha;
    double _lineWidth;
}

@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) _Bool isDashLine; // @synthesize isDashLine=_isDashLine;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 lineColor:(id)arg2 alpha:(double)arg3 isDashLine:(_Bool)arg4 lineWidth:(double)arg5;

@end
