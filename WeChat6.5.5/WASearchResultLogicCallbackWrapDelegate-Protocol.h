//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol WASearchResultLogicCallbackWrapDelegate <NSObject>
- (void)callbackWrap_onSearchInputChanged:(NSDictionary *)arg1;
- (void)callbackWrap_onReportWeAppSearchRealTime:(NSDictionary *)arg1;
- (void)callbackWrap_onOpenWeAppPage:(NSDictionary *)arg1;
- (void)callbackWrap_onPreSearch:(NSString *)arg1;
@end

