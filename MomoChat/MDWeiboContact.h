//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MDWeiboContact : NSObject
{
    unsigned long long flag;
    NSString *w_wbid;
    NSString *w_momoid;
    NSString *w_wbname;
    int w_relation;
    NSString *w_iconUrl;
    _Bool invited;
    NSString *_w_distance;
}

+ (id)dictionaryToWeiboContact:(id)arg1;
@property(retain, nonatomic) NSString *w_distance; // @synthesize w_distance=_w_distance;
@property(nonatomic, getter=hasInvited) _Bool invited; // @synthesize invited;
@property(retain, nonatomic) NSString *w_iconUrl; // @synthesize w_iconUrl;
@property(readonly, nonatomic) unsigned long long flag; // @synthesize flag;
@property(retain, nonatomic) NSString *w_wbname; // @synthesize w_wbname;
@property(retain, nonatomic) NSString *w_wbid; // @synthesize w_wbid;
@property(nonatomic) int w_relation; // @synthesize w_relation;
@property(retain, nonatomic) NSString *w_momoid; // @synthesize w_momoid;
- (void)SetDistance:(id)arg1;
- (void)SetIconUrl:(id)arg1;
- (void)SetRelation:(int)arg1;
- (void)SetWBName:(id)arg1;
- (void)SetMomoid:(id)arg1;
- (void)SetWBID:(id)arg1;
- (void)dealloc;
- (id)init;

@end

