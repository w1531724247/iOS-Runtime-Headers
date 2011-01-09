/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSString;



@interface MFLock : NSLock <MFLockObject>
{
    NSString *_name;
    id _delegate;
}

+ (void)initialize;

- (BOOL)lockBeforeDate:(id)arg1;
- (void)lock;
- (void)unlock;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)tryLock;
- (id)initWithName:(id)arg1 andDelegate:(id)arg2;
- (BOOL)isLockedByMe;

@end