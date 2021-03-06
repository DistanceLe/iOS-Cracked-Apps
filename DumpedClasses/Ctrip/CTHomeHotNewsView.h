//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UIScrollViewDelegate.h"

@class CTImageView, NSArray, NSIndexPath, NSLayoutConstraint, NSMutableArray, NSString, NSTimer, UICollectionView;

@interface CTHomeHotNewsView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate>
{
    NSLayoutConstraint *_hotnewsImageToBottomConstraint;
    NSLayoutConstraint *_hotnewsImageToTopConstraint;
    NSLayoutConstraint *_hotnewsImageToLeadingConstraint;
    NSLayoutConstraint *_hotnewsImageToTrailingConstraint;
    NSLayoutConstraint *_hoteneweImageHeightConstraints;
    UIView *_hotNewsContainerView;
    NSArray *_lineWidthConstraints;
    NSLayoutConstraint *_titleWidthConstraint;
    UICollectionView *_mainCollectionView;
    NSIndexPath *_currentIndexPath;
    CTImageView *_hotNewsImageView;
    NSMutableArray *_rawData;
    NSMutableArray *_newsData;
    NSTimer *_timer;
    long long _lastItemIndex;
}

+ (double)ViewHeight;
+ (double)TitleWidth;
@property(nonatomic) long long lastItemIndex; // @synthesize lastItemIndex=_lastItemIndex;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableArray *newsData; // @synthesize newsData=_newsData;
@property(retain, nonatomic) NSMutableArray *rawData; // @synthesize rawData=_rawData;
@property(retain, nonatomic) CTImageView *hotNewsImageView; // @synthesize hotNewsImageView=_hotNewsImageView;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(retain, nonatomic) UICollectionView *mainCollectionView; // @synthesize mainCollectionView=_mainCollectionView;
@property(retain, nonatomic) NSLayoutConstraint *titleWidthConstraint; // @synthesize titleWidthConstraint=_titleWidthConstraint;
@property(retain, nonatomic) NSArray *lineWidthConstraints; // @synthesize lineWidthConstraints=_lineWidthConstraints;
@property(retain, nonatomic) UIView *hotNewsContainerView; // @synthesize hotNewsContainerView=_hotNewsContainerView;
@property(retain, nonatomic) NSLayoutConstraint *hoteneweImageHeightConstraints; // @synthesize hoteneweImageHeightConstraints=_hoteneweImageHeightConstraints;
@property(retain, nonatomic) NSLayoutConstraint *hotnewsImageToTrailingConstraint; // @synthesize hotnewsImageToTrailingConstraint=_hotnewsImageToTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *hotnewsImageToLeadingConstraint; // @synthesize hotnewsImageToLeadingConstraint=_hotnewsImageToLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *hotnewsImageToTopConstraint; // @synthesize hotnewsImageToTopConstraint=_hotnewsImageToTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *hotnewsImageToBottomConstraint; // @synthesize hotnewsImageToBottomConstraint=_hotnewsImageToBottomConstraint;
- (void).cxx_destruct;
- (void)goToNextPage:(id)arg1;
- (void)setRadius;
- (void)scrollToIndex:(id)arg1 animated:(_Bool)arg2;
- (void)startAutoScroll;
- (void)addAutoScrollAnimation;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)initData;
- (void)initCurrentIndexPath;
- (id)init:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

