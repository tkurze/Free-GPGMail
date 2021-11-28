//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <AppKit/NSViewController.h>

@class FontPreferenceContainerView, NSArray, NSFont, NSMutableDictionary, NSPopUpButton, NSTextView;

@interface FontsAndColorsPreferences : NSViewController
{
    NSMutableDictionary *_midYDict;
    BOOL _isQuotedTextColored;
    BOOL _isPlainTextOfFixedWidth;
    NSFont *_messageListFont;
    NSFont *_messageFont;
    NSFont *_fixedWidthFont;
    NSArray *_colorList;
    FontPreferenceContainerView *_messageListContainerView;
    FontPreferenceContainerView *_messageTextContainerView;
    FontPreferenceContainerView *_fixedWidthContainerView;
    NSPopUpButton *_colorPopupOne;
    NSPopUpButton *_colorPopupTwo;
    NSPopUpButton *_colorPopupThree;
    NSTextView *_exampleTextView;
    NSArray *_fontPrefContainerViews;
    double _containerSuperViewSpacingY;
    double _containerContainerSpacingY;
    long long _changingFontPreference;
    NSPopUpButton *_lastColorPopupSelected;
}

+ (id)keyPathsForValuesAffectingFixedWidthSampleFont;
+ (id)keyPathsForValuesAffectingMessageSampleFont;
+ (id)keyPathsForValuesAffectingMessageListSampleFont;
@property(nonatomic) __weak NSPopUpButton *lastColorPopupSelected; // @synthesize lastColorPopupSelected=_lastColorPopupSelected;
@property(nonatomic) long long changingFontPreference; // @synthesize changingFontPreference=_changingFontPreference;
@property(nonatomic) double containerContainerSpacingY; // @synthesize containerContainerSpacingY=_containerContainerSpacingY;
@property(nonatomic) double containerSuperViewSpacingY; // @synthesize containerSuperViewSpacingY=_containerSuperViewSpacingY;
@property(copy, nonatomic) NSArray *fontPrefContainerViews; // @synthesize fontPrefContainerViews=_fontPrefContainerViews;
@property(retain, nonatomic) NSTextView *exampleTextView; // @synthesize exampleTextView=_exampleTextView;
@property(nonatomic) __weak NSPopUpButton *colorPopupThree; // @synthesize colorPopupThree=_colorPopupThree;
@property(nonatomic) __weak NSPopUpButton *colorPopupTwo; // @synthesize colorPopupTwo=_colorPopupTwo;
@property(nonatomic) __weak NSPopUpButton *colorPopupOne; // @synthesize colorPopupOne=_colorPopupOne;
@property(nonatomic) __weak FontPreferenceContainerView *fixedWidthContainerView; // @synthesize fixedWidthContainerView=_fixedWidthContainerView;
@property(nonatomic) __weak FontPreferenceContainerView *messageTextContainerView; // @synthesize messageTextContainerView=_messageTextContainerView;
@property(nonatomic) __weak FontPreferenceContainerView *messageListContainerView; // @synthesize messageListContainerView=_messageListContainerView;
@property(retain, nonatomic) NSArray *colorList; // @synthesize colorList=_colorList;
@property(nonatomic) BOOL isPlainTextOfFixedWidth; // @synthesize isPlainTextOfFixedWidth=_isPlainTextOfFixedWidth;
@property(nonatomic) BOOL isQuotedTextColored; // @synthesize isQuotedTextColored=_isQuotedTextColored;
@property(retain, nonatomic) NSFont *fixedWidthFont; // @synthesize fixedWidthFont=_fixedWidthFont;
@property(retain, nonatomic) NSFont *messageFont; // @synthesize messageFont=_messageFont;
@property(retain, nonatomic) NSFont *messageListFont; // @synthesize messageListFont=_messageListFont;
//- (void).cxx_destruct;
- (void)_setFont:(id)arg1 forPreferenceContainer:(id)arg2;
- (id)_getFontForPreferenceContainer:(id)arg1;
- (unsigned long long)validModesForFontPanel:(id)arg1;
- (void)_colorPicked:(id)arg1;
- (void)colorPopupChanged:(id)arg1;
- (void)colorQuotesButtonClicked:(id)arg1;
- (void)_updateColorList;
- (void)_updateExampleTextView;
- (void)_setColor:(id)arg1 forPopup:(id)arg2;
- (void)_setOtherColor:(id)arg1 forPopup:(id)arg2;
- (void)changeFont:(id)arg1;
- (id)_containerViewForFontPreference:(long long)arg1;
- (void)toggleUseFixedWidthFont:(id)arg1;
- (void)toggleColorQuotedText:(id)arg1;
- (void)selectFont:(id)arg1;
- (void)_populateFontPrefContainers;
- (id)_sampleFontForFont:(id)arg1;
@property(readonly, nonatomic) NSFont *fixedWidthSampleFont;
@property(readonly, nonatomic) NSFont *messageSampleFont;
@property(readonly, nonatomic) NSFont *messageListSampleFont;
- (void)_replaceExampleTextView;
- (void)initializeFromDefaults;
- (void)dealloc;
- (void)awakeFromNib;

@end

