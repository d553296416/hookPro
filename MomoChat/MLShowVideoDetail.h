//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSString;

@interface MLShowVideoDetail : NSObject
{
    _Bool _isLive;
    _Bool _isMustUse;
    int _provider;
    int _quality;
    int _expireSec;
    int _type;
    int _logcol_intsec;
    int _logup_intsec;
    int _log_event_enable;
    NSString *_urlID;
    NSString *_qualityTag;
    NSString *_url;
    NSDate *_expireTime;
    NSDictionary *_playerConfig;
}

+ (id)showVideoDetailFromDict:(id)arg1;
@property(nonatomic) _Bool isMustUse; // @synthesize isMustUse=_isMustUse;
@property(nonatomic) int log_event_enable; // @synthesize log_event_enable=_log_event_enable;
@property(nonatomic) int logup_intsec; // @synthesize logup_intsec=_logup_intsec;
@property(nonatomic) int logcol_intsec; // @synthesize logcol_intsec=_logcol_intsec;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(copy, nonatomic) NSDictionary *playerConfig; // @synthesize playerConfig=_playerConfig;
@property(retain, nonatomic) NSDate *expireTime; // @synthesize expireTime=_expireTime;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *qualityTag; // @synthesize qualityTag=_qualityTag;
@property(nonatomic) int expireSec; // @synthesize expireSec=_expireSec;
@property(nonatomic) int quality; // @synthesize quality=_quality;
@property(nonatomic) int provider; // @synthesize provider=_provider;
@property(copy, nonatomic) NSString *urlID; // @synthesize urlID=_urlID;
- (void).cxx_destruct;

@end

