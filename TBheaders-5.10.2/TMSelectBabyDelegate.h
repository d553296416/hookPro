//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SelectBabyModelDelegate-Protocol.h"

@class NSString, UIViewController;

@interface TMSelectBabyDelegate : NSObject <SelectBabyModelDelegate>
{
    UIViewController *_vc;	// 8 = 0x8
}

@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
- (void).cxx_destruct;
- (void)onSelectedBabyModel:(id)arg1;
- (id)initWithVC:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

