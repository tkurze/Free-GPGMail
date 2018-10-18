//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "NSFileManagerDelegate.h"

@class NSFileManager, NSMutableDictionary, NSString;

@interface MFPersistenceMigratorV2 : NSObject <NSFileManagerDelegate>
{
    NSMutableDictionary *_lostItems;	// 8 = 0x8
    BOOL _isTrackingCleanupProgress;	// 16 = 0x10
    NSFileManager *_fileManager;	// 24 = 0x18
    id <MFActivityProgressUpdater> _activityProgressUpdater;	// 32 = 0x20
    unsigned long long _progressChunkSize;	// 40 = 0x28
    unsigned long long _messagesProgressCount;	// 48 = 0x30
    unsigned long long _v1CleanupCount;	// 56 = 0x38
}

@property(nonatomic) BOOL isTrackingCleanupProgress; // @synthesize isTrackingCleanupProgress=_isTrackingCleanupProgress;
@property(nonatomic) unsigned long long v1CleanupCount; // @synthesize v1CleanupCount=_v1CleanupCount;
@property(nonatomic) unsigned long long messagesProgressCount; // @synthesize messagesProgressCount=_messagesProgressCount;
@property(nonatomic) unsigned long long progressChunkSize; // @synthesize progressChunkSize=_progressChunkSize;
@property(readonly, nonatomic) id <MFActivityProgressUpdater> activityProgressUpdater; // @synthesize activityProgressUpdater=_activityProgressUpdater;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (void).cxx_destruct;	// IMP=0x0000000000214d99
- (void)migrate;	// IMP=0x0000000000210b02
- (BOOL)_shouldIgnoreFilename:(id)arg1;	// IMP=0x0000000000210a5f
- (void)_migrateMailboxesFromDirectory:(id)arg1 toDirectory:(id)arg2 baseDirectory:(id)arg3 usingUUID:(id)arg4 mailboxCacheDictionary:(id)arg5 accountPrefix:(id)arg6;	// IMP=0x000000000020e226
- (id)_mailSystemAccountsWithAccountStore:(id)arg1;	// IMP=0x000000000020defb
- (id)_accountPrefixes;	// IMP=0x000000000020de47
- (id)_mailboxSuffixes;	// IMP=0x000000000020ddf3
- (id)_lostItemsForBaseDirectory:(id)arg1;	// IMP=0x000000000020dd4a
- (BOOL)fileManager:(id)arg1 shouldRemoveItemAtPath:(id)arg2;	// IMP=0x000000000020dc9d
- (BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtPath:(id)arg3;	// IMP=0x000000000020da8d
- (void)_handleAttachmentsMigrationResult:(BOOL)arg1 error:(id)arg2 message:(id)arg3 libraryID:(long long)arg4;	// IMP=0x000000000020d88a
- (BOOL)_path:(id)arg1 hasPrefixInArray:(id)arg2;	// IMP=0x000000000020d465
- (id)_stringByAppendingV2MailboxSuffix:(id)arg1;	// IMP=0x000000000020d33f
- (BOOL)_directoryExistsAtPath:(id)arg1;	// IMP=0x000000000020d2af
- (BOOL)_string:(id)arg1 hasSuffixInSet:(id)arg2;	// IMP=0x000000000020d12d
- (BOOL)_string:(id)arg1 hasPrefixInSet:(id)arg2;	// IMP=0x000000000020d0c9
- (id)_prefixOfString:(id)arg1 fromSet:(id)arg2;	// IMP=0x000000000020cf2d
- (void)dealloc;	// IMP=0x000000000020cee1
- (id)init;	// IMP=0x000000000020ce12
- (id)initWithActivityProgressUpdater:(id)arg1;	// IMP=0x000000000020cd33

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

