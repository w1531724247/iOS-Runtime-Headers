/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSDate, NSString;



@interface VMUDyLibLoadCommand : VMULoadCommand 
{
    NSString *_path;
    NSDate *_timestamp;
    NSUInteger _currentVersion;
    NSUInteger _compatibilityVersion;
}


- (id)path;
- (id)timestamp;
- (void)dealloc;
- (id)description;
- (NSUInteger)compatibilityVersion;
- (BOOL)isDyLib;
- (id)initWithMemory:(id)arg1;
- (NSUInteger)currentVersion;

@end