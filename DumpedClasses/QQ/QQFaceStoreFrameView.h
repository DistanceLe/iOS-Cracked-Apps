//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQFaceFrameCollectionView.h"

@interface QQFaceStoreFrameView : QQFaceFrameCollectionView
{
}

- (void)openFaceDetailView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (id)getFooterViewBycollectionView:(id)arg1 atIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)LayoutInit;
- (_Bool)isSupportRightDragToGoBack;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)addButtonWithTarget:(id)arg1 selector:(SEL)arg2 backgroundImageNormal:(id)arg3 backgroundImageHightlighted:(id)arg4;
- (void)addStoreFace:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

