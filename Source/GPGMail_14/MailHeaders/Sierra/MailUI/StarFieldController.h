//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class MTMMailbox, NSDictionary, NSMutableArray, NSMutableDictionary, NSTimer, NSURL;

@interface StarFieldController : NSObject
{
    NSMutableDictionary *_windowControllers;	// 8 = 0x8
    NSMutableDictionary *_bufferedControllers;	// 16 = 0x10
    id <MTMMailboxControllerProtocol> _activeWindowController;	// 24 = 0x18
    NSMutableArray *_thumbnailUpdateQueue;	// 32 = 0x20
    NSDictionary *_sharedDisplayState;	// 40 = 0x28
    BOOL _isInTimeMachine;	// 48 = 0x30
    BOOL _showChangedItemsOnly;	// 49 = 0x31
    BOOL _timeMachineStarted;	// 50 = 0x32
    BOOL _firstThumbnailUpdateRequest;	// 51 = 0x33
    BOOL _hasAtLeastSentOneThumbnail;	// 52 = 0x34
    BOOL _dismissed;	// 53 = 0x35
    id <MTMMailboxControllerProtocol> _currentTimeWindowController;	// 56 = 0x38
    NSDictionary *_mailDisplayState;	// 64 = 0x40
    NSTimer *_updateTimer;	// 72 = 0x48
    MTMMailbox *_pausedMailbox;	// 80 = 0x50
    struct CGRect _mailFrame;	// 88 = 0x58
    struct CGRect _initialFrame;	// 120 = 0x78
}

+ (id)sharedController;	// IMP=0x00000001002b5856
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001002b579c
+ (id)keyPathsForValuesAffectingIsInTimeMachine;	// IMP=0x00000001002b577c
@property(retain, nonatomic) MTMMailbox *pausedMailbox; // @synthesize pausedMailbox=_pausedMailbox;
@property(nonatomic) BOOL dismissed; // @synthesize dismissed=_dismissed;
@property(nonatomic) BOOL hasAtLeastSentOneThumbnail; // @synthesize hasAtLeastSentOneThumbnail=_hasAtLeastSentOneThumbnail;
@property(nonatomic) BOOL firstThumbnailUpdateRequest; // @synthesize firstThumbnailUpdateRequest=_firstThumbnailUpdateRequest;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) NSDictionary *mailDisplayState; // @synthesize mailDisplayState=_mailDisplayState;
@property(nonatomic) struct CGRect initialFrame; // @synthesize initialFrame=_initialFrame;
@property(nonatomic) struct CGRect mailFrame; // @synthesize mailFrame=_mailFrame;
@property(nonatomic) __weak id <MTMMailboxControllerProtocol> currentTimeWindowController; // @synthesize currentTimeWindowController=_currentTimeWindowController;
@property(nonatomic) BOOL timeMachineStarted; // @synthesize timeMachineStarted=_timeMachineStarted;
@property(nonatomic) BOOL showChangedItemsOnly; // @synthesize showChangedItemsOnly=_showChangedItemsOnly;
@property(nonatomic) BOOL isInTimeMachine; // @synthesize isInTimeMachine=_isInTimeMachine;
- (void).cxx_destruct;	// IMP=0x00000001002b908b
@property(retain, nonatomic) NSDictionary *sharedDisplayState;
- (void)restoreFromURL:(id)arg1;	// IMP=0x00000001002b8d46
- (void)_showChangedItemsOnlyToggled:(unsigned char)arg1;	// IMP=0x00000001002b8d15
- (id)deactivateWindowForURL:(id)arg1;	// IMP=0x00000001002b8b2b
- (id)_activateWindowForURL:(id)arg1 changedItemsOnly:(unsigned char)arg2 atFrame:(struct CGRect)arg3;	// IMP=0x00000001002b87c7
- (id)revisionIDForURL:(id)arg1;	// IMP=0x00000001002b8632
- (id)_correctedURLForURL:(id)arg1 proposedQueryString:(id)arg2;	// IMP=0x00000001002b8439
- (void)scheduleUpdateForURL:(id)arg1 withFrame:(struct CGRect)arg2;	// IMP=0x00000001002b7f34
- (void)_updateNextThumbnail:(id)arg1;	// IMP=0x00000001002b7da2
- (void)markSnapshotAsDirty:(id)arg1;	// IMP=0x00000001002b79f1
- (void)updateThumbnailForURL:(id)arg1 withFrame:(struct CGRect)arg2;	// IMP=0x00000001002b7852
- (void)updateAllThumbnails;	// IMP=0x00000001002b77f7
- (void)_updateAllThumbnails;	// IMP=0x00000001002b7622
- (void)timeMachineWasDismissed;	// IMP=0x00000001002b72b4
- (BOOL)startTimeMachine;	// IMP=0x00000001002b6a4a
- (void)removeWindowControllerForURL:(id)arg1;	// IMP=0x00000001002b6957
- (id)windowControllerForURL:(id)arg1 forDisplay:(BOOL)arg2 canCreate:(BOOL)arg3;	// IMP=0x00000001002b654c
- (void)appHasExitedTimeMachineAndFinishedRestoring;	// IMP=0x00000001002b638b
- (void)startExitTransitionOfWindowController:(id)arg1;	// IMP=0x00000001002b6305
- (void)_enterTransitionDidEnd:(id)arg1;	// IMP=0x00000001002b624a
- (void)startEnterTransitionOfWindowController:(id)arg1 fromFrame:(struct CGRect)arg2;	// IMP=0x00000001002b5fd8
@property(nonatomic) __weak id <MTMMailboxControllerProtocol> activeWindowController;
- (void)showCurrentStateMailDisplayState:(id)arg1;	// IMP=0x00000001002b5bf1
@property(readonly, nonatomic) NSURL *mainURL;
- (void)dealloc;	// IMP=0x00000001002b5ad3
- (id)init;	// IMP=0x00000001002b5921

@end

