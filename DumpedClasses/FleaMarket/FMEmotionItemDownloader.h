//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMMessageEmotionFaceCategoryDO;

@interface FMEmotionItemDownloader : NSObject
{
    id <FMNetRequestProtocol> _currentRequest;
    FMMessageEmotionFaceCategoryDO *_categoryDO;
    double _progress;
    CDUnknownBlockType _progressChangeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType progressChangeBlock; // @synthesize progressChangeBlock=_progressChangeBlock;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) FMMessageEmotionFaceCategoryDO *categoryDO; // @synthesize categoryDO=_categoryDO;
@property(retain, nonatomic) id <FMNetRequestProtocol> currentRequest; // @synthesize currentRequest=_currentRequest;
- (void).cxx_destruct;
- (void)downLoadingForFaces;
- (void)startDownload;
- (id)initWithCategoryDO:(id)arg1;

@end
