//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCRemoteStoreAccount-Protocol.h"
#import "IMAP/IMAPMessageDataSource-Protocol.h"
#import "MailFW/IMAPMessageDataSource-Protocol.h"
#import "MCGmailLabel-Protocol.h"

@class IMAPConnection, IMAPMailbox, IMAPQuotaRoot, IMAPResponse, IMAPServerInterface, IMAPTaskManager, NSArray, NSDictionary, NSError, NSString;

@protocol IMAPAccount <MCRemoteStoreAccount>
@property(copy) NSString *serverPathPrefix;
@property BOOL supportsQuickResynchronization;
@property(readonly, copy, nonatomic) NSArray *allBackgroundMailboxNames;
@property(readonly) BOOL shouldMoveDeletedMessagesToTrash;
@property(readonly) BOOL allowsPartialDownloads;
@property(copy) NSDictionary *serverID;
@property(retain) NSError *connectionError;
@property(readonly, nonatomic) IMAPTaskManager *taskManager;
- (NSArray *)messageActionsAfterActionID:(long long)arg1;
- (void)setSupportsModificationSequences:(BOOL)arg1 forMailboxName:(NSString *)arg2;
- (id <MCMailbox>)mailboxForName:(NSString *)arg1;
- (id <IMAPMessageDataSource>)dataSourceForMailbox:(id <MCMailbox>)arg1 createIfNeeded:(BOOL)arg2;
- (id <IMAPMessageDataSource>)dataSourceForMailboxName:(NSString *)arg1 createIfNeeded:(BOOL)arg2;
- (void)didConnectToServerWithServerInterface:(IMAPServerInterface *)arg1;
- (IMAPQuotaRoot *)quotaRootForName:(NSString *)arg1 createIfNeeded:(BOOL)arg2;
- (BOOL)handleResponseCodeFromResponse:(IMAPResponse *)arg1;
- (IMAPMailbox *)IMAPMailboxForMailboxName:(NSString *)arg1 createIfNeeded:(BOOL)arg2;
- (void)setSeparatorChar:(NSString *)arg1;
- (NSString *)separatorCharFetchIfNeeded:(BOOL)arg1;

@optional
- (void)detectAllMailMailboxWithConnection:(IMAPConnection *)arg1;
- (id <MCGmailLabel>)gmailLabelWithName:(NSString *)arg1;
@end

