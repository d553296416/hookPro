//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ARUPLogProtocol-Protocol.h"
#import "ARUPStatisticsProtocol-Protocol.h"

@class AppMonitorTable, NSString;

@interface ARUPConfigDefaultImplement : NSObject <ARUPStatisticsProtocol, ARUPLogProtocol>
{
    AppMonitorTable *_requestUpload;	// 8 = 0x8
    AppMonitorTable *_fileUpload;	// 16 = 0x10
}

+ (void)openARUPLog:(id)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) AppMonitorTable *fileUpload; // @synthesize fileUpload=_fileUpload;
@property(retain, nonatomic) AppMonitorTable *requestUpload; // @synthesize requestUpload=_requestUpload;
- (void).cxx_destruct;
- (void)lowAnalysisWithBizid:(id)arg1 size:(id)arg2;
- (void)report:(id)arg1 biz:(id)arg2 ip:(id)arg3 port:(int)arg4 ret:(int)arg5 size:(float)arg6 costTime:(float)arg7 fileID:(id)arg8 token:(id)arg9 errorCode:(int)arg10 subcode:(int)arg11 errorMsg:(id)arg12 retryTimes:(int)arg13 connectiontime:(float)arg14 fileMD5Time:(float)arg15 encrypted:(id)arg16 exitDict:(id)arg17;
- (void)registerSessionAppmonitorTable:(id)arg1;
- (void)log:(long long)arg1 extDict:(id)arg2 fullmsg:(id)arg3;
- (void)statistics:(id)arg1 biz:(id)arg2 ip:(id)arg3 port:(int)arg4 ret:(int)arg5 size:(float)arg6 costTime:(float)arg7 fileID:(id)arg8 token:(id)arg9 errorCode:(int)arg10 subcode:(int)arg11 errorMsg:(id)arg12 retryTimes:(int)arg13 connectiontime:(float)arg14 fileMD5Time:(float)arg15 encrypted:(id)arg16 exitDict:(id)arg17;
- (void)log:(long long)arg1 file:(const char *)arg2 func:(const char *)arg3 line:(int)arg4 module:(id)arg5 extDict:(id)arg6 msg:(id)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

