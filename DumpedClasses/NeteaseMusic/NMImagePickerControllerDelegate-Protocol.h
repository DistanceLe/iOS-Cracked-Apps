//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMImagePickerController, NSString, NSURL;

@protocol NMImagePickerControllerDelegate <NSObject>
- (void)imagePickerControllerDidFinishPickingImages:(NMImagePickerController *)arg1;

@optional
- (void)imagePickerController:(NMImagePickerController *)arg1 didFinishPickingVideo:(NSURL *)arg2 identifierForVideo:(NSString *)arg3;
- (void)imagePickerControllerWillCancel:(NMImagePickerController *)arg1;
- (void)imagePickerControllerPickResultUpdated:(NMImagePickerController *)arg1;
@end

