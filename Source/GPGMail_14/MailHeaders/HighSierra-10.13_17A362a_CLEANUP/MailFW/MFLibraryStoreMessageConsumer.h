//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "MFMessageConsumer-Protocol.h"

@class MCInvocationQueue, MFLibraryStore, NSString;

@interface MFLibraryStoreMessageConsumer : NSObject <MFMessageConsumer>
{
    BOOL _shouldCancel;
    long long _collectorID;
    MFLibraryStore *_libraryStore;
    MCInvocationQueue *_callbackQueue;
}

@property(readonly, nonatomic) MCInvocationQueue *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) __weak MFLibraryStore *libraryStore; // @synthesize libraryStore=_libraryStore;
@property BOOL shouldCancel; // @synthesize shouldCancel=_shouldCancel;
@property long long collectorID; // @synthesize collectorID=_collectorID;
//- (void).cxx_destruct;
- (void)finishedSendingMessages;
- (void)searchPhaseComplete;
- (void)newMessagesAvailable:(id)arg1 secondaryMessages:(id)arg2 fromUpdate:(BOOL)arg3;
- (void)clearLibraryStoreWeakReference;
- (id)init;
- (id)initWithLibraryStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

