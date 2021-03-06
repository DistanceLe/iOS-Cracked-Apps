//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MASConstraint, UITableView, UIView;

@interface NVMFancyTableHeaderController : NSObject
{
    UITableView *_tableView;
    UIView *_tableHeaderViewInnerView;
    double _innerViewInitialHeight;
    MASConstraint *_innerViewHeightConstraint;
    struct UIEdgeInsets _tableViewInitialInset;
}

@property(retain, nonatomic) MASConstraint *innerViewHeightConstraint; // @synthesize innerViewHeightConstraint=_innerViewHeightConstraint;
@property(nonatomic) double innerViewInitialHeight; // @synthesize innerViewInitialHeight=_innerViewInitialHeight;
@property(nonatomic) __weak UIView *tableHeaderViewInnerView; // @synthesize tableHeaderViewInnerView=_tableHeaderViewInnerView;
@property(nonatomic) struct UIEdgeInsets tableViewInitialInset; // @synthesize tableViewInitialInset=_tableViewInitialInset;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)tableViewDidScroll:(double)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithTableView:(id)arg1 tableHeaderViewInnerView:(id)arg2 defaultInnerViewHeight:(double)arg3;

@end

