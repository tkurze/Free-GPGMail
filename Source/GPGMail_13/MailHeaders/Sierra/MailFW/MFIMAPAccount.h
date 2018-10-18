//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFRemoteStoreAccount.h>

#import "IMAPAccount.h"

@class IMAPTaskManager, MCAuthScheme, MFIMAPOperationCache, MFLibraryIMAPStore, MFMailbox, NSArray, NSDictionary, NSError, NSLock, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;

@interface MFIMAPAccount : MFRemoteStoreAccount <IMAPAccount>
{
    NSMutableDictionary *_syncEngineMap;	// 8 = 0x8
    NSArray *_lastKnownCapabilities;	// 16 = 0x10
    NSMutableSet *_namespacePrivatePrefixes;	// 24 = 0x18
    NSMutableSet *_namespacePublicPrefixes;	// 32 = 0x20
    NSMutableSet *_namespaceSharedPrefixes;	// 40 = 0x28
    NSString *_separatorChar;	// 48 = 0x30
    NSLock *_connectionPoolLock;	// 56 = 0x38
    MFIMAPOperationCache *_offlineCache;	// 64 = 0x40
    NSString *_serverPathPrefixWithFilesystemSeparator;	// 72 = 0x48
    NSString *_serverPathPrefixAsFilesystemPath;	// 80 = 0x50
    NSLock *_fsPrefixLock;	// 88 = 0x58
    NSLock *_mailboxListingLock;	// 96 = 0x60
    NSMutableSet *_mailboxURLsToSynchronize;	// 104 = 0x68
    NSMutableDictionary *_IMAPMailboxes;	// 112 = 0x70
    NSMutableDictionary *_IMAPQuotaRoots;	// 120 = 0x78
    id _allMailLock;	// 128 = 0x80
    MFMailbox *_allMailMailbox;	// 136 = 0x88
    MFMailbox *_serverDefinedArchiveMailbox;	// 144 = 0x90
    id _serverDefinedArchiveMailboxLock;	// 152 = 0x98
    MFMailbox *_serverDefinedDraftsMailbox;	// 160 = 0xa0
    id _serverDefinedDraftsMailboxLock;	// 168 = 0xa8
    MFMailbox *_serverDefinedJunkMailbox;	// 176 = 0xb0
    id _serverDefinedJunkMailboxLock;	// 184 = 0xb8
    MFMailbox *_serverDefinedSentMailbox;	// 192 = 0xc0
    id _serverDefinedSentMailboxLock;	// 200 = 0xc8
    MFMailbox *_serverDefinedTrashMailbox;	// 208 = 0xd0
    id _serverDefinedTrashMailboxLock;	// 216 = 0xd8
    id _propertyDiscoveryLock;	// 224 = 0xe0
    BOOL _currentlySynchronizingMailboxList;	// 232 = 0xe8
    id _synchronizeMailboxListingLock;	// 240 = 0xf0
    NSMutableSet *_labelsBeingCleanedUp;	// 248 = 0xf8
    BOOL _lastConnectionFailed;	// 256 = 0x100
    BOOL _shouldIncludePrefixInPath;	// 257 = 0x101
    BOOL _supportsQuickResynchronization;	// 258 = 0x102
    MFLibraryIMAPStore *_idleStore;	// 264 = 0x108
    double _lastMailboxListFetchTime;	// 272 = 0x110
    NSOperationQueue *_remoteTaskQueue;	// 280 = 0x118
    NSOperationQueue *_remoteFetchQueue;	// 288 = 0x120
    NSDictionary *_serverID;	// 296 = 0x128
}

