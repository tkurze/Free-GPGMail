//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <AppKit/NSViewController.h>

@class ACAccount, NSNumber, NSOperationQueue, NSPopUpButton;

@interface AdvancedServerSettingsController : NSViewController
{
    BOOL _accountNeedsVerification;
    NSPopUpButton *_tlsCertificatesPopup;
    NSOperationQueue *_keychainQueue;
}

+ (id)keyPathsForValuesAffectingAccountAllowsInsecureAuthentication;
@property(readonly, nonatomic) NSOperationQueue *keychainQueue; // @synthesize keychainQueue=_keychainQueue;
@property(nonatomic) __weak NSPopUpButton *tlsCertificatesPopup; // @synthesize tlsCertificatesPopup=_tlsCertificatesPopup;
@property(nonatomic) BOOL accountNeedsVerification; // @synthesize accountNeedsVerification=_accountNeedsVerification;
//- (void).cxx_destruct;
- (void)tlsCertificatesPopUpClicked:(id)arg1;
@property(retain, nonatomic) NSNumber *accountAllowsInsecureAuthentication;
- (void)viewWillAppear;
@property(retain) ACAccount *representedObject;
- (void)_serverSettingsControllerCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

