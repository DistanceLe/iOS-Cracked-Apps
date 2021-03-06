//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSDate, NSDateFormatter, NSString, NSTimer;
@protocol MZTimerLabelDelegate;

@interface MZTimerLabel : UILabel
{
    CDUnknownBlockType endedBlock;
    double timeUserValue;
    NSDate *startCountDate;
    NSDate *pausedTime;
    NSDate *date1970;
    NSDate *timeToCountOff;
    NSDateFormatter *dateFormatter;
    _Bool _counting;
    _Bool _resetTimerAfterFinish;
    int _timerType;
    id <MZTimerLabelDelegate> _delegate;
    NSString *_timeFormat;
    UILabel *_timeLabel;
    NSTimer *_timer;
}

@property(retain) NSTimer *timer; // @synthesize timer=_timer;
@property _Bool resetTimerAfterFinish; // @synthesize resetTimerAfterFinish=_resetTimerAfterFinish;
@property(readonly) _Bool counting; // @synthesize counting=_counting;
@property int timerType; // @synthesize timerType=_timerType;
@property(retain) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) NSString *timeFormat; // @synthesize timeFormat=_timeFormat;
@property(retain) id <MZTimerLabelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateLabel:(id)arg1;
- (void)setup;
- (void)reset;
- (void)pause;
- (void)startWithEndingBlock:(CDUnknownBlockType)arg1;
- (void)start;
- (void)setCountDownTime:(double)arg1;
- (void)setStopWatchTime:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1;
- (id)initWithLabel:(id)arg1 andTimerType:(int)arg2;
- (id)initWithTimerType:(int)arg1;
- (id)init;

@end

