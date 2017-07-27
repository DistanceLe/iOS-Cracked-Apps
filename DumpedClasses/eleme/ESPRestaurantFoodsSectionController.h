//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

@class ESPRestaurantAndFoodsToken, NSArray, NSDictionary, NSString;

@interface ESPRestaurantFoodsSectionController : IGListSectionController
{
    ESPRestaurantAndFoodsToken *_restaurantFoodsToken;
    NSString *_highlightText;
    unsigned long long _currentListDataType;
    NSDictionary *_sharedTrackInfo;
    NSArray *_datas;
}

@property(copy, nonatomic) NSArray *datas; // @synthesize datas=_datas;
@property(copy, nonatomic) NSDictionary *sharedTrackInfo; // @synthesize sharedTrackInfo=_sharedTrackInfo;
@property(nonatomic) unsigned long long currentListDataType; // @synthesize currentListDataType=_currentListDataType;
@property(copy, nonatomic) NSString *highlightText; // @synthesize highlightText=_highlightText;
@property(retain, nonatomic) ESPRestaurantAndFoodsToken *restaurantFoodsToken; // @synthesize restaurantFoodsToken=_restaurantFoodsToken;
- (void).cxx_destruct;
- (void)executeSaveKeyword;
- (void)trackTapRestaurant:(id)arg1 food:(id)arg2 currentListType:(unsigned long long)arg3;
- (id)datasFromResturantAndToken:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)didUpdateToObject:(id)arg1;

@end
