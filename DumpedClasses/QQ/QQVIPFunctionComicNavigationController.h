//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQNavigationController.h"

#import "UIGestureRecognizerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSString, QQVIPFunctionComicPopNavigationTransition, QQVIPFunctionComicPushNavigationTransition, UIPercentDrivenInteractiveTransition, UIScreenEdgePanGestureRecognizer;

@interface QQVIPFunctionComicNavigationController : QQNavigationController <UINavigationControllerDelegate, UIGestureRecognizerDelegate>
{
    UIPercentDrivenInteractiveTransition *_customInteractiveTransition;
    QQVIPFunctionComicPopNavigationTransition *_customPopNavigationTransition;
    QQVIPFunctionComicPushNavigationTransition *_customPushNavigationTransition;
    UIScreenEdgePanGestureRecognizer *_customEdgePanGesture;
    _Bool _isInteractive;
    id <QQVIPFunctionComicNavigationControllerDelegate> _comicNavigationDelegate;
}

@property(nonatomic) __weak id <QQVIPFunctionComicNavigationControllerDelegate> comicNavigationDelegate; // @synthesize comicNavigationDelegate=_comicNavigationDelegate;
- (void).cxx_destruct;
- (id)tabBarController;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)handleScreenEdgePanGesture:(id)arg1;
- (void)willPopViewController:(id)arg1;
- (void)willPopViewControllers:(id)arg1;
- (void)willPopToRootViewController:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

