//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class DCNoteInfoModel<Optional>, NSString<Optional>;

@interface DCOrderLiftAdultChildBabyNumberItemModel : JSONModel
{
    NSString<Optional> *_type;
    DCNoteInfoModel<Optional> *_title;
    DCNoteInfoModel<Optional> *_desc;
    DCNoteInfoModel<Optional> *_alert;
    DCNoteInfoModel<Optional> *_pregnant;
    NSString<Optional> *_default_num;
    NSString<Optional> *_select_num;
}

@property(copy, nonatomic) NSString<Optional> *select_num; // @synthesize select_num=_select_num;
@property(copy, nonatomic) NSString<Optional> *default_num; // @synthesize default_num=_default_num;
@property(copy, nonatomic) DCNoteInfoModel<Optional> *pregnant; // @synthesize pregnant=_pregnant;
@property(copy, nonatomic) DCNoteInfoModel<Optional> *alert; // @synthesize alert=_alert;
@property(copy, nonatomic) DCNoteInfoModel<Optional> *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) DCNoteInfoModel<Optional> *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString<Optional> *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

