//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPMailboxCommand.h>

@class IMAPMailbox;

@interface IMAPSelectCommand : IMAPMailboxCommand
{
    BOOL _delayed;	// 24 = 0x18
    BOOL _useCondStore;	// 25 = 0x19
    IMAPMailbox *_imapMailbox;	// 32 = 0x20
}

+ (BOOL)automaticallyNotifiesObserversOfDelayed;	// IMP=0x000000000003255a
@property BOOL useCondStore; // @synthesize useCondStore=_useCondStore;
@property(retain) IMAPMailbox *imapMailbox; // @synthesize imapMailbox=_imapMailbox;
- (void).cxx_destruct;	// IMP=0x0000000000032669
@property BOOL delayed;
@property(readonly) BOOL readOnly;
- (BOOL)executeOnConnection:(id)arg1;	// IMP=0x0000000000032537
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;	// IMP=0x000000000003246a
- (BOOL)handlesAllUntaggedResponses;	// IMP=0x000000000003245f
- (id)activityString;	// IMP=0x00000000000323f3
- (id)commandTypeString;	// IMP=0x00000000000323d4

@end

