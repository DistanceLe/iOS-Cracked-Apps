//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UITableView, UIView;

@interface XYPHNotesDraftboxViewController : XYPHBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_draftboxTableView;
    NSMutableArray *_postsArray;
    UIView *_placeholderView;
}

@property(retain, nonatomic) UIView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(retain, nonatomic) NSMutableArray *postsArray; // @synthesize postsArray=_postsArray;
@property(retain, nonatomic) UITableView *draftboxTableView; // @synthesize draftboxTableView=_draftboxTableView;
- (void).cxx_destruct;
- (void)postStartNotification:(id)arg1;
- (void)showPlaceholder:(_Bool)arg1;
- (void)initPlaceholderView;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)fetchNotes;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

