//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APTableViewCell.h"

@class NSString, UIImageView, UILabel;

@interface CCRListViewDoubleLineCell : APTableViewCell
{
    NSString *_iconUrl;
    _Bool _limitStartInfoWidth;
    UILabel *_cellTitle;
    UILabel *_cellStartInfo;
    UILabel *_cellEndInfo;
    UIImageView *_cellLogo;
    UIImageView *_cellExtendImg;
}

+ (float)cellHeight;
@property(nonatomic) _Bool limitStartInfoWidth; // @synthesize limitStartInfoWidth=_limitStartInfoWidth;
@property(retain, nonatomic) UIImageView *cellExtendImg; // @synthesize cellExtendImg=_cellExtendImg;
@property(retain, nonatomic) UIImageView *cellLogo; // @synthesize cellLogo=_cellLogo;
@property(retain, nonatomic) UILabel *cellEndInfo; // @synthesize cellEndInfo=_cellEndInfo;
@property(retain, nonatomic) UILabel *cellStartInfo; // @synthesize cellStartInfo=_cellStartInfo;
@property(retain, nonatomic) UILabel *cellTitle; // @synthesize cellTitle=_cellTitle;
- (void).cxx_destruct;
- (void)reset;
- (void)setEndInfoColor:(id)arg1;
- (void)setEndInfo:(id)arg1;
- (void)setStartInfoColor:(id)arg1;
- (void)setStartInfo:(id)arg1;
- (void)setLogoImgWithUrl:(id)arg1 withDefault:(id)arg2;
- (void)setLogoImg:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

