//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSMutableArray, NSMutableString;

@interface _MCMimeEnrichedReader : NSObject
{
    CDStruct_2ada2998 _inputBuffer;	// 8 = 0x8
    long long _currentIndex;	// 192 = 0xc0
    long long _inputLength;	// 200 = 0xc8
    unsigned int _noFillLevel:30;	// 208 = 0xd0
    unsigned int _eatOneNewline:1;	// 211 = 0xd3
    unsigned int _insideComment:1;	// 211 = 0xd3
    long long _lastQuoteLevel;	// 216 = 0xd8
    NSMutableArray *_commandStack;	// 224 = 0xe0
    NSMutableString *_outputString;	// 232 = 0xe8
    NSMutableString *_outputBuffer;	// 240 = 0xf0
    BOOL outputShouldBeHTML;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x000000000005e5b6
- (id)description;	// IMP=0x000000000005e50d
- (id)debugDescription;	// IMP=0x000000000005e2a0
- (void)convertEnrichedString:(id)arg1 intoPlainOutputString:(id)arg2;	// IMP=0x000000000005e0f2
- (void)convertEnrichedString:(id)arg1 intoOutputString:(id)arg2;	// IMP=0x000000000005df2b
- (void)convertRichTextString:(id)arg1 intoOutputString:(id)arg2;	// IMP=0x000000000005dd1f
- (long long)readTokenInto:(id *)arg1;	// IMP=0x000000000005d83a
- (id)copyCommand;	// IMP=0x000000000005d6b8
- (id)copyNextTokenWithDelimiters:(id)arg1;	// IMP=0x000000000005d2df
- (id)currentFont;	// IMP=0x000000000005d2d0
- (void)parseParameterString:(id)arg1;	// IMP=0x000000000005cfbe
- (void)endCommand:(id)arg1;	// IMP=0x000000000005ce1b
- (void)beginCommand:(id)arg1;	// IMP=0x000000000005cbfe
- (void)setupFontStackEntry:(id)arg1;	// IMP=0x000000000005ca57
- (void)handleNoParameterCommand:(const CDStruct_8e792ae2 *)arg1;	// IMP=0x000000000005c8ef
- (void)closeUpQuoting;	// IMP=0x000000000005c877
- (void)fixConsecutiveSpaces:(id)arg1;	// IMP=0x000000000005c4fb
- (void)nowWouldBeAGoodTimeToAppendToTheAttributedString;	// IMP=0x000000000005bce2
- (void)resetStateWithString:(id)arg1 outputString:(id)arg2;	// IMP=0x000000000005bbad
- (void)appendStringToBuffer:(id)arg1;	// IMP=0x000000000005bb08
- (id)init;	// IMP=0x000000000005bacb
- (id)parenthesesSet;	// IMP=0x000000000005ba5f
- (id)punctuationSet;	// IMP=0x000000000005b9f3

@end

