//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "UIAlertViewDelegate.h"

@class NSString, UILabel;

@interface MonitorWidget : UIImageView <UIAlertViewDelegate>
{
    UIImageView *clearImage;
    UIImageView *clearImageBack;
    _Bool isLongPress;
    UILabel *_trafficLabel;
}

+ (void)removeTrafficMonitorWidget;
+ (void)showTrafficMonitorWidget;
+ (id)defaultMonitorWidget;
@property(retain, nonatomic) UILabel *trafficLabel; // @synthesize trafficLabel=_trafficLabel;
- (void)dealloc;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)longPress;
- (void)clickTrafficWidget;
- (void)updateCurrentTraffic;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

