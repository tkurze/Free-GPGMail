//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <objc/NSObject.h>

@class MFMailboxProvider;

@interface MFMessageTransformer : NSObject
{
    MFMailboxProvider *_mailboxProvider;
}

@property(retain, nonatomic) MFMailboxProvider *mailboxProvider; // @synthesize mailboxProvider=_mailboxProvider;
//- (void).cxx_destruct;
- (id)_transformLibraryMessage:(id)arg1 mailboxScope:(id)arg2 mailboxObjectIDs:(id)arg3;
- (id)transformECMessages:(id)arg1 mailboxScope:(id)arg2;
- (id)transformLibraryMessage:(id)arg1 mailboxScope:(id)arg2;
- (id)initWithMailboxProvider:(id)arg1;

@end

