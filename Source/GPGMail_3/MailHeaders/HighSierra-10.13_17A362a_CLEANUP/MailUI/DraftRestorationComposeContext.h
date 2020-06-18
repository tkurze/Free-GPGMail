//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "ComposeContext-Protocol.h"

@class ComposeWindowController, NSDictionary, NSSet, NSString;

@interface DraftRestorationComposeContext : NSObject <ComposeContext>
{
    BOOL _isMiniaturized;
    BOOL _blockRemoteContent;
    ComposeWindowController *_windowController;
    NSSet *_targetMessages;
}

@property(nonatomic) BOOL blockRemoteContent; // @synthesize blockRemoteContent=_blockRemoteContent;
@property(copy, nonatomic) NSSet *targetMessages; // @synthesize targetMessages=_targetMessages;
@property(nonatomic) BOOL isMiniaturized; // @synthesize isMiniaturized=_isMiniaturized;
@property(nonatomic) __weak ComposeWindowController *windowController; // @synthesize windowController=_windowController;
//- (void).cxx_destruct;
- (void)controllerWillClose:(id)arg1;
- (id)windowControllerWithState:(id)arg1;
//- (void)presentEditor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)controllerInitialized:(id)arg1;
- (void)loadCompleted:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *editorSettings;
//- (void)generateQuotedContentWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL isInteractive;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) BOOL shouldBlockTermination;
@property(readonly, nonatomic) BOOL shouldTransientlyActivateApplication;
- (void)_parseSavedState:(id)arg1;
- (id)initWithComposeDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
