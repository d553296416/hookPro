//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageViewModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WCPayBaseMessageViewModel : CommonMessageViewModel
{
    NSString *_iconUrl;
}

@property(readonly, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *iconName;
@property(readonly, nonatomic) double iconSize;
@property(readonly, nonatomic) NSString *descText;
@property(readonly, nonatomic) NSString *titleText;
- (id)sourceIcon;
- (id)sourceTitle;
- (_Bool)isShowSourceView;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;

@end

