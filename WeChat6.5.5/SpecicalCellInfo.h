//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class CContact;

__attribute__((visibility("hidden")))
@interface SpecicalCellInfo : MMObject
{
    unsigned long long m_cellType;
    CContact *m_Contact;
}

@property(retain, nonatomic) CContact *m_Contact; // @synthesize m_Contact;
@property(nonatomic) unsigned long long m_cellType; // @synthesize m_cellType;
- (void).cxx_destruct;

@end

