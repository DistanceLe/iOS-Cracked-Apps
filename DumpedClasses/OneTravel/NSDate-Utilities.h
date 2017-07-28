//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@interface NSDate (Utilities)
+ (id)dateYesterday;
+ (id)dateTomorrow;
+ (id)dateWithDaysBeforeNow:(long long)arg1;
+ (id)dateWithDaysFromNow:(long long)arg1;
+ (id)currentCalendar;
@property(readonly) long long year;
@property(readonly) long long weekday;
@property(readonly) long long week;
@property(readonly) long long month;
@property(readonly) long long day;
@property(readonly) long long seconds;
@property(readonly) long long minute;
@property(readonly) long long hour;
- (long long)daysAfterDate:(id)arg1;
- (long long)hoursBeforeDate:(id)arg1;
- (long long)minutesAfterDate:(id)arg1;
- (id)dateAtEndOfDay;
- (id)dateAtStartOfDay;
- (id)dateBySubtractingMinutes:(long long)arg1;
- (id)dateByAddingMinutes:(long long)arg1;
- (id)dateByAddingHours:(long long)arg1;
- (id)dateBySubtractingDays:(long long)arg1;
- (id)dateByAddingDays:(long long)arg1;
- (_Bool)isInPast;
- (_Bool)isLaterThanDate:(id)arg1;
- (_Bool)isEarlierThanDate:(id)arg1;
- (_Bool)isYesterday;
- (_Bool)isTomorrow;
- (_Bool)isToday;
- (_Bool)isEqualToDateIgnoringTime:(id)arg1;
- (id)stringWithFormat:(id)arg1;
@end
