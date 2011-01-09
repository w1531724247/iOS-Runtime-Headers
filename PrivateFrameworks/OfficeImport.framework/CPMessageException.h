/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CPMessageEntry;



@interface CPMessageException : NSException 
{
    CPMessageEntry *m_entry;
}

+ (void)initialize;
+ (id)exceptionWithUntaggedMessage:(id)arg1;
+ (id)nsError:(id)arg1 domain:(id)arg2;
+ (void)raiseUntaggedMessage:(id)arg1;
+ (id)exceptionWithMessage:(struct CPTaggedMessageStructure { NSInteger x1; id x2; }*)arg1;
+ (void)raise:(struct CPTaggedMessageStructure { NSInteger x1; id x2; }*)arg1;

- (void)dealloc;
- (id)description;
- (id)initWithMessage:(struct CPTaggedMessageStructure { NSInteger x1; id x2; }*)arg1;
- (id)initWithUntaggedMessage:(id)arg1;
- (id)getEntry;

@end