//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "StackElementDelegate-Protocol.h"

@class CALayer, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface StackController : NSObject <StackElementDelegate>
{
    NSMutableArray *_stackedItems;
    NSMutableSet *_stackedItemsSet;
    NSMutableArray *_orderedItems;
    NSMutableSet *_orderedItemsSet;
    NSMutableDictionary *_stackElementsByItem;
    NSMutableDictionary *_loadRequestDatesByItem;
    BOOL _isAnimating;
    BOOL _animateStateTransitions;
    BOOL _updateNeeded;
    BOOL _loadingData;
    BOOL _waitingForTransitionToStackState;
    BOOL _isTerminating;
    BOOL _isSuspended;
    BOOL _preventStackBeforeOffscreen;
    id /*<StackDataSource>*/ _dataSource;
    id /*<StackDelegate>*/ _delegate;
    NSArray *_itemsToDisplay;
    CALayer *_stackContainerLayer;
    double _lastDisplayedItemsUpdateRequest;
    double _lastTransitionToStackState;
    unsigned long long _transactionCount;
    struct CGSize _stackCenterOffset;
}

@property(nonatomic) BOOL preventStackBeforeOffscreen; // @synthesize preventStackBeforeOffscreen=_preventStackBeforeOffscreen;
@property(nonatomic) BOOL isSuspended; // @synthesize isSuspended=_isSuspended;
@property(nonatomic) BOOL isTerminating; // @synthesize isTerminating=_isTerminating;
@property(nonatomic) BOOL waitingForTransitionToStackState; // @synthesize waitingForTransitionToStackState=_waitingForTransitionToStackState;
@property(nonatomic) BOOL loadingData; // @synthesize loadingData=_loadingData;
@property(nonatomic) BOOL updateNeeded; // @synthesize updateNeeded=_updateNeeded;
@property(nonatomic) unsigned long long transactionCount; // @synthesize transactionCount=_transactionCount;
@property(nonatomic) double lastTransitionToStackState; // @synthesize lastTransitionToStackState=_lastTransitionToStackState;
@property(nonatomic) double lastDisplayedItemsUpdateRequest; // @synthesize lastDisplayedItemsUpdateRequest=_lastDisplayedItemsUpdateRequest;
@property(nonatomic) struct CGSize stackCenterOffset; // @synthesize stackCenterOffset=_stackCenterOffset;
@property(retain, nonatomic) CALayer *stackContainerLayer; // @synthesize stackContainerLayer=_stackContainerLayer;
@property(copy, nonatomic) NSArray *itemsToDisplay; // @synthesize itemsToDisplay=_itemsToDisplay;
@property(nonatomic) BOOL animateStateTransitions; // @synthesize animateStateTransitions=_animateStateTransitions;
@property(nonatomic) __weak id /*<StackDelegate>*/ delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id /*<StackDataSource>*/ dataSource; // @synthesize dataSource=_dataSource;
//- (void).cxx_destruct;
- (void)stackElement:(id)arg1 targetStateDidChangeFrom:(long long)arg2 to:(long long)arg3;
- (void)stackElement:(id)arg1 currentStateDidChangeFrom:(long long)arg2 to:(long long)arg3;
- (void)stackElement:(id)arg1 willRemoveLayer:(id)arg2;
- (id)layerForStackElement:(id)arg1;
@property(readonly, nonatomic) BOOL stackIsTerminating;
- (void)cancelPendingActions;
- (void)updateIsAnimating;
@property(nonatomic) BOOL isAnimating;
- (BOOL)isAnyStackElementBeingStacked;
- (id)stackElementToReshowUnderneathStackElement:(id)arg1;
- (id)orderedStackedElementsWithOrientation:(long long)arg1;
- (void)stackDataSourceDidLoadItemData:(id)arg1;
- (void)updateOrientationForStackElement:(id)arg1;
- (void)updateStackElement:(id)arg1;
- (void)updateStackElements;
- (void)setNeedsToUpdateStackElements;
- (void)endTransaction;
- (void)beginTransaction;
- (BOOL)isDataAvailableForStackElement:(id)arg1 loadIfNeeded:(BOOL)arg2;
- (void)removeStackElement:(id)arg1;
- (id)stackElementForItem:(id)arg1 createIfNeeded:(BOOL)arg2 withInitialState:(long long)arg3;
- (id)stackElementForItem:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)keyForItem:(id)arg1;
- (void)removeStackedLayers:(BOOL)arg1;
- (void)updateDisplayedItems;
- (void)addStackedItem:(id)arg1;
- (void)setNeedsToUpdateDisplayedItems:(BOOL)arg1 immediately:(BOOL)arg2;
- (void)displayStackedLayersForItems:(id)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

