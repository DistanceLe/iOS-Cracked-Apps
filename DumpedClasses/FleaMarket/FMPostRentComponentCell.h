//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "FMComponentCellProtocol.h"

@class FMPostRentComponentUnitView, NSString;

@interface FMPostRentComponentCell : UITableViewCell <FMComponentCellProtocol>
{
    FMPostRentComponentUnitView *_componentContentView;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) FMPostRentComponentUnitView *componentContentView; // @synthesize componentContentView=_componentContentView;
- (void).cxx_destruct;
- (void)bindComponent:(id)arg1;
- (void)layout;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
