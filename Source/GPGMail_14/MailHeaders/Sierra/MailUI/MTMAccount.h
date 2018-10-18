//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSImage, NSString;

@interface MTMAccount : NSObject
{
    BOOL _isLocalAccount;	// 8 = 0x8
    NSString *_backupID;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
    NSImage *_squareIcon;	// 32 = 0x20
}

+ (id)accountsFromMailLibraryURL:(id)arg1 preferences:(id)arg2;	// IMP=0x0000000100243c42
@property(readonly, nonatomic) NSImage *squareIcon; // @synthesize squareIcon=_squareIcon;
@property(readonly, nonatomic) BOOL isLocalAccount; // @synthesize isLocalAccount=_isLocalAccount;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *backupID; // @synthesize backupID=_backupID;
- (void).cxx_destruct;	// IMP=0x000000010024476e
- (id)description;	// IMP=0x0000000100243b58
- (id)init;	// IMP=0x0000000100243a89
- (id)initWithAccount:(id)arg1;	// IMP=0x00000001002437f9
- (id)initWithAccountInfo:(id)arg1;	// IMP=0x000000010024362a

@end