+ (id)_mailboxNameForPathComponent:(id)arg1;	// IMP=0x00000000000de59d
+ (id)_pathComponentForMailboxName:(id)arg1;	// IMP=0x00000000000de40f
+ (void)_deleteQueuedMailboxes:(id)arg1;	// IMP=0x00000000000dccd0
+ (id)accountTypeString;	// IMP=0x00000000000cfd2f
+ (id)standardSSLPorts;	// IMP=0x00000000000ceb5f
+ (id)standardPorts;	// IMP=0x00000000000ceb55
+ (id)backgroundQueue;	// IMP=0x00000000000ccb71
+ (id)invocationQueue;	// IMP=0x00000000000ccaf9
@property BOOL supportsQuickResynchronization; // @synthesize supportsQuickResynchronization=_supportsQuickResynchronization;
@property(copy) NSDictionary *serverID; // @synthesize serverID=_serverID;
@property(nonatomic) BOOL shouldIncludePrefixInPath; // @synthesize shouldIncludePrefixInPath=_shouldIncludePrefixInPath;
@property(nonatomic) BOOL lastConnectionFailed; // @synthesize lastConnectionFailed=_lastConnectionFailed;
@property(readonly, nonatomic) NSOperationQueue *remoteFetchQueue; // @synthesize remoteFetchQueue=_remoteFetchQueue;
@property(readonly, nonatomic) NSOperationQueue *remoteTaskQueue; // @synthesize remoteTaskQueue=_remoteTaskQueue;
@property double lastMailboxListFetchTime; // @synthesize lastMailboxListFetchTime=_lastMailboxListFetchTime;
@property(retain) MFLibraryIMAPStore *idleStore; // @synthesize idleStore=_idleStore;
- (void).cxx_destruct;	// IMP=0x00000000000e1506
- (void)_performDiagnostics:(id)arg1;	// IMP=0x00000000000e10f8
- (void)messageDeliveryWillBegin:(id)arg1;	// IMP=0x00000000000e1099
- (BOOL)storesUnseenCount;	// IMP=0x00000000000e108e
- (id)_infoForMatchingURL:(id)arg1;	// IMP=0x00000000000e0ed4
- (id)URLPersistenceScheme;	// IMP=0x00000000000e0eb5
- (id)mailboxForRelativePath:(id)arg1 isFilesystemPath:(BOOL)arg2 create:(BOOL)arg3;	// IMP=0x00000000000e0c96
- (void)_loadEntriesFromFileSystemPath:(id)arg1 parent:(id)arg2;	// IMP=0x00000000000e0aa4
- (id)_mailboxPathPrefix:(BOOL)arg1;	// IMP=0x00000000000e0a35
- (void)syncFileSystemWithServerPathPrefix;	// IMP=0x00000000000dfd88
- (void)_setFileSystemServerPathPrefix;	// IMP=0x00000000000df698
- (id)_fileSystemServerPathPrefix:(BOOL)arg1;	// IMP=0x00000000000df61e
@property(copy) NSString *serverPathPrefix;
- (BOOL)canMailboxBeDeleted:(id)arg1;	// IMP=0x00000000000df1e4
- (id)mailboxForName:(id)arg1;	// IMP=0x00000000000def1f
- (id)nameForMailbox:(id)arg1;	// IMP=0x00000000000deb9e
- (id)_fullIMAPPathForPath:(id)arg1 relativeToMailbox:(id)arg2;	// IMP=0x00000000000de82f
- (void)insertInMailboxes:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000ddbdb
- (BOOL)renameMailbox:(id)arg1 newDisplayName:(id)arg2 parent:(id)arg3;	// IMP=0x00000000000dd412
- (void)_recursivelyModifySubscriptions:(BOOL)arg1 forMailbox:(id)arg2 children:(id)arg3 withSyncHandler:(id)arg4;	// IMP=0x00000000000dd0be
- (void)_mailboxesWereRemovedFromTree:(id)arg1 withFileSystemPaths:(id)arg2;	// IMP=0x00000000000dca5f
- (void)_waitForMailboxListingLoadToComplete;	// IMP=0x00000000000dca1c
- (void)_loadMailboxListingIntoCache:(id)arg1 parent:(id)arg2 addedMailboxes:(id)arg3 removedMailboxes:(id)arg4 updatingSourceMailbox:(BOOL)arg5;	// IMP=0x00000000000dc2b0
- (void)_loadMailboxListingIntoCache:(id)arg1 parent:(id)arg2 addedMailboxes:(id)arg3 removedMailboxes:(id)arg4;	// IMP=0x00000000000dc221
- (void)refreshMailboxListingRootedAtMailbox:(id)arg1;	// IMP=0x00000000000dc0b6
- (void)_synchronouslyLoadListingForParent:(id)arg1;	// IMP=0x00000000000dc036
- (id)_copyMailboxWithParent:(id)arg1 name:(id)arg2 pathComponent:(id)arg3 attributes:(unsigned long long)arg4 existingMailbox:(id)arg5;	// IMP=0x00000000000dbd30
- (id)_specialMailboxWithType:(int)arg1 create:(BOOL)arg2 isLocal:(BOOL)arg3;	// IMP=0x00000000000db388
- (BOOL)_deleteMailbox:(id)arg1 reflectToServer:(BOOL)arg2;	// IMP=0x00000000000daf06
- (BOOL)deleteMailbox:(id)arg1 reflectToServer:(BOOL)arg2;	// IMP=0x00000000000dae50
- (BOOL)_askToChangePathPrefixToCreateMailbox:(id)arg1 displayName:(id)arg2 withSyncHandler:(id)arg3;	// IMP=0x00000000000da667
- (id)validNameForMailbox:(id)arg1 fromDisplayName:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000da047
- (id)createMailboxWithParent:(id)arg1 displayName:(id)arg2 localizedDisplayName:(id)arg3;	// IMP=0x00000000000d94e1
- (BOOL)_createMailbox:(id)arg1 withSyncHandler:(id)arg2;	// IMP=0x00000000000d93b8
- (id)_listingForMailbox:(id)arg1 listAllChildren:(BOOL)arg2;	// IMP=0x00000000000d8c11
- (id)_recursivelyFilterMailboxList:(id)arg1 accordingToList:(id)arg2;	// IMP=0x00000000000d87a5
- (id)_namespacePrefixesForPrivate:(BOOL)arg1 public:(BOOL)arg2 shared:(BOOL)arg3;	// IMP=0x00000000000d7f82
- (id)_listingForMailbox:(id)arg1 listAllChildren:(BOOL)arg2 onlySubscribed:(BOOL)arg3;	// IMP=0x00000000000d7919
- (void)_synchronizeMailboxListDuringMailCheck;	// IMP=0x00000000000d77a1
- (void)_updateSpecialMailboxes;	// IMP=0x00000000000d6bfb
- (BOOL)_synchronizeMailboxList;	// IMP=0x00000000000d6a15
@property(readonly) BOOL supportsIDLE;
@property(readonly, copy) NSArray *lastKnownCapabilities;
- (id)separatorCharFetchIfNeeded:(BOOL)arg1;	// IMP=0x00000000000d6610
- (void)unselectConnectionForMailbox:(id)arg1;	// IMP=0x00000000000d659e
- (id)storeForMailbox:(id)arg1;	// IMP=0x00000000000d6467
- (void)doCommandBlockForMailbox:(id)arg1 synchronously:(BOOL)arg2 priority:(long long)arg3 description:(id)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x00000000000d6388
- (void)fetchAsynchronouslyIsAuto:(BOOL)arg1;	// IMP=0x00000000000d5f2d
- (BOOL)shouldFetch;	// IMP=0x00000000000d5ef6
- (void)setIsOffline:(BOOL)arg1;	// IMP=0x00000000000d5d51
- (void)clearQuotaRoots;	// IMP=0x00000000000d5b01
- (id)quotaRootForName:(id)arg1 createIfNeeded:(BOOL)arg2;	// IMP=0x00000000000d59f9
- (void)_startObserving:(BOOL)arg1 IMAPMailbox:(id)arg2;	// IMP=0x00000000000d5931
- (void)_removeIMAPMailboxWithName:(id)arg1;	// IMP=0x00000000000d5868
- (void)_renameIMAPMailboxWithMailbox:(id)arg1 fromName:(id)arg2 toName:(id)arg3;	// IMP=0x00000000000d5366
- (BOOL)resetSpecialMailboxes;	// IMP=0x00000000000d5181
- (id)_serverDefinedMailboxWithAttribute:(unsigned long long)arg1;	// IMP=0x00000000000d4fcf
@property(readonly) MFMailbox *serverDefinedTrashMailbox;
@property(readonly) MFMailbox *serverDefinedSentMailbox;
@property(readonly) MFMailbox *serverDefinedJunkMailbox;
@property(readonly) MFMailbox *serverDefinedDraftsMailbox;
@property(readonly) MFMailbox *serverDefinedArchiveMailbox;
- (id)_mailboxNameForLabelName:(id)arg1;	// IMP=0x00000000000d4a5e
- (id)gmailLabelWithName:(id)arg1;	// IMP=0x00000000000d4662
- (id)_addIMAPMailboxForMailbox:(id)arg1 name:(id)arg2;	// IMP=0x00000000000d422c
- (id)IMAPMailboxForMailbox:(id)arg1 name:(id)arg2 createIfNeeded:(BOOL)arg3;	// IMP=0x00000000000d3f78
- (id)IMAPMailboxForMailboxName:(id)arg1 createIfNeeded:(BOOL)arg2;	// IMP=0x00000000000d3f5c
- (id)IMAPMailboxForMailbox:(id)arg1 createIfNeeded:(BOOL)arg2;	// IMP=0x00000000000d3eb6
- (void)_allegedHighestModificationSequenceDidChangeForIMAPMailbox:(id)arg1;	// IMP=0x00000000000d3dde
- (void)_unseenCount:(unsigned int)arg1 didChangeForIMAPMailbox:(id)arg2;	// IMP=0x00000000000d3ccc
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000d3b44
- (void)validateConnections;	// IMP=0x00000000000d39d0
- (void)_validateConnections;	// IMP=0x00000000000d3911
- (void)releaseAllConnections;	// IMP=0x00000000000d38f5
- (void)_releaseAllConnectionsAndCallSuper:(BOOL)arg1 saveOfflineCache:(BOOL)arg2;	// IMP=0x00000000000d3695
- (void)didConnectToServerWithServerInterface:(id)arg1;	// IMP=0x00000000000d347a
- (void)setSeparatorChar:(id)arg1;	// IMP=0x00000000000d3314
- (void)expungeMailboxWithName:(id)arg1 URLStringToCompact:(id)arg2;	// IMP=0x00000000000d314b
- (void)invalidateMailboxWithName:(id)arg1 expunge:(BOOL)arg2 URLStringToCompact:(id)arg3;	// IMP=0x00000000000d2f6f
- (void)handleOpenMailboxError:(id)arg1;	// IMP=0x00000000000d2f69
- (BOOL)connectAndAuthenticate:(id)arg1;	// IMP=0x00000000000d214f
- (void)detectAllMailMailboxWithConnection:(id)arg1;	// IMP=0x00000000000d1dd3
@property(readonly, copy, nonatomic) NSArray *allBackgroundMailboxNames;
- (void)setStoreTrashOnServer:(BOOL)arg1;	// IMP=0x00000000000d1a5a
- (void)setStoreSentMessagesOnServer:(BOOL)arg1;	// IMP=0x00000000000d1a06
- (void)setStoreJunkOnServer:(BOOL)arg1;	// IMP=0x00000000000d19b2
- (void)setStoreDraftsOnServer:(BOOL)arg1;	// IMP=0x00000000000d195e
@property BOOL ignoreServerDefinedTrashMailbox;
@property BOOL ignoreServerDefinedSentMailbox;
@property BOOL ignoreServerDefinedJunkMailbox;
@property BOOL ignoreServerDefinedDraftsMailbox;
@property BOOL ignoreServerDefinedArchiveMailbox;
@property BOOL hasServerDefinedTrashMailbox;
@property BOOL hasServerDefinedSentMailbox;
@property BOOL hasServerDefinedJunkMailbox;
@property BOOL hasServerDefinedDraftsMailbox;
@property BOOL hasServerDefinedArchiveMailbox;
@property BOOL hasServerDefinedAllMailMailbox;
- (void)_clearAllPathBasedCachesAndDelete:(BOOL)arg1;	// IMP=0x00000000000d05d9
@property(readonly) BOOL allowsPartialDownloads;
- (void)didSynchronizeMailboxCachesAndFoundChanges:(BOOL)arg1;	// IMP=0x00000000000d03f5
- (void)resetNeedToSynchronizeMailboxCaches;	// IMP=0x00000000000d0317
- (BOOL)needToSynchronizeMailboxCaches;	// IMP=0x00000000000d0135
- (void)handleAlertResponse:(id)arg1;	// IMP=0x00000000000cfe30
- (BOOL)handleResponseCodeFromResponse:(id)arg1;	// IMP=0x00000000000cfd43
- (void)_updateIdleMailbox;	// IMP=0x00000000000cfbb9
- (id)allMailMailbox;	// IMP=0x00000000000cf8ae
- (id)primaryMailbox;	// IMP=0x00000000000cf72a
- (BOOL)_setChildren:(id)arg1 forMailbox:(id)arg2;	// IMP=0x00000000000cf687
@property BOOL compactWhenClosingMailboxes;
- (id)authenticatedConnection;	// IMP=0x00000000000cf3a2
- (id)newConnectedConnectionDiscoveringBestSettings:(BOOL)arg1 withConnectTimeout:(double)arg2 readWriteTimeout:(double)arg3;	// IMP=0x00000000000cf2f7
@property(readonly, nonatomic) BOOL requiresAuthentication;
@property(readonly, copy, nonatomic) NSString *saslProfileName;
- (BOOL)_parentSystemAccountDidUpdateProperties:(id)arg1 changedSystemAccount:(char *)arg2;	// IMP=0x00000000000ceed5
- (id)usesSSLObject;	// IMP=0x00000000000cedae
- (id)_hostnameFromParentAccount:(id)arg1;	// IMP=0x00000000000ced44
- (id)portNumberObject;	// IMP=0x00000000000ceb7f
- (long long)defaultSecurePortNumber;	// IMP=0x00000000000ceb74
- (long long)defaultPortNumber;	// IMP=0x00000000000ceb69
- (id)mailboxPathExtension;	// IMP=0x00000000000ceae5
- (Class)storeClassForMailbox:(id)arg1;	// IMP=0x00000000000cea1f
- (id)messageActionsAfterActionID:(long long)arg1;	// IMP=0x00000000000ce9fa
- (BOOL)discoverSettings;	// IMP=0x00000000000ce8a8
- (BOOL)needsToDiscoverSettings;	// IMP=0x00000000000ce829
- (void)setSupportsModificationSequences:(BOOL)arg1 forMailboxName:(id)arg2;	// IMP=0x00000000000ce7d2
- (id)dataSourceForMailbox:(id)arg1 createIfNeeded:(BOOL)arg2;	// IMP=0x00000000000ce657
- (id)dataSourceForMailboxName:(id)arg1 createIfNeeded:(BOOL)arg2;	// IMP=0x00000000000ce5f3
- (void)doRoutineCleanup;	// IMP=0x00000000000ce3a0
- (void)_writeCustomInfoToMailboxCache:(id)arg1;	// IMP=0x00000000000ce2c6
- (void)_readCustomInfoFromMailboxCache:(id)arg1;	// IMP=0x00000000000ce163
- (BOOL)_cleanUpMessagesInGmailLabel:(id)arg1;	// IMP=0x00000000000cde88
- (void)cleanUpMessagesInGmailLabel:(id)arg1;	// IMP=0x00000000000cdd59
- (void)_cleanUpMessagesInGmailLabels;	// IMP=0x00000000000cdb08
- (id)_colorByMessageFromColorByMessageDigest:(id)arg1;	// IMP=0x00000000000cd735
- (void)_migrateColorsForGmail;	// IMP=0x00000000000cd1ca
@property BOOL needsGmailLabelsCleanup;
- (id)_shouldUseGmailLabelStoresNumber;	// IMP=0x00000000000ccfa4
@property(readonly) BOOL shouldUseGmailLabelStoresIsSet;
@property BOOL shouldUseGmailLabelStores;
- (BOOL)needsServerMessages;	// IMP=0x00000000000ccdc4
- (void)completeDeferredInitialization;	// IMP=0x00000000000ccc1c
- (void)dealloc;	// IMP=0x00000000000cc941
- (id)_newTaskManager;	// IMP=0x00000000000cc909
- (id)init;	// IMP=0x00000000000cc869
- (id)initWithSystemAccount:(id)arg1;	// IMP=0x00000000000cc429
- (void)setMessageCaching:(unsigned int)arg1;	// IMP=0x00000000000e177a
- (unsigned int)messageCaching;	// IMP=0x00000000000e1757

