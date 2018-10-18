//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSCopying-Protocol.h"
//#import "NSObject-Protocol.h"

@class NSArray, NSDate, NSString;

@protocol ECMessage <NSCopying, NSObject>
@property(readonly, nonatomic) id /*<ECMimePart>*/ messageBody;
@property(readonly) BOOL conversationMuted;
@property(readonly) BOOL conversationVIP;
@property(readonly) BOOL senderVIP;
@property(readonly) BOOL junk;
@property(readonly) BOOL answered;
@property(readonly) BOOL flagged;
@property(readonly) long long conversationID;
@property(readonly, nonatomic) id /*<ECMailbox>*/ mailbox;
@property(readonly, copy) NSString *remoteID;
@property(readonly, copy) NSArray *listUnsubscribe;
@property(readonly) NSDate *dateReceived;
@property(readonly, copy) NSArray *cc;
@property(readonly, copy) NSArray *to;
@property(readonly, copy) NSArray *from;
@property(readonly, copy) NSString *subject;
@property(readonly, copy, nonatomic) NSString *persistentID;
@end

