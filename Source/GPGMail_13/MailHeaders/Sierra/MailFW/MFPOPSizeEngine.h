//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFSizeEngine.h>

@class MFPOPAccount, NSArray, NSMutableDictionary;

@interface MFPOPSizeEngine : MFSizeEngine
{
    NSMutableDictionary *_infoByMessageID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000228177
- (void)_messageFlagsChanged:(id)arg1;	// IMP=0x00000000002279c1
- (void)_deleteServerMessagesCompleted:(id)arg1;	// IMP=0x00000000002279af
- (void)_fetchCompleted:(id)arg1;	// IMP=0x0000000000227939
- (BOOL)_prepareToRefresh;	// IMP=0x000000000022792e
- (void)_runWorkerThread;	// IMP=0x0000000000225c86
- (id)_remoteMailboxURL;	// IMP=0x0000000000225c36
- (id)_newMessageInfoFromMessageHeaders:(id)arg1;	// IMP=0x000000000022586f
- (id)infoWithKey:(id)arg1 forMessageWithID:(id)arg2;	// IMP=0x0000000000225780
@property(readonly, copy) NSArray *allMessageIDs;
- (void)dealloc;	// IMP=0x000000000022569f
- (id)initWithAccount:(id)arg1;	// IMP=0x0000000000225474

// Remaining properties
@property(readonly, nonatomic) MFPOPAccount *account; // @dynamic account;

@end

