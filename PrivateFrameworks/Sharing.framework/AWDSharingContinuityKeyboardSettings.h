/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface AWDSharingContinuityKeyboardSettings : PBCodable <NSCopying> {
    BOOL  _disabled;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int disabled : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL hasDisabled;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)disabled;
- (BOOL)hasDisabled;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDisabled:(BOOL)arg1;
- (void)setHasDisabled:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end