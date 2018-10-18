//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Quota.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class MFPOPSizeEngine, NSButton, NSMutableArray, NSMutableAttributedString, NSMutableDictionary, NSPopUpButton, NSString;

@interface POPQuota : Quota <NSTableViewDataSource, NSTableViewDelegate>
{
    NSMutableAttributedString *_truncatedString;	// 8 = 0x8
    NSMutableDictionary *_truncatedParagraphStyle;	// 16 = 0x10
    struct QuotaSimpleSortDescriptor _simpleSortDescs[5];	// 24 = 0x18
    NSMutableArray *_messageIDs;	// 104 = 0x68
    NSPopUpButton *_showMessagesPopup;	// 112 = 0x70
    NSButton *_deleteButton;	// 120 = 0x78
}

@property(nonatomic) __weak NSButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(nonatomic) __weak NSPopUpButton *showMessagesPopup; // @synthesize showMessagesPopup=_showMessagesPopup;
- (void).cxx_destruct;	// IMP=0x000000010027391a
- (void)_deleteServerMessagesCompleted:(id)arg1;	// IMP=0x0000000100273824
- (void)_deleteServerMessagesStarted:(id)arg1;	// IMP=0x000000010027378b
- (BOOL)_updateMessage:(id)arg1;	// IMP=0x0000000100273480
- (unsigned long long)_addMessage:(id)arg1;	// IMP=0x00000001002732c0
- (void)_resortMessages;	// IMP=0x0000000100273210
- (void)_syncSortDescriptors;	// IMP=0x0000000100272a20
- (void)tableViewSelectionDidChange:(id)arg1;	// IMP=0x0000000100272959
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;	// IMP=0x0000000100272947
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;	// IMP=0x00000001002724fc
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;	// IMP=0x00000001002722c4
- (id)_truncatedAttributedStringForString:(id)arg1;	// IMP=0x000000010027208a
- (long long)numberOfRowsInTableView:(id)arg1;	// IMP=0x000000010027205b
- (const struct QuotaSimpleSortDescriptor *)sortDescriptorAtIndex:(unsigned long long)arg1;	// IMP=0x000000010027201f
- (unsigned long long)numberOfSortDescriptors;	// IMP=0x0000000100272014
- (void)engineUpdated:(id)arg1;	// IMP=0x00000001002719c8
- (void)engineDidFinish;	// IMP=0x000000010027194a
- (void)engineDidStart;	// IMP=0x00000001002718da
- (id)_account;	// IMP=0x000000010027188a
- (void)showMessagesPopupChanged:(id)arg1;	// IMP=0x0000000100271739
- (void)_updateUsageField;	// IMP=0x000000010027130d
- (id)_filterMessages:(id)arg1 showMessageType:(long long)arg2;	// IMP=0x0000000100271147
- (BOOL)_shouldShowMessage:(id)arg1 showMessageType:(long long)arg2;	// IMP=0x0000000100271059
- (void)deleteFromServer:(id)arg1;	// IMP=0x0000000100270aa2
- (void)dealloc;	// IMP=0x00000001002709e8
- (void)awakeFromNib;	// IMP=0x0000000100270814
- (id)initWithSizeEngine:(id)arg1;	// IMP=0x00000001002705c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MFPOPSizeEngine *sizeEngine; // @dynamic sizeEngine;
@property(readonly) Class superclass;

@end

