/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPIdentifier, NSString;

@interface CKDPInvitationRecipient : PBCodable <NSCopying> {
    NSString *_emailAddress;
    CKDPIdentifier *_userId;
}

@property(retain) NSString * emailAddress;
@property(readonly) bool hasEmailAddress;
@property(readonly) bool hasUserId;
@property(retain) CKDPIdentifier * userId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)emailAddress;
- (bool)hasEmailAddress;
- (bool)hasUserId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setUserId:(id)arg1;
- (id)userId;
- (void)writeTo:(id)arg1;

@end