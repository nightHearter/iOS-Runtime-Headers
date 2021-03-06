/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraSessionID : NSObject <NSCopying> {
    NSString * _accessoryName;
    NSString * _cameraProactiveSessionID;
    NSString * _cameraSessionAppID;
    NSString * _descriptionString;
    HMDDevice * _remoteDevice;
    NSString * _sessionID;
    BOOL  _spiClient;
}

@property (nonatomic, readonly) NSString *accessoryName;
@property (nonatomic, readonly) NSString *cameraProactiveSessionID;
@property (nonatomic, readonly) NSString *cameraSessionAppID;
@property (nonatomic, readonly) NSString *descriptionString;
@property (nonatomic, readonly) HMDDevice *remoteDevice;
@property (nonatomic, readonly) NSString *sessionID;
@property (getter=isSPIClient, nonatomic, readonly) BOOL spiClient;

- (void).cxx_destruct;
- (id)_createDescriptionString;
- (id)_extractSessionAppID:(id)arg1;
- (id)accessoryName;
- (id)cameraProactiveSessionID;
- (id)cameraSessionAppID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionString;
- (unsigned int)hash;
- (id)initWithAccessory:(id)arg1 service:(id)arg2 sessionID:(id)arg3 message:(id)arg4;
- (id)initWithAccessory:(id)arg1 sessionID:(id)arg2 message:(id)arg3;
- (id)initWithAccessoryName:(id)arg1 sessionID:(id)arg2 cameraSessionAppID:(id)arg3 cameraProactiveSessionID:(id)arg4 remoteDevice:(id)arg5 spiClient:(BOOL)arg6;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSPIClient;
- (id)remoteDevice;
- (id)sessionID;

@end
