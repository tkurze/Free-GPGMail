//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCTaskHandlerOperation.h"

@class NSArray;

@interface MFEWSRetrievePersistedFolderDataOperation : MCTaskHandlerOperation
{
    id /*<MFEWSRetrievePersistedFolderDataDelegate>*/ _delegate;
    NSArray *_mailboxURLs;
}

@property(readonly, copy, nonatomic) NSArray *mailboxURLs; // @synthesize mailboxURLs=_mailboxURLs;
@property(nonatomic) __weak id /*<MFEWSRetrievePersistedFolderDataDelegate>*/ delegate; // @synthesize delegate=_delegate;
//- (void).cxx_destruct;
- (void)main;
- (id)init;
- (id)initWithMailboxURLs:(id)arg1;

@end

