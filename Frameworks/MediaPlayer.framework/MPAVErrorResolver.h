/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <MPAVErrorResolverDelegate>;



@interface MPAVErrorResolver : NSObject 
{
    <MPAVErrorResolverDelegate> *_delegate;
}

@property <MPAVErrorResolverDelegate> *delegate;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)sendDidResolveError:(id)arg1 withResolution:(NSInteger)arg2;
- (void)resolveError:(id)arg1;

@end