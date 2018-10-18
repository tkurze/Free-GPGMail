//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class MCMessage, NSData, NSString;

@interface PostUserNotificationOperation : NSOperation
{
    MCMessage *_message;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    NSString *_messageID;	// 40 = 0x28
    NSData *_messageIDHeaderDigest;	// 48 = 0x30
    NSString *_snippet;	// 56 = 0x38
}

@property(readonly, copy, nonatomic) NSString *snippet; // @synthesize snippet=_snippet;
@property(readonly, copy, nonatomic) NSData *messageIDHeaderDigest; // @synthesize messageIDHeaderDigest=_messageIDHeaderDigest;
@property(readonly, copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) MCMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;	// IMP=0x000000010027476a
- (void)cancel;	// IMP=0x00000001002745fc
- (unsigned long long)hash;	// IMP=0x0000000100274573
- (BOOL)isEqual:(id)arg1;	// IMP=0x0000000100274457
- (void)main;	// IMP=0x0000000100273d46
- (id)description;	// IMP=0x0000000100273c71
- (id)init;	// IMP=0x0000000100273ba2
- (id)initWithMessage:(id)arg1 snippet:(id)arg2;	// IMP=0x000000010027397a

@end

