//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APSearchDataProtocol.h"

@class APGRecentSearchDataModel, NSDictionary, NSString;

@protocol APSearchBaseDataProtocol <APSearchDataProtocol>

@optional
@property(retain, nonatomic) APGRecentSearchDataModel *recentData;
@property(retain, nonatomic) NSString *primaryKey;
@property(copy, nonatomic) NSString *bizIdS;
@property(retain, nonatomic) NSString *subTitleS;
@property(retain, nonatomic) NSDictionary *extInfoS;
@property(retain, nonatomic) NSString *actionUrlS;
@property(retain, nonatomic) NSString *actionTypeS;
@property(retain, nonatomic) NSString *iconPathS;
@property(retain, nonatomic) NSString *titleS;
@end
