//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AmrToWavAudioCache : NSObject
{
    NSString *_cachePath;
}

@property(retain, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
- (void).cxx_destruct;
- (id)wavFileNameForAmrPath:(id)arg1;
- (void)deleteExpiredWavFileOlderThan:(id)arg1;
- (id)wavPathForAmrPath:(id)arg1;
- (id)init;
- (id)initWithCachePath:(id)arg1;

@end

