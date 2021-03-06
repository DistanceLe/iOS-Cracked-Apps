//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTChatGroupMember, CTChatLocationMessage, CTChatMessage, CTImageView, CTTourIMMessageTVCell, NSString, UITextView;

@protocol CTTourIMMessageTVCellDelegate <NSObject>

@optional
- (void)deleteActionDidClick:(CTChatMessage *)arg1 contentView:(UITextView *)arg2;
- (void)sendToOthersDidClick:(CTChatMessage *)arg1;
- (void)copyActionDidClick:(CTChatMessage *)arg1;
- (void)customMessageDidTap:(CTChatMessage *)arg1;
- (void)imageViewDidTap:(CTChatMessage *)arg1 imageView:(CTImageView *)arg2;
- (void)longPressAvatarWithGroupMember:(CTChatGroupMember *)arg1;
- (void)tipLeaderBtnDidClick:(NSString *)arg1;
- (void)avatarTappedWithUid:(NSString *)arg1;
- (void)locationMessageDidClick:(CTChatLocationMessage *)arg1;
- (void)audioMessageDidClick:(CTChatMessage *)arg1 cell:(CTTourIMMessageTVCell *)arg2;
- (void)cardMessageDidClick:(NSString *)arg1;
- (void)loadUrlWithUrl:(NSString *)arg1;
- (void)callAlertWithPhoneNumber:(NSString *)arg1;
- (void)resentMessageWith:(CTChatMessage *)arg1;
@end