// Remaining properties
@property(readonly, copy) NSString *accountTypeString;
@property BOOL allowInsecureAuthentication;
@property(readonly, copy) NSString *appleAuthenticationToken;
@property(readonly, copy) NSString *applePersonID;
@property(copy) NSString *authenticationScheme;
@property long long cachePolicy;
@property(copy) NSString *canonicalEmailAddress;
@property BOOL configureDynamically;
@property(retain) NSError *connectionError;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy) NSString *displayName;
@property(copy) NSString *externalHostname;
@property(readonly) unsigned long long hash;
@property(copy) NSString *hostname;
@property(readonly, copy) NSString *identifier;
@property(readonly, nonatomic) BOOL isGmailAccount;
@property(readonly, copy) NSString *oauthToken;
@property(copy) NSString *password;
@property long long portNumber;
@property(retain) MCAuthScheme *preferredAuthScheme;
@property long long securityLayerType;
@property(readonly) BOOL shouldMoveDeletedMessagesToTrash;
@property BOOL shouldUseAuthentication;
@property(readonly, copy, nonatomic) NSArray *standardPorts;
@property(readonly, copy, nonatomic) NSArray *standardSSLPorts;
@property(readonly) Class superclass;
@property(readonly, nonatomic) IMAPTaskManager *taskManager; // @dynamic taskManager;
@property(copy) NSString *username;
@property BOOL usesSSL;

@end

