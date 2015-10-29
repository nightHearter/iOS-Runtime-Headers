/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPScreenRecorder : NSObject <RPPreviewViewControllerDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate> {
    BOOL _available;
    <RPScreenRecorderDelegate> *_delegate;
    BOOL _microphoneEnabled;
    NSString *_previousAudioCategory;
    unsigned int _previousAudioSessionOptions;
    BOOL _recording;
}

@property (getter=isAvailable, nonatomic) BOOL available;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RPScreenRecorderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isMicrophoneEnabled, nonatomic) BOOL microphoneEnabled;
@property (nonatomic, retain) NSString *previousAudioCategory;
@property (nonatomic) unsigned int previousAudioSessionOptions;
@property (getter=isRecording, nonatomic) BOOL recording;
@property (readonly) Class superclass;

+ (id)sharedRecorder;

- (void).cxx_destruct;
- (id)applicationWindow;
- (void)clientDidBecomeActive;
- (void)clientWillResignActive;
- (void)configureAudioSession;
- (unsigned int)currentWindowLayerContextID;
- (struct CGSize { float x1; float x2; })currentWindowSize;
- (void)dealloc;
- (id)delegate;
- (void)discardRecordingWithHandler:(id /* block */)arg1;
- (BOOL)isAvailable;
- (BOOL)isMicrophoneEnabled;
- (BOOL)isRecording;
- (BOOL)isScreenRecordingSupportedOnDevice;
- (void)notifyDelegateOfRecorderAvailability;
- (id)previousAudioCategory;
- (unsigned int)previousAudioSessionOptions;
- (void)restoreAudioSession;
- (void)setAvailable:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMicrophoneEnabled:(BOOL)arg1;
- (void)setPreviousAudioCategory:(id)arg1;
- (void)setPreviousAudioSessionOptions:(unsigned int)arg1;
- (void)setRecording:(BOOL)arg1;
- (void)setWindowRotationLocked:(BOOL)arg1;
- (void)startRecordingWithMicrophoneEnabled:(BOOL)arg1 handler:(id /* block */)arg2;
- (void)stopRecordingWithError:(id)arg1 movieURL:(id)arg2;
- (void)stopRecordingWithHandler:(id /* block */)arg1;
- (void)updateRecordingAvailability;

@end