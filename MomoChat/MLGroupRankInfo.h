//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MLGroupRankInfo : NSObject
{
    int _type;
    int _timeOutSec;
    NSString *_bGroupId;
    NSString *_bGroupName;
    NSString *_bGroupPhoto;
    NSString *_groupId;
    NSString *_groupName;
    NSString *_groupPhoto;
    NSString *_title;
    NSString *_acceptText;
    NSString *_rejectText;
}

+ (id)MLGroupRankInfoWithDict:(id)arg1;
@property(copy, nonatomic) NSString *rejectText; // @synthesize rejectText=_rejectText;
@property(copy, nonatomic) NSString *acceptText; // @synthesize acceptText=_acceptText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *groupPhoto; // @synthesize groupPhoto=_groupPhoto;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSString *bGroupPhoto; // @synthesize bGroupPhoto=_bGroupPhoto;
@property(copy, nonatomic) NSString *bGroupName; // @synthesize bGroupName=_bGroupName;
@property(copy, nonatomic) NSString *bGroupId; // @synthesize bGroupId=_bGroupId;
@property(nonatomic) int timeOutSec; // @synthesize timeOutSec=_timeOutSec;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

