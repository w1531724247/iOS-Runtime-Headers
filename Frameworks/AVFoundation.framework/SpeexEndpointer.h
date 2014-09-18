/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@class NSString;

@interface SpeexEndpointer : NSObject <Endpointer> {
    void *_impl;
    double mEndWaitTime;
    int mEndpointMode;
    unsigned int mFrameRate;
    double mInterspeechWaitTime;
    int mLastStatus;
    double mStartWaitTime;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property double endWaitTime;
@property int endpointMode;
@property(readonly) unsigned long long hash;
@property double interspeechWaitTime;
@property double startWaitTime;
@property(readonly) Class superclass;

- (bool)configureWithASBD:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 andFrameRate:(unsigned int)arg2;
- (bool)configureWithSampleRate:(double)arg1 andFrameRate:(unsigned int)arg2;
- (void)dealloc;
- (double)endWaitTime;
- (int)endpointMode;
- (int)getStatus:(float*)arg1 count:(unsigned int)arg2;
- (int)getStatus:(struct AudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; }*)arg1;
- (id)init;
- (double)interspeechWaitTime;
- (void)reset;
- (void)setEndWaitTime:(double)arg1;
- (void)setEndpointMode:(int)arg1;
- (void)setInterspeechWaitTime:(double)arg1;
- (void)setStartWaitTime:(double)arg1;
- (double)startWaitTime;

@end