//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCMessage.h"

@interface MCMessage (ParentalControl)
- (void)setPermissionRequestState:(long long)arg1;	// IMP=0x0000000000208eda
@property(readonly, nonatomic) BOOL isChildRequestMessage;
- (BOOL)isChildRequestMessage:(id)arg1 requestIsForSenders:(char *)arg2 childAddress:(id *)arg3 permissionRequestState:(long long *)arg4;	// IMP=0x0000000000208c94
- (BOOL)isParentResponseMessage:(char *)arg1 isRejected:(char *)arg2 requestedAddresses:(id)arg3 requestIsForSenders:(char *)arg4;	// IMP=0x0000000000208939
@end

