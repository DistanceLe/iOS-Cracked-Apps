//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRTopBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSArray, NSString, SElderChooseAddressSearchBar, SElderChooseAddressViewControllerLoadingView, UIButton, UILabel, UITableView;

@interface SElderChooseAddressViewController : TRTopBaseViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>
{
    long long _type;
    UITableView *_tableView;
    SElderChooseAddressSearchBar *_searchBar;
    UILabel *_errorLabel;
    SElderChooseAddressViewControllerLoadingView *_loadingView;
    NSArray *_cellArray;
    NSArray *_defaultCellArray;
    NSString *_cityId;
    NSString *_cityName;
    CDUnknownBlockType _selectBlock;
    UIButton *_voiceInputButton;
}

@property(retain, nonatomic) UIButton *voiceInputButton; // @synthesize voiceInputButton=_voiceInputButton;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(copy, nonatomic) NSString *cityId; // @synthesize cityId=_cityId;
@property(copy, nonatomic) NSArray *defaultCellArray; // @synthesize defaultCellArray=_defaultCellArray;
@property(copy, nonatomic) NSArray *cellArray; // @synthesize cellArray=_cellArray;
@property(retain, nonatomic) SElderChooseAddressViewControllerLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) SElderChooseAddressSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)voiceInputButtonClick:(id)arg1;
- (void)initVoiceInputButton;
- (_Bool)shouldShowVoiceInputButton;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)switchShowState:(long long)arg1;
- (void)showQueryAddressWithText:(id)arg1;
- (void)updateDefaultList;
- (void)initLoadingView;
- (void)initTableview;
- (void)initSearchBarView;
- (void)initNavigationBar;
- (void)initSubViews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (id)initWithType:(long long)arg1 cityId:(id)arg2 cityName:(id)arg3 selectBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
