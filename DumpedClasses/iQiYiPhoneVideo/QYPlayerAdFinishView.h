//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, QYUBtnControl, QYUImageControl, QYUTextSimple;

@interface QYPlayerAdFinishView : UIView
{
    QYUBtnControl *leftBtn;
    QYUBtnControl *rightBtn;
    QYUImageControl *leftImageControl;
    QYUTextSimple *leftTextMeta;
    QYUImageControl *centerLine;
    UIView *leftSubContentView;
    UIView *contentView;
    NSDictionary *_ctrlData;
}

@property(retain, nonatomic) NSDictionary *ctrlData; // @synthesize ctrlData=_ctrlData;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

