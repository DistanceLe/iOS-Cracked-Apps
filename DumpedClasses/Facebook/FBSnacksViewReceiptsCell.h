//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CKComponentHostingView, FBMemPerson, FBSnacksBadgeDot, UILabel;

@interface FBSnacksViewReceiptsCell : UITableViewCell
{
    CKComponentHostingView *_profileImageView;
    UILabel *_nameLabel;
    FBMemPerson *_person;
    _Bool _showUnseenIndicator;
    FBSnacksBadgeDot *_unseenIndicator;
}

- (void).cxx_destruct;
- (void)_updateProfilePicture;
- (void)_setupCellWithSession:(id)arg1;
- (void)layoutSubviews;
- (void)configureWithPerson:(id)arg1 showUnseenIndicator:(_Bool)arg2 session:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

