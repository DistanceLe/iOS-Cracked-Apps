//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PSDViewControllerProtocol.h"

@class NSString, PSDScene, PSDSceneParam, PSDView;

@interface PSDViewController : UIViewController <PSDViewControllerProtocol>
{
    id <PSDViewControllerDelegate> _delegate;
    PSDSceneParam *_sceneParam;
    PSDScene *_scene;
    PSDView *_psdView;
}

@property(nonatomic) __weak PSDView *psdView; // @synthesize psdView=_psdView;
@property(nonatomic) __weak PSDScene *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) PSDSceneParam *sceneParam; // @synthesize sceneParam=_sceneParam;
@property(nonatomic) __weak id <PSDViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)callJsApi:(id)arg1 data:(id)arg2 callbackImmediatelyIfJSBridgeNotReady:(_Bool)arg3 responseCallback:(CDUnknownBlockType)arg4;
- (void)callJsApi:(id)arg1 data:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (id)viewController;
- (id)psdSession;
- (id)psdScene;
- (id)psdContentView;
- (id)startupParamsJs;
- (id)dynamicJsUrls;
- (void)initUI:(id)arg1 delegate:(id)arg2;
- (void)associateWeakScene:(id)arg1 sceneParam:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

