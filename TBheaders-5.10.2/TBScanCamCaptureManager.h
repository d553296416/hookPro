//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, CALayer, NSString;
@protocol OS_dispatch_queue, TBScanCamCaptureManagerDelegate;

@interface TBScanCamCaptureManager : NSObject
{
    _Bool _bFrontCamera;	// 8 = 0x8
    AVCaptureSession *_session;	// 16 = 0x10
    long long _orientation;	// 24 = 0x18
    long long _mirroringMode;	// 32 = 0x20
    AVCaptureDeviceInput *_videoInput;	// 40 = 0x28
    id <TBScanCamCaptureManagerDelegate> _delegate;	// 48 = 0x30
    CALayer *_cameraLayer;	// 56 = 0x38
    AVCaptureStillImageOutput *_stillImageOutput;	// 64 = 0x40
    AVCaptureVideoDataOutput *_videoDataOutput;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_capQueue;	// 80 = 0x50
}

+ (id)connectionWithMediaType:(id)arg1 fromConnections:(id)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *capQueue; // @synthesize capQueue=_capQueue;
@property(retain, nonatomic) AVCaptureVideoDataOutput *videoDataOutput; // @synthesize videoDataOutput=_videoDataOutput;
@property(retain, nonatomic) AVCaptureStillImageOutput *stillImageOutput; // @synthesize stillImageOutput=_stillImageOutput;
@property(nonatomic) _Bool bFrontCamera; // @synthesize bFrontCamera=_bFrontCamera;
@property(retain, nonatomic) CALayer *cameraLayer; // @synthesize cameraLayer=_cameraLayer;
@property(nonatomic) __weak id <TBScanCamCaptureManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVCaptureDeviceInput *videoInput; // @synthesize videoInput=_videoInput;
@property(nonatomic) long long mirroringMode; // @synthesize mirroringMode=_mirroringMode;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)forceFocus;
- (id)audioChannel;
- (_Bool)supportsMirroring;
- (void)setConnectionWithMediaType:(id)arg1 enabled:(_Bool)arg2;
@property(retain, nonatomic) NSString *sessionPreset;
- (void)exposureAtPoint:(struct CGPoint)arg1;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (_Bool)adjustingFocus;
@property(nonatomic) long long whiteBalanceMode;
- (_Bool)hasWhiteBalance;
@property(nonatomic) long long exposureMode;
- (_Bool)hasExposure;
@property(nonatomic) long long focusMode;
- (_Bool)hasFocus;
@property(nonatomic) long long torchMode;
- (_Bool)hasTorch;
@property(nonatomic) long long flashMode;
- (_Bool)hasFlash;
- (unsigned long long)cameraCount;
- (_Bool)cameraToggle;
- (void)captureStillImage:(CDUnknownBlockType)arg1;
- (struct CGPoint)convertToPointOfInterestFromViewCoordinates:(struct CGPoint)arg1;
- (void)focusWithMode:(long long)arg1 exposeWithMode:(long long)arg2 atDevicePoint:(struct CGPoint)arg3 monitorSubjectAreaChange:(_Bool)arg4;
- (void)focusAtPointInViewCoordinates:(struct CGPoint)arg1;
- (void)captureFullResolutionPhoto:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)setupSessionWithPreset:(id)arg1;
- (void)setupCameraLayer;
- (void)dealloc;
- (void)releaseCamera;
- (void)stopRunning;
- (void)startRunning;
- (_Bool)isRunning;
- (id)init;

@end

