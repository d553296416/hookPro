//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableDictionary;

@interface IFlySessionPerfLogger : NSObject
{
    NSDate *_dateAppStart;
    NSMutableDictionary *_logs;
}

+ (void)purgeSharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceSynch;
+ (id)sharedInstanceNoSynch;
@property(retain, nonatomic) NSMutableDictionary *logs; // @synthesize logs=_logs;
@property(retain, nonatomic) NSDate *dateAppStart; // @synthesize dateAppStart=_dateAppStart;
- (id)timeIntervalSinceAppStart;
- (id)toJsonString;
- (void)clearAllLogs;
- (void)addInfoLog:(id)arg1 forKey:(id)arg2;
- (void)addNumberLog:(id)arg1 forKey:(id)arg2;
- (void)addLogForKey:(id)arg1;
- (void)addLog:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)autoreleaseDoSomething;
- (id)autoreleaseDoNothing;
- (id)autorelease;
- (void)releaseDoSomething;
- (void)releaseDoNothing;
- (oneway void)release;
- (unsigned long long)retainCountDoSomething;
- (unsigned long long)retainCountDoNothing;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

