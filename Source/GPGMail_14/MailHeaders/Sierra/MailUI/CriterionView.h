//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ColorBackgroundView.h"

@class CriteriaUIHelper, MFMailbox, MailboxesChooser, NSButton, NSDatePicker, NSMenu, NSNumberFormatter, NSPopUpButton, NSString, NSTextField, NSView;

@interface CriterionView : ColorBackgroundView
{
    long long _criterionType;	// 152 = 0x98
    BOOL _isSmartMailboxCriterion;	// 160 = 0xa0
    NSView *_headerCriteriaView;	// 168 = 0xa8
    NSView *_simpleCriteriaView;	// 176 = 0xb0
    NSView *_accountOrGroupView;	// 184 = 0xb8
    NSView *_mailboxesView;	// 192 = 0xc0
    NSView *_daysOldDatesView;	// 200 = 0xc8
    NSView *_simpleDatesView;	// 208 = 0xd0
    NSView *_daysAgoDatesView;	// 216 = 0xd8
    NSView *_inThelastDaysDatesView;	// 224 = 0xe0
    NSView *_daysAgoRangeDatesView;	// 232 = 0xe8
    NSView *_beforeAfterDatesView;	// 240 = 0xf0
    NSView *_dateRangeDatesView;	// 248 = 0xf8
    NSView *_attachmentTypeView;	// 256 = 0x100
    NSView *_flaggedStatusView;	// 264 = 0x108
    NSNumberFormatter *_daysFormatter;	// 272 = 0x110
    NSNumberFormatter *_daysOldFormatter;	// 280 = 0x118
    MailboxesChooser *_mailboxesChooser;	// 288 = 0x120
    CriteriaUIHelper *_owner;	// 296 = 0x128
    NSButton *_removeButton;	// 304 = 0x130
    NSButton *_addButton;	// 312 = 0x138
    NSView *_currentView;	// 320 = 0x140
    NSPopUpButton *_criterionPopUp;	// 328 = 0x148
    NSPopUpButton *_qualifierPopUp;	// 336 = 0x150
    NSTextField *_expressionStringField;	// 344 = 0x158
    NSTextField *_expressionNumberField;	// 352 = 0x160
    NSTextField *_expressionOtherNumberField;	// 360 = 0x168
    NSDatePicker *_dateFieldPicker;	// 368 = 0x170
    NSDatePicker *_otherDateFieldPicker;	// 376 = 0x178
    NSPopUpButton *_unitsPopUp;	// 384 = 0x180
    NSMenu *_criterionMenu;	// 392 = 0x188
    NSMenu *_dateQualifierMenu;	// 400 = 0x190
    NSString *_expressionGuess;	// 408 = 0x198
    MFMailbox *_mailboxBeingEdited;	// 416 = 0x1a0
    long long _criterionTypeForOtherArea;	// 424 = 0x1a8
}

