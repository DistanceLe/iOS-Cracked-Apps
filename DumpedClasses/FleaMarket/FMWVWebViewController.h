//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVWebViewController.h"

@interface FMWVWebViewController : WVWebViewController
{
    CDUnknownBlockType _webViewDidFinishLoadBlock;
    CDUnknownBlockType _webViewDidStartLoadBlock;
    CDUnknownBlockType _webViewDidFailLoadBlock;
    CDUnknownBlockType _webViewStartLoadBlock;
    _Bool _isNeedRefresh;
}

@property(nonatomic) _Bool isNeedRefresh; // @synthesize isNeedRefresh=_isNeedRefresh;
- (void).cxx_destruct;
- (id)getRedirectURLStringWithQuery:(id)arg1;
- (id)getValidCallbackMethodWithQuery:(id)arg1;
- (void)executeIfCallbackMethodIsValid:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)webViewLoginHandlerWithRequest:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)canOpenURL:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)setWebViewStartLoadBlock:(CDUnknownBlockType)arg1;
- (void)setWebViewDidFailLoadBlock:(CDUnknownBlockType)arg1;
- (void)setWebViewDidFinishLoadBlock:(CDUnknownBlockType)arg1;
- (void)setWebViewDidStartLoadBlock:(CDUnknownBlockType)arg1;
- (_Bool)interruptJumpToLocalPage:(long long)arg1 withParam:(id)arg2 withRequest:(id)arg3;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

@end

