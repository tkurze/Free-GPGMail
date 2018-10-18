//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSString, NSURL;

@interface ImportItem : NSObject
{
    BOOL _isEnabled;	// 8 = 0x8
    NSString *_displayName;	// 16 = 0x10
    double _progressValue;	// 24 = 0x18
    double _progressStart;	// 32 = 0x20
    NSURL *_url;	// 40 = 0x28
}

@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) double progressStart; // @synthesize progressStart=_progressStart;
@property(nonatomic) double progressValue; // @synthesize progressValue=_progressValue;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
- (void).cxx_destruct;	// IMP=0x00000001001afb64
- (id)init;	// IMP=0x00000001001af9f7
- (id)initWithURL:(id)arg1;	// IMP=0x00000001001af97f

@end

