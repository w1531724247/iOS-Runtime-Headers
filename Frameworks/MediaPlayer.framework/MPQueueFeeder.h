/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVController;



@interface MPQueueFeeder : AVQueueFeeder <NSCopying>
{
    MPAVController *_avController;
    struct __CFSet { } *_itemsWithReferencesToClear;
    NSUInteger _repeatType;
    NSUInteger _shuffleType;
    struct __CFDictionary { } *_nextStartTimes;
    id _representedObject;
    BOOL _fullScreenPlaybackQueue;
    BOOL _isSourceChangeInProgress;
}

@property(readonly) Class itemClass;
@property(retain,readonly) NSDictionary *preferredLanguages;
@property(readonly) BOOL trackChangesCanEndPlayback;
@property(readonly) NSUInteger realRepeatType;
@property(readonly) NSUInteger realShuffleType;
@property BOOL isSourceChangeInProgress;
@property BOOL fullScreenPlaybackQueue;
@property(retain) <NSObject> *representedObject;
@property NSUInteger shuffleType;
@property NSUInteger repeatType;
@property MPAVController *AVController;

+ (void)restoreAVControllerPlaybackQueue:(id)arg1 fromUnarchiver:(id)arg2 feederClass:(Class)arg3;

- (id)representedObject;
- (void)setRepresentedObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setAVController:(id)arg1;
- (id)preferredLanguages;
- (void)shuffleItemsWithAnchor:(NSUInteger*)arg1;
- (NSUInteger)repeatType;
- (void)setRepeatType:(NSUInteger)arg1;
- (id)playbackInfoAtIndex:(NSUInteger)arg1;
- (NSUInteger)realRepeatType;
- (NSUInteger)realShuffleType;
- (NSUInteger)itemTypeForIndex:(NSUInteger)arg1;
- (id)AVController;
- (void)_fixNextStartTimesByInsertingRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)_fixNextStartTimesByRemovingRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)setNextStartTime:(double)arg1 forIndex:(NSUInteger)arg2;
- (void)dequeueOnDemandItem;
- (NSUInteger)onDemandItemIndex;
- (BOOL)reloadWithDataSource:(id)arg1;
- (void)beginSourceChange;
- (void)commitSourceChangeWithStartQueueIndex:(NSUInteger)arg1;
- (id)errorResolverForItem:(id)arg1;
- (BOOL)shouldBeginPlaybackOfItem:(id)arg1 error:(id*)arg2;
- (Class)itemClass;
- (BOOL)trackChangesCanEndPlayback;
- (void)addReferenceToItem:(id)arg1;
- (void)contentsDidChangeByInsertingRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)contentsDidChangeByRemovingRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(NSUInteger)arg1;
- (BOOL)_canPurgeNextStartTimes;
- (id)itemForIndex:(NSUInteger)arg1;
- (void)restoreAVControllerPlaybackQueue:(id)arg1 fromUnarchiver:(id)arg2;
- (void)archiveAVControllerPlaybackQueue:(id)arg1 toArchiver:(id)arg2;
- (BOOL)isSourceChangeInProgress;
- (void)setIsSourceChangeInProgress:(BOOL)arg1;
- (BOOL)fullScreenPlaybackQueue;
- (void)setFullScreenPlaybackQueue:(BOOL)arg1;
- (NSUInteger)shuffleType;
- (void)setShuffleType:(NSUInteger)arg1;
- (void)clearReferencesToItem:(id)arg1;
- (id)localizedPositionInPlaylistString:(id)arg1;
- (id)copyRawItemAtIndex:(NSUInteger)arg1;

@end