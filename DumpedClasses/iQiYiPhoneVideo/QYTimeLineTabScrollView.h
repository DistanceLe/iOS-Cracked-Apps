//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, QYUPageDataV3, UIScrollView;
@protocol QYTimeLineTabScrollViewDelegate;

@interface QYTimeLineTabScrollView : UIView <UIScrollViewDelegate>
{
    id <QYTimeLineTabScrollViewDelegate> _delegate;
    UIScrollView *_scrollView;
    QYUPageDataV3 *_pageData;
    NSMutableArray *_showData;
    NSMutableArray *_richTextArray;
    UIView *_scrollLine;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *scrollLine; // @synthesize scrollLine=_scrollLine;
@property(retain, nonatomic) NSMutableArray *richTextArray; // @synthesize richTextArray=_richTextArray;
@property(retain, nonatomic) NSMutableArray *showData; // @synthesize showData=_showData;
@property(retain, nonatomic) QYUPageDataV3 *pageData; // @synthesize pageData=_pageData;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <QYTimeLineTabScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleTabBarScrollViewContentOffsetX:(id)arg1;
- (void)handleBottomViewAnimation:(id)arg1;
- (void)textRichTap:(id)arg1;
- (void)handleLabel:(id)arg1 Data:(id)arg2;
- (id)getMetas;
- (id)handleSelectedData:(id)arg1;
- (void)handleShowDataWithIndex:(long long)arg1;
- (void)changeSelectedIndex:(long long)arg1 isManual:(_Bool)arg2;
- (void)handleViewLayout;
- (void)handleViewWithData:(id)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

