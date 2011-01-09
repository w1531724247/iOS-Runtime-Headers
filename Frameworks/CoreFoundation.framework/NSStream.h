/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */



@interface NSStream : NSObject 
{
}

+ (void)getStreamsToHost:(id)arg1 port:(NSInteger)arg2 inputStream:(id*)arg3 outputStream:(id*)arg4;
+ (id)errorForCFStreamError:(struct { NSInteger x1; NSInteger x2; })arg1;

- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (NSUInteger)streamStatus;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)close;
- (id)propertyForKey:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)streamError;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)open;
- (id)betterStreamError;

@end