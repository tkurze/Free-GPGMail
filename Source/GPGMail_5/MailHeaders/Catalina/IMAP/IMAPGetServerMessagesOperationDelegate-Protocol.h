//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <IMAP/NSObject-Protocol.h>

@class IMAPGetServerMessagesOperation, NSArray, NSIndexSet;

@protocol IMAPGetServerMessagesOperationDelegate <NSObject>
- (void)getServerMessagesOperation:(IMAPGetServerMessagesOperation *)arg1 gotServerMessages:(NSArray *)arg2 uidsNotFound:(NSIndexSet *)arg3;
@end
