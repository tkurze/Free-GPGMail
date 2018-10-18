//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ServerSettingsController.h"

@class NSURL;

@interface EWSServerSettingsController : ServerSettingsController
{
}

+ (id)keyPathsForValuesAffectingAccountExternalURL;
+ (id)keyPathsForValuesAffectingAccountInternalURL;
@property(retain, nonatomic) NSURL *accountExternalURL;
@property(retain, nonatomic) NSURL *accountInternalURL;
- (id)advancedSettingsControllerIdentifier;
- (id)advancedSettingsSegueIdentifier;

@end

