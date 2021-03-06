//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface MDUserIconsView : UIView
{
    long long _iconShowType;
    NSArray *_iconImages;
}

+ (id)userIconsView:(id)arg1 type:(long long)arg2;
@property(retain, nonatomic) NSArray *iconImages; // @synthesize iconImages=_iconImages;
@property(nonatomic) long long iconShowType; // @synthesize iconShowType=_iconShowType;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)resetIconsViewSize;
- (void)updateUserIconsViewWithUserProfile:(id)arg1 type:(long long)arg2;
- (void)updateUserIconsViewWithUserProfile:(id)arg1;
- (void)updateUserIconsViewWithImages:(id)arg1;

@end

