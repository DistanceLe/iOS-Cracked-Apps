//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMultimediaEditSaveComponent.h"

@class NSTimer, QQRichTinyVideoClips;

@interface TBMultimediaEditVideoSaveComponent : TBMultimediaEditSaveComponent
{
    _Bool _isLogout;
    QQRichTinyVideoClips *_videoInfo;
    NSTimer *_saveTimer;
    double _currentProgress;
}

@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property(retain, nonatomic) NSTimer *saveTimer; // @synthesize saveTimer=_saveTimer;
@property(nonatomic) _Bool isLogout; // @synthesize isLogout=_isLogout;
@property(retain, nonatomic) QQRichTinyVideoClips *videoInfo; // @synthesize videoInfo=_videoInfo;
- (void).cxx_destruct;
- (void)onSaveCallback:(id)arg1;
- (id)genTmpPath;
- (void)updateProgressForAblum:(double)arg1;
- (void)autoUpdateProgress;
- (_Bool)isBelowIphone5S;
- (void)saveVideoToAblum:(id)arg1;
- (id)getDoodleAndWaterImage:(id)arg1 withOrientation:(int)arg2;
- (void)makeVideoMixMusic:(id)arg1 withType:(int)arg2 musicModel:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (_Bool)addOverlayToVideoAsynchronously:(id)arg1 overlay:(id)arg2 outputPath:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)compressVideo:(id)arg1 editInfo:(id)arg2;
- (void)didFinishProcessWithVideoPath:(id)arg1 editInfo:(id)arg2;
- (void)addOverlayToVideo:(id)arg1 videoInputPath:(id)arg2;
- (void)processVideo:(id)arg1 videoPath:(id)arg2;
- (void)handleEditVideo:(id)arg1;
- (void)processNew:(id)arg1;
- (void)saveImpl:(id)arg1;
- (void)buttonClicked;
- (void)start;
- (void)dealloc;

@end

