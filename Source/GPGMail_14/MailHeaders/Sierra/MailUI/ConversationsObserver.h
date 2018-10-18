//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSCountedSet, NSMutableDictionary, NSOperationQueue;

@interface ConversationsObserver : NSObject
{
    NSCountedSet *_registeredConversationIDs;	// 8 = 0x8
    NSMutableDictionary *_mailboxCriterionByConversationID;	// 16 = 0x10
    NSOperationQueue *_workQueue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010004b104
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010012e1bd
@property(readonly, nonatomic) NSOperationQueue *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;	// IMP=0x000000010012e6fb
- (void)_libraryMessagesFlagsChanged:(id)arg1;	// IMP=0x00000001000579ed
- (void)_libraryMessagesUpdated:(id)arg1;	// IMP=0x00000001000830c0
- (void)_libraryMessagesCompacted:(id)arg1;	// IMP=0x0000000100085efb
- (void)_libraryConversationsWereChanged:(id)arg1;	// IMP=0x0000000100083f3d
- (void)_updateRegistrationForConversation:(id)arg1 withNewConversationID:(id)arg2;	// IMP=0x000000010012e454
- (BOOL)_isRegistered:(id)arg1;	// IMP=0x00000001000836fe
- (void)unregisterConversationID:(long long)arg1;	// IMP=0x00000001000586a9
- (void)registerConversationID:(long long)arg1 withMailboxCriterion:(id)arg2;	// IMP=0x000000010004b37f
- (unsigned int)_loadOptions;	// IMP=0x000000010004b78e
- (id)_criterionForConversationID:(id)arg1;	// IMP=0x000000010004b6d6
- (id)_primaryMessagesForConversationIDNumber:(id)arg1;	// IMP=0x000000010008399a
- (id)_primaryMessagesForConversations:(id)arg1;	// IMP=0x000000010008378f
- (id)_allMessagesForConversationIDNumber:(id)arg1;	// IMP=0x000000010004b65c
- (id)_allMessagesForConversations:(id)arg1;	// IMP=0x0000000100084b57
- (void)dealloc;	// IMP=0x000000010012e283
- (id)init;	// IMP=0x000000010004b1c3

@end