@property(nonatomic) long long criterionTypeForOtherArea; // @synthesize criterionTypeForOtherArea=_criterionTypeForOtherArea;
@property(retain, nonatomic) MFMailbox *mailboxBeingEdited; // @synthesize mailboxBeingEdited=_mailboxBeingEdited;
@property(copy, nonatomic) NSString *expressionGuess; // @synthesize expressionGuess=_expressionGuess;
@property(nonatomic) BOOL isSmartMailboxCriterion; // @synthesize isSmartMailboxCriterion=_isSmartMailboxCriterion;
@property(retain, nonatomic) NSMenu *dateQualifierMenu; // @synthesize dateQualifierMenu=_dateQualifierMenu;
@property(retain, nonatomic) NSMenu *criterionMenu; // @synthesize criterionMenu=_criterionMenu;
@property(nonatomic) __weak NSPopUpButton *unitsPopUp; // @synthesize unitsPopUp=_unitsPopUp;
@property(nonatomic) __weak NSDatePicker *otherDateFieldPicker; // @synthesize otherDateFieldPicker=_otherDateFieldPicker;
@property(nonatomic) __weak NSDatePicker *dateFieldPicker; // @synthesize dateFieldPicker=_dateFieldPicker;
@property(nonatomic) __weak NSTextField *expressionOtherNumberField; // @synthesize expressionOtherNumberField=_expressionOtherNumberField;
@property(nonatomic) __weak NSTextField *expressionNumberField; // @synthesize expressionNumberField=_expressionNumberField;
@property(nonatomic) __weak NSTextField *expressionStringField; // @synthesize expressionStringField=_expressionStringField;
@property(nonatomic) __weak NSPopUpButton *qualifierPopUp; // @synthesize qualifierPopUp=_qualifierPopUp;
@property(nonatomic) __weak NSPopUpButton *criterionPopUp; // @synthesize criterionPopUp=_criterionPopUp;
@property(nonatomic) __weak NSView *currentView; // @synthesize currentView=_currentView;
@property(retain, nonatomic) NSButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) NSButton *removeButton; // @synthesize removeButton=_removeButton;
@property(nonatomic) __weak CriteriaUIHelper *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) MailboxesChooser *mailboxesChooser; // @synthesize mailboxesChooser=_mailboxesChooser;
@property(retain, nonatomic) NSNumberFormatter *daysOldFormatter; // @synthesize daysOldFormatter=_daysOldFormatter;
@property(retain, nonatomic) NSNumberFormatter *daysFormatter; // @synthesize daysFormatter=_daysFormatter;
@property(retain, nonatomic) NSView *flaggedStatusView; // @synthesize flaggedStatusView=_flaggedStatusView;
@property(retain, nonatomic) NSView *attachmentTypeView; // @synthesize attachmentTypeView=_attachmentTypeView;
@property(retain, nonatomic) NSView *dateRangeDatesView; // @synthesize dateRangeDatesView=_dateRangeDatesView;
@property(retain, nonatomic) NSView *beforeAfterDatesView; // @synthesize beforeAfterDatesView=_beforeAfterDatesView;
@property(retain, nonatomic) NSView *daysAgoRangeDatesView; // @synthesize daysAgoRangeDatesView=_daysAgoRangeDatesView;
@property(retain, nonatomic) NSView *inThelastDaysDatesView; // @synthesize inThelastDaysDatesView=_inThelastDaysDatesView;
@property(retain, nonatomic) NSView *daysAgoDatesView; // @synthesize daysAgoDatesView=_daysAgoDatesView;
@property(retain, nonatomic) NSView *simpleDatesView; // @synthesize simpleDatesView=_simpleDatesView;
@property(retain, nonatomic) NSView *daysOldDatesView; // @synthesize daysOldDatesView=_daysOldDatesView;
@property(retain, nonatomic) NSView *mailboxesView; // @synthesize mailboxesView=_mailboxesView;
@property(retain, nonatomic) NSView *accountOrGroupView; // @synthesize accountOrGroupView=_accountOrGroupView;
@property(retain, nonatomic) NSView *simpleCriteriaView; // @synthesize simpleCriteriaView=_simpleCriteriaView;
@property(retain, nonatomic) NSView *headerCriteriaView; // @synthesize headerCriteriaView=_headerCriteriaView;
- (void).cxx_destruct;	// IMP=0x0000000100142239
- (void)ownerSearchAreaChanged:(id)arg1;	// IMP=0x0000000100141a4e
- (void)mailboxCriterionPopUpChangedSelection:(id)arg1;	// IMP=0x00000001001418d8
- (void)makeRemoveButtonEnabled:(BOOL)arg1;	// IMP=0x000000010014188c
- (void)criterionPopupChanged:(id)arg1;	// IMP=0x0000000100141777
- (void)_criterionPopupWillPopup:(id)arg1;	// IMP=0x00000001001414af
- (void)qualifierPopupChanged:(id)arg1;	// IMP=0x0000000100141431
- (BOOL)_populateQualifierPopup;	// IMP=0x0000000100140798
- (void)putHeaderCriteriaInPopUpMenu;	// IMP=0x0000000100140482
- (id)_timeSince1970StringFromDatePicker:(id)arg1 atEndOfDay:(BOOL)arg2;	// IMP=0x00000001001403cc
- (id)_subcriteriaForRelativeDatesFrom:(long long)arg1 to:(long long)arg2 units:(long long)arg3 criterionType:(long long)arg4;	// IMP=0x00000001001401dd
- (void)_insertBestGuessForExpressionField;	// IMP=0x000000010013fd00
- (void)_configureViewForQualifierTag:(long long)arg1 criterion:(id)arg2;	// IMP=0x000000010013f098
- (void)_setEnglishStringsForPopUpMenuHeaderItems:(id)arg1;	// IMP=0x000000010013eea0
- (id)criterion;	// IMP=0x000000010013d770
- (void)configureForCriterion:(id)arg1;	// IMP=0x000000010013c1e8
- (id)_menuUsingInfo:(struct menuItemInfo *)arg1 length:(long long)arg2;	// IMP=0x000000010013bb95
- (void)setIsSmartMailboxCriterion:(BOOL)arg1 mailbox:(id)arg2;	// IMP=0x000000010013ba64
- (void)awakeFromNib;	// IMP=0x000000010013b6bb
@property(nonatomic) long long criterionType;
- (void)dealloc;	// IMP=0x000000010013b5bc

@end

