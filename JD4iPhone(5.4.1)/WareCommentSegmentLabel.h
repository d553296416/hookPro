//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel;

@interface WareCommentSegmentLabel : UIView
{
    UILabel *titleLabel;
    UILabel *countLabel;
    _Bool selected;
    NSString *title;
    NSString *count;
}

@property(nonatomic) _Bool selected; // @synthesize selected;
@property(copy, nonatomic) NSString *count; // @synthesize count;
@property(copy, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

