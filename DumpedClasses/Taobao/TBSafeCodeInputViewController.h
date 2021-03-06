//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UINavigationBarDelegate.h"
#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class NSString, UILabel, UITextField, UITextView;

@interface TBSafeCodeInputViewController : UIViewController <UIActionSheetDelegate, UIAlertViewDelegate, UITextFieldDelegate, UINavigationBarDelegate, UITextViewDelegate>
{
    int _timeFlag;
    int _actionTag;
    CDUnknownBlockType _verifyblock;
    CDUnknownBlockType _failedblock;
    UILabel *_infoLabel;
    UITextView *_textviewCopy;
    UITextField *_textField;
    UITextField *_textField2;
    UITextField *_textField3;
    UITextField *_textField4;
    UITextField *_textfieldName;
    UITextField *_textfieldPassword;
}

+ (_Bool)tbNeedToolbar;
@property(retain, nonatomic) UITextField *textfieldPassword; // @synthesize textfieldPassword=_textfieldPassword;
@property(retain, nonatomic) UITextField *textfieldName; // @synthesize textfieldName=_textfieldName;
@property(retain, nonatomic) UITextField *textField4; // @synthesize textField4=_textField4;
@property(retain, nonatomic) UITextField *textField3; // @synthesize textField3=_textField3;
@property(retain, nonatomic) UITextField *textField2; // @synthesize textField2=_textField2;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UITextView *textviewCopy; // @synthesize textviewCopy=_textviewCopy;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(nonatomic) int actionTag; // @synthesize actionTag=_actionTag;
@property(copy, nonatomic) CDUnknownBlockType failedblock; // @synthesize failedblock=_failedblock;
@property(copy, nonatomic) CDUnknownBlockType verifyblock; // @synthesize verifyblock=_verifyblock;
- (void)backItemClicked:(id)arg1;
- (_Bool)isModalVC;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)textViewDidChange:(id)arg1;
- (void)forgetSafeCode;
- (void)doAuthFailed:(id)arg1;
- (void)doAuthSuccess:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)createTextFieldwithFrame:(struct CGRect)arg1;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

