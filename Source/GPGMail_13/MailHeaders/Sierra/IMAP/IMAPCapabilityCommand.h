//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPSingleCommand.h>

@interface IMAPCapabilityCommand : IMAPSingleCommand
{
}

- (long long)maxAllowedConnectionState;	// IMP=0x000000000000f5a5
- (long long)minRequiredConnectionState;	// IMP=0x000000000000f59a
- (BOOL)executeOnConnection:(id)arg1;	// IMP=0x000000000000f57f
- (BOOL)shouldSendAgainOnError;	// IMP=0x000000000000f574
- (id)activityString;	// IMP=0x000000000000f508
- (id)commandTypeString;	// IMP=0x000000000000f4e9

@end

