//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootView.h"

@class CTHotelPassengerInsView, NSString, UIButton, UILabel;

@interface CTHotelSelectHolderView : CTRootView
{
    UIButton *delBtn;
    UIButton *editBtn;
    UILabel *line;
    CTHotelPassengerInsView *personInfo;
    UILabel *labArrow;
    UILabel *labInfo;
    UIButton *editPassagerBtn;
    _Bool _isTicket;
    _Bool _isShowDelete;
    id <CTHotelHolderEditDelegate> _deleDelegate;
    NSString *_hintText;
}

@property(retain, nonatomic) NSString *hintText; // @synthesize hintText=_hintText;
@property(nonatomic) _Bool isShowDelete; // @synthesize isShowDelete=_isShowDelete;
@property(nonatomic) __weak id <CTHotelHolderEditDelegate> deleDelegate; // @synthesize deleDelegate=_deleDelegate;
@property(nonatomic) _Bool isTicket; // @synthesize isTicket=_isTicket;
- (void).cxx_destruct;
- (void)hideDeleteBtn;
- (void)showDeleteBtn;
- (void)deleteAction;
- (void)editAction;
- (void)enterHolderVeiw;
- (_Bool)reset;
- (_Bool)isEditState;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)resetAllOtherCell:(_Bool)arg1;
- (void)setEmptyCell;
- (void)setData:(id)arg1 fullInfo:(_Bool)arg2 supportCards:(id)arg3;
- (void)initView:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 isLastOne:(_Bool)arg2 hintText:(id)arg3;

@end

