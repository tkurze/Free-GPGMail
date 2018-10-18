//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPreferencesModule.h"

#import "ACUIAccountsTableViewControllerDelegate.h"
#import "TerminationHandler.h"

@class ACUIAccountsTableViewController, EWSIMAPAccountInformationController, EWSMailboxBehaviorsController, EWSServerSettingsController, IMAPMailboxBehaviorsController, IMAPPOPServerSettingsController, NSButton, NSSegmentedControl, NSString, NSTabView, NSTabViewController, NSView, NoEmailChildAccountInformationController, POPAccountInformationController, POPMailboxBehaviorsController, ParentAccountServerSettingsController;

@interface AccountPreferences : NSPreferencesModule <ACUIAccountsTableViewControllerDelegate, TerminationHandler>
{
    NSView *_accountsTableContainer;	// 48 = 0x30
    ACUIAccountsTableViewController *_accountsTableController;	// 56 = 0x38
    NSSegmentedControl *_addRemoveAccountControl;	// 64 = 0x40
    NSView *_accountDetailContainer;	// 72 = 0x48
    NSTabViewController *_accountDetailController;	// 80 = 0x50
    NSTabView *_accountDetailTabView;	// 88 = 0x58
    EWSIMAPAccountInformationController *_ewsImapAccountInformationController;	// 96 = 0x60
    POPAccountInformationController *_popAccountInformationController;	// 104 = 0x68
    NoEmailChildAccountInformationController *_noEmailChildAccountInformationController;	// 112 = 0x70
    EWSMailboxBehaviorsController *_ewsMailboxBehaviorsController;	// 120 = 0x78
    IMAPMailboxBehaviorsController *_imapMailboxBehaviorsController;	// 128 = 0x80
    POPMailboxBehaviorsController *_popMailboxBehaviorsController;	// 136 = 0x88
    EWSServerSettingsController *_ewsServerSettingsController;	// 144 = 0x90
    IMAPPOPServerSettingsController *_imapPopServerSettingsController;	// 152 = 0x98
    ParentAccountServerSettingsController *_parentAccountServerSettingsController;	// 160 = 0xa0
    NSButton *_helpButton;	// 168 = 0xa8
}

+ (void)showSMTPServerListWithSelectedAccount:(id)arg1;	// IMP=0x00000001000c8ac6
+ (void)focusAccount:(id)arg1;	// IMP=0x00000001000c883b
@property(nonatomic) __weak NSButton *helpButton; // @synthesize helpButton=_helpButton;
@property(retain, nonatomic) ParentAccountServerSettingsController *parentAccountServerSettingsController; // @synthesize parentAccountServerSettingsController=_parentAccountServerSettingsController;
@property(retain, nonatomic) IMAPPOPServerSettingsController *imapPopServerSettingsController; // @synthesize imapPopServerSettingsController=_imapPopServerSettingsController;
@property(retain, nonatomic) EWSServerSettingsController *ewsServerSettingsController; // @synthesize ewsServerSettingsController=_ewsServerSettingsController;
@property(retain, nonatomic) POPMailboxBehaviorsController *popMailboxBehaviorsController; // @synthesize popMailboxBehaviorsController=_popMailboxBehaviorsController;
@property(retain, nonatomic) IMAPMailboxBehaviorsController *imapMailboxBehaviorsController; // @synthesize imapMailboxBehaviorsController=_imapMailboxBehaviorsController;
@property(retain, nonatomic) EWSMailboxBehaviorsController *ewsMailboxBehaviorsController; // @synthesize ewsMailboxBehaviorsController=_ewsMailboxBehaviorsController;
@property(retain, nonatomic) NoEmailChildAccountInformationController *noEmailChildAccountInformationController; // @synthesize noEmailChildAccountInformationController=_noEmailChildAccountInformationController;
@property(retain, nonatomic) POPAccountInformationController *popAccountInformationController; // @synthesize popAccountInformationController=_popAccountInformationController;
@property(retain, nonatomic) EWSIMAPAccountInformationController *ewsImapAccountInformationController; // @synthesize ewsImapAccountInformationController=_ewsImapAccountInformationController;
@property(nonatomic) __weak NSTabView *accountDetailTabView; // @synthesize accountDetailTabView=_accountDetailTabView;
@property(retain, nonatomic) NSTabViewController *accountDetailController; // @synthesize accountDetailController=_accountDetailController;
@property(nonatomic) __weak NSView *accountDetailContainer; // @synthesize accountDetailContainer=_accountDetailContainer;
@property(nonatomic) __weak NSSegmentedControl *addRemoveAccountControl; // @synthesize addRemoveAccountControl=_addRemoveAccountControl;
@property(retain, nonatomic) ACUIAccountsTableViewController *accountsTableController; // @synthesize accountsTableController=_accountsTableController;
@property(nonatomic) __weak NSView *accountsTableContainer; // @synthesize accountsTableContainer=_accountsTableContainer;
- (void).cxx_destruct;	// IMP=0x00000001000cacc8
- (void)_performPostVerifyAction:(long long)arg1 shouldDeselectAccount:(BOOL)arg2 proposedToolbarIdentifier:(id)arg3;	// IMP=0x00000001000ca55c
- (BOOL)_shouldDeselectAccountWithPostVerifyAction:(long long)arg1;	// IMP=0x00000001000c9b41
- (void)_saveAccount;	// IMP=0x00000001000c9674
- (void)_outgoingAccountNeedsVerificationDidChange:(BOOL)arg1;	// IMP=0x00000001000c95d8
- (void)_accountNeedsVerificationDidChange:(BOOL)arg1;	// IMP=0x00000001000c94d4
- (void)_accountNeedsSavingDidChange:(BOOL)arg1;	// IMP=0x00000001000c946a
- (void)_addRemoveAccountClick:(id)arg1;	// IMP=0x00000001000c8cc0
- (void)_selectedTabViewItemDidChange:(long long)arg1;	// IMP=0x00000001000c8c10
- (id)subTitleOverrideForAccount:(id)arg1;	// IMP=0x00000001000c8607
- (void)didRefreshAccounts;	// IMP=0x00000001000c8533
- (void)didSelectAccount:(id)arg1;	// IMP=0x00000001000c7d98
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;	// IMP=0x00000001000b8bfc
- (BOOL)preferencesWindowShouldClose;	// IMP=0x00000001000c7d81
- (void)moduleWillBeRemoved;	// IMP=0x00000001000c7d2e
- (BOOL)moduleCanBeRemoved;	// IMP=0x00000001000a1a9f
- (void)moduleWasInstalled;	// IMP=0x00000001000a198c
- (id)titleForIdentifier:(id)arg1;	// IMP=0x000000010009f5c7
- (id)imageForPreferenceNamed:(id)arg1;	// IMP=0x000000010009f8e8
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000c79ea
- (void)dealloc;	// IMP=0x00000001000c781c
- (void)awakeFromNib;	// IMP=0x000000010009ffd4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

