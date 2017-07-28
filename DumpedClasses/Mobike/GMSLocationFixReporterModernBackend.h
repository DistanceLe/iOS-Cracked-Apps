//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"
#import "GMSLocationFixReporterBackend.h"

@class CLLocation, CLLocationManager, NSString;

@interface GMSLocationFixReporterModernBackend : NSObject <CLLocationManagerDelegate, GMSLocationFixReporterBackend>
{
    CLLocationManager *_locationManager;
    id <GMSLocationFixReporterBackendDelegate> delegate;
}

@property(nonatomic) __weak id <GMSLocationFixReporterBackendDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)stopSearchingForLocationFix;
- (void)startSearchingForLocationFix;
@property(readonly, nonatomic) CLLocation *bestUpdateSoFar;
- (id)initWithCLLocationManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
