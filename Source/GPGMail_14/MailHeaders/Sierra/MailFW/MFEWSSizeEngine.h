//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFRemoteStoreSizeEngine.h>

@class MFEWSAccount;

@interface MFEWSSizeEngine : MFRemoteStoreSizeEngine
{
}

- (void)_getSizeForMailbox:(id)arg1;	// IMP=0x00000000000b89d2
- (void)_runWorkerThread;	// IMP=0x00000000000b86a8
- (id)initWithAccount:(id)arg1;	// IMP=0x00000000000b855e

// Remaining properties
@property(readonly, nonatomic) MFEWSAccount *account; // @dynamic account;

@end

