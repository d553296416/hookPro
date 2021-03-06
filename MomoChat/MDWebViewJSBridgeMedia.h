//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MDAudioPlayerDelegate.h"

@class MDMultiListener, NSString, WebViewJavascriptBridge;

@interface MDWebViewJSBridgeMedia : NSObject <MDAudioPlayerDelegate>
{
    _Bool _audioPlaying;
    WebViewJavascriptBridge *_currentBridge;
    NSString *_audioUrlString;
    NSString *_audioFileName;
    long long _audioType;
    MDMultiListener *_listener;
}

@property(retain, nonatomic) MDMultiListener *listener; // @synthesize listener=_listener;
@property(nonatomic, getter=isAudioPlaying) _Bool audioPlaying; // @synthesize audioPlaying=_audioPlaying;
@property(nonatomic) long long audioType; // @synthesize audioType=_audioType;
@property(retain, nonatomic) NSString *audioFileName; // @synthesize audioFileName=_audioFileName;
@property(retain, nonatomic) NSString *audioUrlString; // @synthesize audioUrlString=_audioUrlString;
@property(retain, nonatomic) WebViewJavascriptBridge *currentBridge; // @synthesize currentBridge=_currentBridge;
- (void).cxx_destruct;
- (void)audioPlayer:(id)arg1 didOccurError:(id)arg2;
- (void)audioPlayer:(id)arg1 didFinishPlaying:(int)arg2;
- (void)dealloc;
- (void)handleStartVideoWithDictionary:(id)arg1;
- (void)handleStopAudioWithDictionary:(id)arg1;
- (id)responseDictionary:(long long)arg1 type:(long long)arg2 track:(id)arg3;
- (void)stopPlayAudio;
- (void)playAudio:(id)arg1;
- (void)audioFileManager:(id)arg1 downloadFailedWithFileType:(int)arg2;
- (void)audioFileManager:(id)arg1 downloadFinishWithFileType:(int)arg2;
- (_Bool)playWithAudioName:(id)arg1 url:(id)arg2;
- (void)handleStartAudioWithDictionary:(id)arg1;
- (void)handlePreviewImagesWithDictionary:(id)arg1;
- (id)initWithWebViewJavascriptBridge:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

