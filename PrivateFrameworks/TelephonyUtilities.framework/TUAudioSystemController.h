/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUAudioSystemController : TUAudioController {
    NSObject<OS_dispatch_queue> * _downlinkMutedQueue;
    NSNumber * _isDownlinkMutedCached;
    BOOL  _isRequestingDownlinkMuted;
    BOOL  _isRequestingPickableRoutesForPhoneCall;
    BOOL  _isRequestingPickableRoutesForPlayAndRecordRemoteVoice;
    BOOL  _isRequestingPickableRoutesForPlayAndRecordVideo;
    BOOL  _isRequestingPickableRoutesForPlayAndRecordVoice;
    BOOL  _isRequestingPickableRoutesForTTY;
    BOOL  _isRequestingPickableRoutesForVoicemail;
    BOOL  _isRequestingTTY;
    BOOL  _isRequestingUplinkMuted;
    NSNumber * _isTTYCached;
    NSNumber * _isUplinkMutedCached;
    unsigned long long  _lastDownlinkMutedRequestScheduleTime;
    unsigned long long  _lastPhoneCallCategoryRoutesScheduleTime;
    unsigned long long  _lastPlayAndRecordRemoteVoiceRoutesScheduleTime;
    unsigned long long  _lastPlayAndRecordVideoRoutesScheduleTime;
    unsigned long long  _lastPlayAndRecordVoiceRoutesScheduleTime;
    unsigned long long  _lastTTYPickableRoutesScheduleTime;
    unsigned long long  _lastTTYRequestScheduleTime;
    unsigned long long  _lastUplinkMutedRequestScheduleTime;
    unsigned long long  _lastVoicemailRoutesScheduleTime;
    NSArray * _pickableRoutesForPhoneCall;
    NSArray * _pickableRoutesForPlayAndRecordRemoteVoice;
    NSArray * _pickableRoutesForPlayAndRecordVideo;
    NSArray * _pickableRoutesForPlayAndRecordVoice;
    NSArray * _pickableRoutesForTTY;
    NSArray * _pickableRoutesForVoicemail;
    NSObject<OS_dispatch_queue> * _pickableRoutesQueue;
    NSObject<OS_dispatch_queue> * _ttyQueue;
    NSObject<OS_dispatch_queue> * _uplinkMutedQueue;
}

@property (getter=isDownlinkMuted, nonatomic) BOOL downlinkMuted;
@property (getter=isTTY, nonatomic, readonly) BOOL tty;
@property (getter=isUplinkMuted, nonatomic) BOOL uplinkMuted;

+ (id)sharedAudioSystemController;
+ (id)sharedSystemController;
+ (id)sourceIdentifierForRouteID:(id)arg1;

- (void).cxx_destruct;
- (void)_handleDownlinkMuteDidChangeNotification:(id)arg1;
- (void)_handlePickableRoutesDidChangeNotification:(id)arg1;
- (void)_handleServerConnectionDiedNotification:(id)arg1;
- (void)_handleUplinkMuteDidChangeNotification:(id)arg1;
- (id)_pickableRoutesForPhoneCallWithForceNewRequest:(BOOL)arg1;
- (id)_pickableRoutesForPlayAndRecordRemoteVoiceWithForceNewRequest:(BOOL)arg1;
- (id)_pickableRoutesForPlayAndRecordVideoWithForceNewRequest:(BOOL)arg1;
- (id)_pickableRoutesForPlayAndRecordVoiceWithForceNewRequest:(BOOL)arg1;
- (id)_pickableRoutesForTTYWithForceNewRequest:(BOOL)arg1;
- (id)_pickableRoutesForVoiceMailWithForceNewRequest:(BOOL)arg1;
- (void)_updateCachedState;
- (id)bestGuessPickableRoutesForAnyCall;
- (id)currentlyPickedRouteIdForCategory:(id)arg1 andMode:(id)arg2;
- (void)dealloc;
- (id)init;
- (BOOL)isDownlinkMuted;
- (BOOL)isTTY;
- (BOOL)isUplinkMuted;
- (id)pickableRouteWithUniqueIdentifier:(id)arg1;
- (id)pickableRoutesForCategory:(id)arg1 andMode:(id)arg2;
- (id)pickableRoutesForTTY;
- (void)setDownlinkMuted:(BOOL)arg1;
- (void)setUplinkMuted:(BOOL)arg1;
- (BOOL)shouldSuppressCallUsingRoute:(id)arg1;

@end
