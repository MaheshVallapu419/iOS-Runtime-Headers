/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDFaceTimeCallInterruptionBegan : PBCodable <NSCopying> {
    NSString *_guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int isAudioInterrupted : 1; 
        unsigned int isVideo : 1; 
        unsigned int isVideoInterrupted : 1; 
        unsigned int linkQuality : 1; 
        unsigned int onLockScreen : 1; 
    } _has;
    unsigned int _isAudioInterrupted;
    unsigned int _isVideo;
    unsigned int _isVideoInterrupted;
    int _linkQuality;
    unsigned int _onLockScreen;
    unsigned long long _timestamp;
}

@property(retain) NSString * guid;
@property(readonly) BOOL hasGuid;
@property BOOL hasIsAudioInterrupted;
@property BOOL hasIsVideo;
@property BOOL hasIsVideoInterrupted;
@property BOOL hasLinkQuality;
@property BOOL hasOnLockScreen;
@property BOOL hasTimestamp;
@property unsigned int isAudioInterrupted;
@property unsigned int isVideo;
@property unsigned int isVideoInterrupted;
@property int linkQuality;
@property unsigned int onLockScreen;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (BOOL)hasGuid;
- (BOOL)hasIsAudioInterrupted;
- (BOOL)hasIsVideo;
- (BOOL)hasIsVideoInterrupted;
- (BOOL)hasLinkQuality;
- (BOOL)hasOnLockScreen;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (unsigned int)isAudioInterrupted;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)isVideo;
- (unsigned int)isVideoInterrupted;
- (int)linkQuality;
- (void)mergeFrom:(id)arg1;
- (unsigned int)onLockScreen;
- (BOOL)readFrom:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasIsAudioInterrupted:(BOOL)arg1;
- (void)setHasIsVideo:(BOOL)arg1;
- (void)setHasIsVideoInterrupted:(BOOL)arg1;
- (void)setHasLinkQuality:(BOOL)arg1;
- (void)setHasOnLockScreen:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setIsAudioInterrupted:(unsigned int)arg1;
- (void)setIsVideo:(unsigned int)arg1;
- (void)setIsVideoInterrupted:(unsigned int)arg1;
- (void)setLinkQuality:(int)arg1;
- (void)setOnLockScreen:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
