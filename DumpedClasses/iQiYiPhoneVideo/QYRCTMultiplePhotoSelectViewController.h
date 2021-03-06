//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "QYRCTAssetListViewDelegate-Protocol.h"

@class NSString, QYRCTAssetListViewController, UIColor, UINavigationController;
@protocol QYRCTMultiplePhotoSelectViewDelegate;

@interface QYRCTMultiplePhotoSelectViewController : UIViewController <QYRCTAssetListViewDelegate>
{
    _Bool _showPhotoViewerTitle;
    _Bool _originalNavigationBarHidden;
    id <QYRCTMultiplePhotoSelectViewDelegate> _delegate;
    unsigned long long _maxSelection;
    unsigned long long _numberOfSelected;
    UIColor *_themeColor;
    long long _statusBarStyle;
    NSString *_backImage;
    NSString *_titleIndicatorImage;
    UIColor *_titleColor;
    UIColor *_badgeColor;
    UINavigationController *_assetNavigationController;
    QYRCTAssetListViewController *_assetListView;
    long long _originalStatusStyle;
}

@property(nonatomic) long long originalStatusStyle; // @synthesize originalStatusStyle=_originalStatusStyle;
@property(nonatomic) _Bool originalNavigationBarHidden; // @synthesize originalNavigationBarHidden=_originalNavigationBarHidden;
@property(retain, nonatomic) QYRCTAssetListViewController *assetListView; // @synthesize assetListView=_assetListView;
@property(retain, nonatomic) UINavigationController *assetNavigationController; // @synthesize assetNavigationController=_assetNavigationController;
@property(retain, nonatomic) UIColor *badgeColor; // @synthesize badgeColor=_badgeColor;
@property(nonatomic) _Bool showPhotoViewerTitle; // @synthesize showPhotoViewerTitle=_showPhotoViewerTitle;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *titleIndicatorImage; // @synthesize titleIndicatorImage=_titleIndicatorImage;
@property(retain, nonatomic) NSString *backImage; // @synthesize backImage=_backImage;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(retain, nonatomic) UIColor *themeColor; // @synthesize themeColor=_themeColor;
@property(nonatomic) unsigned long long numberOfSelected; // @synthesize numberOfSelected=_numberOfSelected;
@property(nonatomic) unsigned long long maxSelection; // @synthesize maxSelection=_maxSelection;
@property(nonatomic) __weak id <QYRCTMultiplePhotoSelectViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)setupDefaultPreference;
- (void)setupAssetListView;
- (void)btnClicked:(id)arg1;
- (void)assetListViewController:(id)arg1 endWithPhotos:(id)arg2 isFullSizeEnabled:(_Bool)arg3;
- (void)viewWillDisappear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (id)childViewControllerForStatusBarHidden;
- (void)viewDidLoad;
- (id)initWithMaxSelection:(unsigned long long)arg1 delegate:(id)arg2;
- (id)initWithMaxSelection:(unsigned long long)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

