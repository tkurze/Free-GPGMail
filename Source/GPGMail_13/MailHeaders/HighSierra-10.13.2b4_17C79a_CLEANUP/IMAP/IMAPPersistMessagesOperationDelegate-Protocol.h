//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject-Protocol.h"

@class IMAPPersistMessagesOperation, NSMutableDictionary, NSSet;

@protocol IMAPPersistMessagesOperationDelegate <NSObject>
- (void)persistMessagesOperation:(IMAPPersistMessagesOperation *)arg1 persistedMessagesAndGotNewMessages:(NSMutableDictionary *)arg2 missedMessages:(NSSet *)arg3;
@end

