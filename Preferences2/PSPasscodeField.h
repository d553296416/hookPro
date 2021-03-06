//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Preferences/UIKeyInput-Protocol.h>

@class NSMutableArray, NSMutableString, NSString;
@protocol PSPasscodeFieldDelegate;

@interface PSPasscodeField : UIView <UIKeyInput>
{
    NSMutableArray *_dashViews;
    NSMutableArray *_dotViews;
    NSMutableArray *_digitViews;
    NSMutableString *_stringValue;
    BOOL _securePasscodeEntry;
    id <PSPasscodeFieldDelegate> _delegate;
    unsigned int _numberOfEntryFields;
}

- (id)initWithNumberOfEntryFields:(unsigned int)arg1;
@property(nonatomic) BOOL securePasscodeEntry; // @synthesize securePasscodeEntry=_securePasscodeEntry;
@property(readonly, nonatomic) unsigned int numberOfEntryFields; // @synthesize numberOfEntryFields=_numberOfEntryFields;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
@property(nonatomic) int keyboardType;
@property(nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (BOOL)hasText;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
@property(nonatomic) id <PSPasscodeFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)dealloc;

// Remaining properties
@property(nonatomic) int autocapitalizationType;
@property(nonatomic) int autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL enablesReturnKeyAutomatically;
@property(readonly) unsigned int hash;
@property(nonatomic) int keyboardAppearance;
@property(nonatomic) int returnKeyType;
@property(nonatomic) int spellCheckingType;
@property(readonly) Class superclass;

@end

