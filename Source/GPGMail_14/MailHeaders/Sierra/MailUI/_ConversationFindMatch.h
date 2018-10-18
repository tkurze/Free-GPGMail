//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "NSTextFinderAsynchronousDocumentFindMatch.h"

@class ConversationViewFindController, MUICollectionView, NSArray, NSString;

@interface _ConversationFindMatch : NSObject <NSTextFinderAsynchronousDocumentFindMatch>
{
    MUICollectionView *_containingView;	// 8 = 0x8
    id <NSTextFinderAsynchronousDocumentFindMatch> _backingFindMatch;	// 16 = 0x10
    unsigned long long _cellIndex;	// 24 = 0x18
    NSArray *_textRectsInDocument;	// 32 = 0x20
    ConversationViewFindController *_findController;	// 40 = 0x28
}

@property(retain, nonatomic) ConversationViewFindController *findController; // @synthesize findController=_findController;
@property(retain, nonatomic) NSArray *textRectsInDocument; // @synthesize textRectsInDocument=_textRectsInDocument;
@property(nonatomic) unsigned long long cellIndex; // @synthesize cellIndex=_cellIndex;
@property(retain, nonatomic) id <NSTextFinderAsynchronousDocumentFindMatch> backingFindMatch; // @synthesize backingFindMatch=_backingFindMatch;
@property(retain, nonatomic) MUICollectionView *containingView; // @synthesize containingView=_containingView;
- (void).cxx_destruct;	// IMP=0x0000000100135ac4
- (void)generateTextImage:(CDUnknownBlockType)arg1;	// IMP=0x0000000100135695
@property(readonly, nonatomic) NSArray *textRects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

